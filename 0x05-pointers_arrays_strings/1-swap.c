#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @fi: first integer to swap
 * @si: second integer to swap
 */

void swap_int(int *fi, int *si)
{
	int i  = *fi;
	*fi = *si;
	*si = i;
}
