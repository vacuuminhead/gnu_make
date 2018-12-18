#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <string>
#include "stack.h"

using namespace std;
int main(int argc, char *argv[]){
	ifstream fin(argv[1]);
	string st;
	int i;
	while(!fin.eof()){
		fin >> st;
		switch(st[0]){
		case '+' : push(pop() + pop()); break;
		case '-' : i = -pop(); push(i + pop()); break;
		case '*' : push(pop() * pop()); break;
		default : push(atoi(st.c_str())); break;
		}
	}
	printf("%d\n",pop());
	return 0;
}
