all:
	bison --defines ./hw5.ypp;
	lex hw5.lex;
	g++ *.cpp lex.yy.c -o ex5.exe;
	
clean:
	rm -rf *.o *.exe;
