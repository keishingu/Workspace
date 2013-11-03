#include <stdio.h>

int main(){
	int x = 800;
	int y = 200;

	//加算
	printf("x + y = %d\n", x + y);
	printf("x + 10 = %d\n", x + 10);
	printf("777 + 888 = %d\n", 777 + 888);
	printf("\n");//改行

	//減算
	printf("x - y = %d\n", x - y);
	printf("x - 10 = %d\n", x -10);
	printf("777 - 888 = %d\n", 777 - 888);
	printf("\n");//改行

	//乗算
	printf("x * y = %d\n", x * y);
	printf("x * 10 = %d\n", x * 10);
	printf("777 * 888 = %d\n", 777 * 888);
	printf("\n");//改行

	//除算
	printf("x / y = %d\n", x / y);
	printf("x / 10 = %d\n", x / 10);
	printf("8880 / 888 = %d\n", 8880 / 888);
	printf("\n");//改行

	//剰余
	printf("x %% y = %d\n", x % y);
	printf("x %% 43 = %d\n", x % 43);
	printf("10 %% 3 = %d\n", 10 % 3);
	printf("\n");//改行
	return 0;
}
