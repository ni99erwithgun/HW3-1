#include <stdio.h>
#include <stdlib.h>

double power(double, int);
int main(void)
{
	int k; double Ans;
	printf("3.5k的k次方?k=?");
	scanf_s("%d", &k); 
	Ans = power(3.5, k);
	printf("3.5的%d次方=%f\n", k, Ans);

	system("pause");
	return 0;
}

double power(double X, int n)
{
	int i; double powerXn = 1;
	for (i = 1; i <= n; i++)
		powerXn = powerXn * X;
	return powerXn;
}