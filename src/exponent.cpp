#include "../include/Exp.h"

int exponentiation(int a,int b)
{
	if(b==0)
		return a;
	int val=exp(a,b/2);
	if(b%2)
		return val*val*a;
	return val*val;
}