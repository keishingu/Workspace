#include <stdio.h>

int main() {
	int x = 100;
	int y = 50;

	int result;

	printf("x + y = %d\n", x + y);
	printf("x - y = %d\n", x - y);
	printf("x * y = %d\n", x * y);
	printf("x / y = %d\n", x / y);
	x = ++x;
	printf("x = %d\n", x);
	printf("x %% y = %d\n", x % y);
	printf("x & y = %d\n", x & y);

	return 0;
}
