/**
 *
 * Build:
 *
 * $ gcc -g -finstrument-functions test_instrument.c instrument.c -o test_instr
 */

#include <stdio.h>

int func1(int in)
{
	return in%2;
}

int func2(int in)
{
	return in%2;
}

int main()
{
	func1(8);
	func2(10);
	return 0;
}