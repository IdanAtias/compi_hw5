#ifndef HW5
#define HW5

#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <vector>
#include <list>
#include "matrix.h"

using namespace std;

typedef struct {
	bool constVar;
	string type;
	string id;
	int val;
	int location;
	int rows;
	int cols;
	int size;
	list<int> trueList;
	list<int> falseList;
	list<int> nextList;
	int quad;
} yystype;

#define YYSTYPE yystype

#endif
