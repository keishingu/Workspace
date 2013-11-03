#include <stdio.h>

int main() {
	int x, y, z, result;

	int px = &x;
	int py = &y;
	int pz = &z;

	*px = 5;
	*py = 2;
	*pz = 30;

	result = *px + *py + *pz;

	printf("x + y + z = %d\n", result);

	return 0;
}
