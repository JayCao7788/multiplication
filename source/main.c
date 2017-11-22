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
	�X�X�X�X�X�X�X
	0 1 1 0    X << 0
	+ 0 1 1 0      X << 1
	�X�X�X�X�X�X�X
	1 0 0 1 0

	(y&(1 << count)) == (1 << count)

	�P�_ y & (1 << count) �O�_�� 1

	�p�G��1�A�N�� x << count �����`�M�b�@�_

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