#include <stdio.h>

int main()
{
	int number;
	int num;
	int num1 = 0, num2 = 1;

	printf("n 입력 : ");
	scanf_s("%d", &number);

	if (number == 1)
	{
		printf("%d 번째 피보나치 값 : %d", number, num1);
	}
	else if (number == 2)
	{
		printf("%d 번째 피보나치 값 : %d", number, num2);
	}
	else if (number == 0)
	{
		//0은 아무것도 아니므로 프로그램 종료
	}
	else
	{
		//n번째 피보나치 수 구하기
		for (int i = 0; i < number - 2; i++)
		{
			num = num1 + num2;
			num1 = num2;
			num2 = num;
		}
		printf("%d 번째 피보나치 값 : %d ", number, num);
	}

}
