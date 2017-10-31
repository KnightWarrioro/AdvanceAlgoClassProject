#include "../include/Exp.h"

int validateInput(string inp)
{
	int flag=0;

	int len=inp.length();

	int count_dot = 0;
	int i=0;
	if(inp[0]=='-')
		
		i++;
	for(;i<len;i++)
	{
		if(inp[i]>='0'&&inp[i]<='9')
			continue;
		if(input[i]=='.'&&count_dot==0)
		{
			count_dot++;
			continue;
			
		}
		flag = 1;
	}
	if(inp[len-1]=='.')
		inp[len-1] = '/0';
	if(flag==1)
		return 0;
	if(inp[0]=='.')
		inp = '0'+inp;
	return 1;

}
