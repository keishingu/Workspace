#include <stdio.h>

int main() {
	int data[3][5] = { {54,36,43,34,34}, {4,2,789,51,90}, {3,2,34,44,4} };

	int i;
	int j;

	for(i =  0; i < 3; i++) {
		for(j = 0; j < 5; j++) {
			printf("%d ", data[i][j]);
		}	
		printf("\n");
	}
	return 0;
}	
