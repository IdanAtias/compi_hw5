all:
	clear
	bison -d hw5.ypp
	flex hw5.lex
	g++ lex.yy.c hw5.tab.cpp hw5.cpp bp.cpp -o ex5.exe