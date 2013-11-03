#include <stdio.h>
int main() {

	int *p;
	int x = 100;


	p = &x;


	printf("p = %d\n", *p);


	*p = 200;
	printf("x = %d\n", x);


	printf("p = %p\n", p);

	return 0;
}
