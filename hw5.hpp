#ifndef HW4
#define HW4

#include <string>
#include <list>
using namespace std;

typedef struct {
	string type;
	string id;
	string place;
	int quad;
	
	//lists
	list<int> truelist;
	list<int> falselist;
	list<int> nextlist;
	
} STYPE;

#define YYSTYPE STYPE

#endif
