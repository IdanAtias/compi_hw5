all:
	bison -d hw5.ypp
	flex hw5.lex
	g++ lex.yy.c hw5.tab.cpp matrix.cpp SymTable.cpp bp.cpp -o ex5.exe
	
clean:
	rm -rf *.o *.exe;