#define copy(x,y) x = y

int ffcount,fflevel,funclevel,f_level[100],valoflevel,currentlevel;
EXPRPTR used_list[100],defined_list[100],new_defs[100],new_decls[100];
EXPRPTR formals_list[100];
FFPTR new_def[100];
int l,c,peekc,errcount,in_index,true,false;

char cconst,linebuf[200],buffer[500];

FILE *lexin, *outfile,*savelex;

#ifndef yylval
YYSTYPE yylval;
#endif

struct {
	FILE *in_fdes;
	STRING in_name;
	int in_line;
} in_files[12];

STRING s,t,largest;

STRING strsave(char *s);

EXPRPTR identlistnode(EXPRPTR tail, char* name);
EXPRPTR filenode(char* filename, int first_line, int last_line, int cursor_position);
EXPRPTR connode(char *s1, char *s2);
EXPRPTR f_connode(float n);
EXPRPTR varnode(char *name, int argcount, EXPRPTR exprlist);
EXPRPTR opnode(char *name, int argcount, EXPRPTR exprlist, EXPRPTR file);
EXPRPTR eglobnode(EXPRPTR namelist);
EXPRPTR nglobnode(EXPRPTR namelist);
EXPRPTR valofnode(EXPRPTR exprlist);
EXPRPTR evalofnode(EXPRPTR exprlist);
EXPRPTR wherenode(EXPRPTR expr, EXPRPTR exprlist);
EXPRPTR defnode(char *name, int argcount, EXPRPTR argnames, EXPRPTR expr);
EXPRPTR declnode(char *name, EXPRPTR expr);
EXPRPTR identlistnode(EXPRPTR tail, char *name);
EXPRPTR listnode(EXPRPTR expr, EXPRPTR tail);
EXPRPTR exprlist2(EXPRPTR expr1, EXPRPTR expr2);




