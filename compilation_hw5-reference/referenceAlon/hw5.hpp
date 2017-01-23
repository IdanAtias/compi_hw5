#ifndef __HW5_H
#define __HW5_H

#include <iostream>
#include <stdlib.h>
#include <list>
#include <sstream>

using namespace std;


void errLex();

void errSyn();

void errSem();

typedef enum Type { Matrix_type, Integer_type, String_type, Boolean_type } Type;

typedef struct STYPE {
	list<int> locations; 	// when parsing a Matrix rule, the locations of the items in the matrix
	Type type;
	int location;			// location in the symbol table in the intermediate language
	bool is_const;			// whether or not this is a compile-time const (basically NUM and NUM+NUM, NUM*NUM ...)

	// Only one of these is relevant, according to the type:
	string string_val;
	int int_val;
	bool bool_val;

	int matrix_x;
	int matrix_y;

	list<int> trueList;
	list<int> falseList;
	list<int> nextList;

	int quad;

public:

	STYPE() : is_const(false) {	}
	void copyFrom(const STYPE& other)
	{
		type = other.type;
		string_val = other.string_val;
		int_val = other.int_val;
		bool_val = other.bool_val;
		matrix_x = other.matrix_x;
		matrix_y = other.matrix_y;
		location = other.location;
		locations = other.locations;
		trueList = other.trueList;
		falseList = other.falseList;
		nextList = other.nextList;
		quad = other.quad;
	}
} STYPE;

#define YYSTYPE STYPE


#endif
