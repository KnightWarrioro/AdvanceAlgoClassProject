#include "../include/Exp.h"

void printNumber(number n)
{
	int i=0;

	int len = n.digits_count;
	string val = n.value;
	

	string toprint = "";

	for(int i=0;i<len;i++)
	{
		if(i == len-n.decimal_position+1)
		{
			toprint += '.';
		}
		toprint += val[i];
	}

	cout<<toprint<<endl;

}