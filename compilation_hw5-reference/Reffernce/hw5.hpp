#ifndef HW5_236360
#define HW5_236360

#include <string>
#include <list>

typedef struct {
	std::string type;
	std::string id;
	
	int val;
	std::string str;
	
	std::list<int> nextList;
	std::string tmpVar;
	
	std::list<int> falseList;
	std::list<int> trueList;
	
	std::list<int> breakList;
	
	int quad;
	
} STYPE;

#define YYSTYPE STYPE

#endif
