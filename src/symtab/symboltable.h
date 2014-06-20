#ifndef _SYMTAB_H_
#define _SYMTAB_H_

#include <iostream>
#include <string>


#define SIZE 211
#define SHIFT 4

class links_recorder;
class table_unit;
class symboltable;


class lines_recorder
{
public:
	lines_recorder() {};
	~lines_recorder() {};

	/* data */
public:
	int lineno;
	lines_recorder * next;
};


/** table_unit store a single bins**/
class table_unit
{
public:
	table_unit() {this->use = 0;};
	~table_unit() {};

	/* data */
public:
	table_unit * next;
	std::string name;		//name of variable or const;
	lines_recorder *lines;	
	int use;				//record usage
	std::string type;		//"const",  variable : "integer",  "float",  "function"
	int volumn;				//[100]
	int memloc;				//record memory_location
	symboltable * func_proc_link;	//function or procedure link
};



/** symboltable, store array of bins**/
class symboltable
{
public:
	symboltable(){ this->forward = this; };
	~symboltable(){};
	

	table_unit * st_lookup(std::string name) {
		int h = this->hash_find_unit(name);
		symboltable *p = this;
		while (p->forward != p) {
			table_unit l = p->units[h];
			while ((l.use == 1) && (name.compare(l.name) != 0)) {
				l = *l.next;
			}
			if ((l.use == 1) && (name.compare(l.name) == 0)) {
				return &l;
			}
			p = p->forward;
		}
		return nullptr;
	}


	void st_func_proc(std::string name, symboltable *st) {
		int h = this->hash_find_unit(name);
		table_unit l = this->units[h];
		while ((l.use != 0) && (name.compare(l.name) != 0)) {
			l = *l.next;
		}

		if ((l.use == 1) && (name.compare(l.name) == 0)) {
			l.func_proc_link = st;
		}
	}

	void st_insert(std::string name, int lineno, int loc, std::string type) {
		int h = this->hash_find_unit(name);
		table_unit l = this->units[h];
		while ((l.use != 0) && (name.compare(l.name) != 0)) {
			l = *l.next;
		}
		if (l.use == 0) {
			l = *new table_unit();
			l.use = 1;
			l.name = name;
			l.type = type;
			l.lines = new lines_recorder();
			l.lines->lineno = lineno;
			l.lines->next = NULL;
			l.next = &units[h];
			units[h] = l;
		} else {
			lines_recorder *t = l.lines;
			while (t->next != NULL) t = t->next;
			t->next = new lines_recorder;
			t->next->lineno = lineno;
			t->next->next = NULL;
		}
		puts("---------------");
		puts("finish insert:");
		puts("name:");
		puts(name.c_str());
		puts("type:");
		puts(type.c_str());
	}

public:
	int hash_find_unit(std::string name){ 
		int res;
		for (int i=0; i<name.length(); i++) {
			res = ((res << SHIFT) + name[i]) % SIZE;
		}
		return res;
	};

	symboltable * forward;
private:
	table_unit units[SIZE];
	
};


extern symboltable* st;

#endif