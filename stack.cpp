#include <stdio.h>
#include "stack.h"
int stack[MAX_LEN];
int sp=0;

int pop(){
	if (sp>0){
		sp--;
		return stack[sp];
	}
}

void push(int val){
	if (sp<MAX_LEN){
		stack[sp] = val;
		sp++;
	}
}
