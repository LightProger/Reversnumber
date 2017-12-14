#include <stdio.h>
int convert (int a);



int main (void)
{
	int n = -1;

	/* получаем число */
	do
	{
		printf("Введите положительное целое число: ");
		scanf("%i", &n);
		fflush(stdin);
	} while(n < 0);

	/* выводим результат на экран */
	printf("Перевернутое число: %i\n", convert(n));
	return 0;
}



int convert (int a)
{
	int m, k = 0, num = 0;

	if (a > 0)
	{
		/* переворачиваем число */
		while (a > 0)
		{
			num = (num*10) + (a%10);
			a = a/10;
		}
		while (k > 0)
		{
			num *= 10;
			k -= 1;
		}
	}
	return num;
}
