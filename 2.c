#include <stdio.h>
#include <conio.h>
#define dist 5
#define div 7

int second() {
	int n;
	scanf_s("%d", &n);

	int r[dist][div];

	for (int i = 0; i < dist; i++)
		for (int j = 0; j < div; j++)
			r[i][j] = 0;

	int x, max_sum=0, curr_sum, a=0, b=0;
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &x);

		curr_sum = x + r[i % dist][(div - x % div) % div];
		if (curr_sum > max_sum) {
			max_sum = curr_sum;
			a = x;
			b = r[i % dist][(div - x % div) % div];
		}

		if (x > r[i % dist][x % div])
			r[i % dist][x % div] = x;

	}

	if ((a != 0) && (b != 0))
		printf("%d %d\n", a, b);
	else
		printf("0\n");

	_getch();
	return 0;
}