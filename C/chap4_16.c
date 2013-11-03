#include <stdio.h>

int main() {
	int i;

	for(i = 0; i < 100; i++) printf("i = %d\n", i);

	for(i = 99; i =0; i--) {
		printf("i = %d\n", i);
	}
	return 0;
}
