//#include <stdio.h>*************************************************************************8�ϳ��ϳ� ���ڷ� ���� ���� string����!!!!!!!!!
//int main(void)
//{
//	char arr[] = "peaceful"; 
//	char reverse[10];
//	int i, flag;
//
//	for (i = 0; i < 4; i++) {
//		//temp[i] = arr[i];	temp�� �������� ������ �ֱ� ������ arr[3-i]�� temp[3-i]��� �� �� ����.	
//		reverse[i] = arr[7-i];
//		reverse[4+i] = arr[3-i];  
//	}
//	reverse[8] = '\0';
//
//	printf("���� �迭 %s\n", arr);
//	printf("������ �迭 %s\n", reverse);
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