# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
int main()
{
	int row = 0;
	printf("�������ӡ���εĽ�����");
	scanf("%d", &row);
	//int row = 4;
	//top triangle
	for (int i = 1; i <= row; i++) {
		//ѭ����ӡ�ո�
		for (int s1 = 1; s1 <= row - i; s1++) {
			printf(" ");
		}
		//ѭ����ӡ*
		for (int x1 = 1; x1 <= 2 * i - 1; x1++) {
			printf("*");
		}
		printf("\n");
	}
	//bottom triangle
	for (int j = row - 1; j > 0; j--) {
		//ѭ����ӡ�ո�
		for (int s2 = 1; s2 <= row - j; s2++) {
			printf(" ");
		}
		//ѭ����ӡ*
		for (int x2 = 1; x2 <= 2 * j - 1; x2++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}