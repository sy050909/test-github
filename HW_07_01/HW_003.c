#include <stdio.h>

int main(void)
{
	int year;

	printf("�⵵�� �Է��ϼ���; ");
	scanf_s("%d", &year);

	if ((year / 4) == 0 && (year / 100) != 0 || (year / 400) == 0)
	printf("����\n");
	else
		printf("���\n");
	return 0;
}