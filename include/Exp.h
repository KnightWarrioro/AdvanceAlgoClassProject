#ifndef _Header_
#define _Header_
#include <iostream>
#include <cmath>
#include <gmp.h>
using namespace std;
typedef struct number{
	string value;
	int decimal_count;
	int digits_count;
	int pos;
}number;

int exponentiation(int,int);
number getNumber(string);
int ValidateInput(string);
number getPower(number,double);
void PrintNumber(number);
#endif
