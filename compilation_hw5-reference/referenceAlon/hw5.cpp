#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int yyparse();

void errLex(){
    cout << "LEXICAL ERROR" << endl;
    exit(0);
}

void errSyn(){
    cout << "SYNTACTIC ERROR" << endl;
    exit(0);
}

void errSem(){
    cout << "SEMANTIC ERROR" << endl;
    exit(0);
}


