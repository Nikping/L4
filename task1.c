#define _USE_MATH_DEFINES
#include <math.h>


double f(const double *x, double *result)					
{
	*result = (1 - tan(*x)) / (1 + tan(*x));					
}