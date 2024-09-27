# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
int main()
{
	int row = 0;
	printf("请输入打印棱形的阶数：");
	scanf("%d", &row);
	//int row = 4;
	//top triangle
	for (int i = 1; i <= row; i++) {
		//循环打印空格
		for (int s1 = 1; s1 <= row - i; s1++) {
			printf(" ");
		}
		//循环打印*
		for (int x1 = 1; x1 <= 2 * i - 1; x1++) {
			printf("*");
		}
		printf("\n");
	}
	//bottom triangle
	for (int j = row - 1; j > 0; j--) {
		//循环打印空格
		for (int s2 = 1; s2 <= row - j; s2++) {
			printf(" ");
		}
		//循环打印*
		for (int x2 = 1; x2 <= 2 * j - 1; x2++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}