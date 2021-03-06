    
#include "symTable.hpp"
#include "output.hpp"

void SymTable::insertVar(string id, string type, int offset, bool isAssigned) {
	TableLine line;
	line.id = id;
	line.type = type;
	line.offset = offset;
	line.isAssigned = isAssigned;
	table.push_back(line);
	//~ this->printTable();
}

bool SymTable::isVarDefined(string id) const{
	for (vector<TableLine>::const_iterator it = table.begin(); it != table.end(); it++){
		if (it->id == id){
			return true;
		}
	}
	return false;
}

void SymTable::printTable() const{
	for (vector<TableLine>::const_iterator it = table.begin(); it != table.end(); it++){
		output::printVar(it->id.c_str(), it->offset, it->type.c_str());
	}
}

string SymTable::getVarType(string id) const {
	for (vector<TableLine>::const_iterator it=table.begin(); it != table.end(); it++){
		if (it->id == id){
			return it->type;
		}
	}
	return string("");
}

int SymTable::getVarOffset(string id) const {
	for (vector<TableLine>::const_iterator it=table.begin(); it != table.end(); it++){
		if (it->id == id){
			return it->offset;
		}
	}
	return -1;
}

bool SymTable::isVarAssigned(string id) const {
	for (vector<TableLine>::const_iterator it = table.begin(); it != table.end(); it++){
		if (it->id == id){
			return it->isAssigned;
		}
	}
	return false;
}

void SymTable::setIsVarAssigned(string id, bool val) {
	for (vector<TableLine>::iterator it = table.begin(); it != table.end(); it++){
		if (it->id == id){
			it->isAssigned = val;
		}
	}
	return;
}
