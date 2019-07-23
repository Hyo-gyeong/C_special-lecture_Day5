//#include <stdio.h>*************************************************************************8하나하나 숫자로 쓰지 말고 string쓰기!!!!!!!!!
//int main(void)
//{
//	char arr[] = "peaceful"; 
//	char reverse[10];
//	int i, flag;
//
//	for (i = 0; i < 4; i++) {
//		//temp[i] = arr[i];	temp는 구해지는 과정에 있기 때문에 arr[3-i]를 temp[3-i]라고 쓸 수 없음.	
//		reverse[i] = arr[7-i];
//		reverse[4+i] = arr[3-i];  
//	}
//	reverse[8] = '\0';
//
//	printf("원래 배열 %s\n", arr);
//	printf("뒤집은 배열 %s\n", reverse);
//
//
//	for (i = 0; i < 9; i++) {
//		if (arr[i] != arr[8-1]) {
//			flag = 0;
//			break;
//		}
//		else
//			flag = 1;
//	}
//	if (flag == 1) 
//		printf("Palindrome\n");
//	else if (flag == 0)
//		printf("Not Palindrome\n");
// 
//}
#include <stdio.h>
int main(void)
{
	int a[3][3], b[3][3] = {9,8,7,6,5,4,3,2,1}, c[3][3];
	int i, j;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) 
			a[i][j] = i * 3 + j + 1;
		printf("\n");
	}

	for (i = 0; i < 3; i ++) {
		for (j = 0; j < 3; j++) 
			printf("%4d", a[i][j]);
		printf("\n");
	}
	printf("\n+\n");
	for (i = 0; i < 3; i ++) {
		for (j = 0; j < 3; j++) 
			printf("%4d", b[i][j]);
		printf("\n");
	}
	printf("\n=\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			a[i][j] = i * 3 + j + 1;
			c[i][j] = a[i][j] + b[i][j];
			printf("%4d", c[i][j]);
		}
		printf("\n");
	}
}