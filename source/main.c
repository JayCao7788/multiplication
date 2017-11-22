#include <stdio.h>
#include <stdlib.h>

int count = 0;
int x = 10, y = 2;
int sum = 0;

int main(void)
{
	/*
	X		0 1 1 0
	Y	x	0 0 1 1
	———————
	0 1 1 0    X << 0
	+ 0 1 1 0      X << 1
	———————
	1 0 0 1 0

	(y&(1 << count)) == (1 << count)

	判斷 y & (1 << count) 是否為 1

	如果為1，就把 x << count 的值總和在一起

	*/

	printf("Please Enter X : ");
	scanf("%d", &x);
	printf("Please Enter Y : ");
	scanf("%d", &y);
	printf("\n");

	while (count < 32){
		if ((y&(1 << count)) == (1 << count))
		{
			sum += x << count;
		}
		count++;
	}

	printf("X * Y = %d", sum);
	printf("\n");

	system("pause");
	return 0;
}