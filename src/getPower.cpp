#include "../include/Exp.h"

number getPower(number a,double b)
{

	int integral;
	int floating;

	integral = (int)floor(b);
	floating = b-integral;


	number result_integral = exponent(a,integral);


	number result_floating = a^flaoting;

	number final_result = result_floating * result_integral;


	return final_result;
}
