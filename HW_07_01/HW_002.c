#include <stdio.h>

int main()
{
	int number;
	int num;
	int num1 = 0, num2 = 1;

	printf("n �Է� : ");
	scanf_s("%d", &number);

	if (number == 1)
	{
		printf("%d ��° �Ǻ���ġ �� : %d", number, num1);
	}
	else if (number == 2)
	{
		printf("%d ��° �Ǻ���ġ �� : %d", number, num2);
	}
	else if (number == 0)
	{
		//0�� �ƹ��͵� �ƴϹǷ� ���α׷� ����
	}
	else
	{
		//n��° �Ǻ���ġ �� ���ϱ�
		for (int i = 0; i < number - 2; i++)
		{
			num = num1 + num2;
			num1 = num2;
			num2 = num;
		}
		printf("%d ��° �Ǻ���ġ �� : %d ", number, num);
	}

}
