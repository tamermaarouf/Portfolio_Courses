/**
 * grade array .......
 *
 * Index:  0	1	2	3	4
 *
 * Value:  91	82	73	64	55
 */

#include <stdio.h>

int main(void)
{
	int grade[5] = {91, 82, 73, 64, 55}, i;

	for (i = 0; i < 5; ++i)
		printf("grade[%d] = %d\n", i, grade[i]);
	return (0);
}

