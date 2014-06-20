#ifndef _SYMTAB_H_
#define _SYMTAB_H_

#include <iostream>
#include <string>


#define SIZE 211
#define SHIFT 4


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
	int use;
	std::string type;		//"const",  variable : "integer",  "float",  "function"
	int volumn;				//[100]
	int memloc;				//record memory_location
	int state;
	int next_hop;
	int former_hop;
};



/** symboltable, store array of bins**/
class symboltable
{
public:
	symboltable(){ this->forward = this; };
	~symboltable(){};
	

	// int st_lookup(std::string name, ) {

	// }

	void st_insert(std::string name, int lineno, int loc, std::string type) {
		int h = this->hash_find_unit(name);
		table_unit l = units[h];
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
		puts("finish insert:");
		puts("name:");
		puts(name.c_str());
		puts("type");
	}

public:
	int hash_find_unit(std::string name){ 
		int res;
		for (int i=0; i<name.length(); i++) {
			res = ((res << SHIFT) + name[i]) % SIZE;
		}
		return res;
	};

private:
	table_unit units[SIZE];
	symboltable * forward;
};


extern symboltable* st;

#endif