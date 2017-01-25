#ifndef __symTable__
#define __symTable__

#include <vector>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

struct TableLine {
	string id;
	string type;
	int offset;
	bool isAssigned;
};

class SymTable {
public:
		vector<TableLine> table;
		void insertVar(string id, string type, int offset, bool isAssigned);
		bool isVarDefined(string id) const;
		void printTable() const;  
		string getVarType(string id) const;
		int getVarOffset(string id) const;
		bool isVarAssigned(string id) const;
		void setIsVarAssigned(string id, bool val);
};

#endif
