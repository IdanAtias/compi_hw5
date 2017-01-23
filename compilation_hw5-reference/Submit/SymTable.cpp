#include "SymTable.h"
using namespace std;

void SymTable::insertVar(string id, string type, int val, int offset) {
	TableValue newValue;
	newValue.id = id;
	newValue.type = type;
	newValue.val = val;	
	newValue.offset = offset;
	table.insert(pair<string,TableValue>(id,newValue));
}

void SymTable::insertVar(string id, string type, QSMatrix<int>& matrix, int offset) {
	TableValue newValue;
	newValue.id = id;
	newValue.type = type;
	newValue.matrix = matrix;
	newValue.offset = offset;
	table.insert(pair<string,TableValue>(id,newValue));
}

void SymTable::insertVar(string id, string type, int rows, int cols, int size, int offset) {
	TableValue newValue;
	newValue.id = id;
	newValue.type = type;
	newValue.rows = rows;
	newValue.cols = cols;
	newValue.size = size;			
	newValue.offset = offset;
	table.insert(pair<string,TableValue>(id,newValue));
}

bool SymTable::isVarDefined(string id) const {	
	return (table.find(id) != table.end());
}

void SymTable::printTableEntries(string id) const {
	map<string, TableValue>::const_iterator iter = table.find(id);
	if (iter != table.end()) {
		TableValue tmp = (iter->second);
		cout << tmp.id << "=" << endl;
		if (tmp.type == "int") {
			cout << tmp.val << endl;
		} else {
			tmp.matrix.printMatrix();
		}	
	}
	
}

string SymTable::getVarType(string id) const {
	map<string, TableValue>::const_iterator iter = table.find(id);
	if (iter != table.end()){
			return (iter->second).type;
	}	
	return string("");
}

int SymTable::getVarVal(string id) const {
	map<string, TableValue>::const_iterator iter = table.find(id);
	if (iter != table.end()){
			return (iter->second).val;
	}	
	return 0;
}

QSMatrix<int> SymTable::getVarMatrix(string id) const {
	map<string, TableValue>::const_iterator iter = table.find(id);
	if (iter != table.end()){
			return (iter->second).matrix;
	}		
	return QSMatrix<int>(1,1,0);
}

int SymTable::getVarOffset(string id) const {
	map<string, TableValue>::const_iterator iter = table.find(id);
		if (iter != table.end()){
			return (iter->second).offset;
	}	
	return 0;
}

int SymTable::get_rows(string id) const {
	map<string, TableValue>::const_iterator iter = table.find(id);
	if (iter != table.end()){
		return (iter->second).rows;
	}	
	return 0;	
}
int SymTable::get_cols(string id) const {
	map<string, TableValue>::const_iterator iter = table.find(id);
	if (iter != table.end()){
		return (iter->second).cols;
	}	
	return 0;
}
int SymTable::get_matrix_size(string id) const {
	map<string, TableValue>::const_iterator iter = table.find(id);
	if (iter != table.end()){
		return (iter->second).size;
	}	
	return 0;
}

void SymTable::setRowsCols(string id, int newRows, int newCols) {
	map<string, TableValue>::iterator iter = table.find(id);
	if (iter == table.end()){
		return;
	}
	iter->second.rows = newRows;
	iter->second.cols = newCols;	
}
