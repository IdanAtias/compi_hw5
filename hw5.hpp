#ifndef HW5
#define HW5

#include <string>
#include <list>
#include <stack>
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
	
	//CaseList stuff
	stack<int> quadList;
	stack<string> valueList;
	stack<string> typeList;

} STYPE;

#define YYSTYPE STYPE

#endif
