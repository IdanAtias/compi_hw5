#ifndef __SymTable__
#define __SymTable__

#include <map>
#include <string>
#include <iostream>
#include "matrix.h"
using namespace std;

class TableValue {
public:
	string id;
	string type;
	int val;
	int offset;
	QSMatrix<int> matrix;	
	int rows;
	int cols;
	int size;
};


class SymTable {
	map<string, TableValue> table;
public:
		void insertVar(string id, string type, int val, int offset);
		void insertVar(string id, string type, QSMatrix<int>& matrix, int offset);
		void insertVar(string id, string type, int rows, int cols, int size, int offset);
		bool isVarDefined(string id) const;
		void printTableEntries(string id) const;
		string getVarType(string id) const;
		int getVarVal(string id) const;
		QSMatrix<int> getVarMatrix(string id) const;
		int getVarOffset(string id) const;
		int get_rows(string id) const;
		int get_cols(string id) const;
		int get_matrix_size(string id) const;
		void setRowsCols(string id, int newRows, int newCols);
};

#endif