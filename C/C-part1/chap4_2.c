#include <stdio.h>

int main() {

	int array[5];


	int *p;


	int i;


	p = array;


	*p = 10;
	*(p + 1) = 20;
	*(p + 2) = 30;
	*(p + 3) = 40;
	*(p + 4) = 50;


	for(i = 0; i < 5; i ++) {
		printf("arrau[%d] = %d\n", i, *(p + i));

	}

	return 0;
}
