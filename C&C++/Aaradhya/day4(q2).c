#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void findRoots(int a, int b, int c)
{
	if (a == 0) {
		printf("Invalid");
		return;
	}

	int d = b * b - 4 * a * c;
	double sqrt_val = sqrt(abs(d));

	if (d > 0) {
		printf("Roots are real and distinct ");
		printf("%f, %f", (double)(-b + sqrt_val) / (2 * a),
			(double)(-b - sqrt_val) / (2 * a));
	}
	else if (d == 0) {
		printf("Roots are real and same ");
		printf("%f", -(double)b / (2 * a));
	}
	else // d < 0
	{
		printf("Roots are complex ");
		printf("%f + i%f, %f - i%f", -(double)b / (2 * a),
			sqrt_val / (2 * a), -(double)b / (2 * a),
			sqrt_val / (2 * a));
	}
}

int main()
{
	int a, b, c;
	printf("enter coefficients of x^2, x, constant respectively:\n");
	scanf("%d %d %d", &a, &b, &c);
	findRoots(a, b, c);
	return 0;
}
