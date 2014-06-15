/****************************************************/
/* File: util.h                                     */
/* Utility functions for the TINY compiler          */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

#ifndef _UTIL_H_
#define _UTIL_H_

/* Procedure printToken prints a token 
 * and its lexeme to the listing file
 */
void printToken(TokenType token, const char* );

/* Function newStmtNode creates a new statement
 * node for syntax tree construction
 */
//TreeNode * newStmtNode(StmtKind);

/* Function newExpNode creates a new expression 
 * node for syntax tree construction
 */
//TreeNode * newExpNode(ExpKind);

/* Function newModuleNode creates a new Module
 * node for syntax tree construction
 */
//TreeNode * newModuleNode(ModuleKind);
char * copyString( char * );

/* procedure printTree prints a syntax tree to the 
 * listing file using indentation to indicate subtrees
 */
// void printTree( TreeNode * );
#endif
