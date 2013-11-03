#include <stdio.h>

int main() {
	int i;

	//旦文の場合はブロックにしなくてよい
	i = 0;
	while(i < 100) printf("i = %d\n", i++);

	//複数の文ならばブロックにする
	i = 99;
	while(i >= 0) {
		printf("i = %d\n", i);
		i--;
	}

	return 0;
}
