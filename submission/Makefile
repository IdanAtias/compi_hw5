all:
	bison -d hw5.ypp
	flex hw5.lex
	g++ hw5.tab.cpp lex.yy.c output.cpp symTable.cpp bp.cpp -o ex5.exe
clean:
	rm -f ex5.exe
