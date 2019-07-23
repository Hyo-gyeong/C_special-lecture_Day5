#include <stdio.h>
int main(void)
{
	int a[] = {1,2,3,4};
	int b[] = {3,2,3,4};
	int c[] = {2,1,1,3};
	int i, sum = 0;

	for (i = 0; i < 4; i++) {
		sum += a[i];
		printf("%2d", a[i]);
	}
	printf(" : %d\n", sum);

	sum = 0;

	for (i = 0; i < 4; i++) {
		sum += b[i];
		printf("%2d", b[i]);
	}
	printf(" : %d\n", sum);

	sum = 0;

	for (i = 0; i < 4; i++) {
		sum += c[i];
		printf("%2d", c[i]);
	}
	printf(" : %d\n--------------\n", sum);

	sum = 0;

	for (i = 0; i < 4; i ++) {
		sum += a[i] + b[i] + c[i];
		printf("%3d", sum);
		sum = 0;
	}
}