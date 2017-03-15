#include "../include/Exp.h"

number getNumber(string actual_num)
{
	int len=actual_num.length();
	number make;
	int flag=1;
	for(int i=0;i<len;i++)
	{
		if(actual_num[i]=='.')
		{
			make.decimal_position=len-i;
			continue;
		}
		make.value += actual_num[i];


	}
	make.digits_count=len-1;
}