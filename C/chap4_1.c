//printf()関数を利用するために必要
#include <stdio.h>

int main(){
	int x = 100;
	double d = 123.456;
	char c = 'X';

	printf("整数 x = %d\n", x);
	printf("浮動小数点 d =%f\n", d);
	printf("文字 c = %c\n\n", c);

	printf("改行無し　");
	printf("改行する\n");

	printf("タブ　：　%c\t%c\t%c\t%c\n", c,c,c,c);

	printf("円記号　:　\\\n");

	return 0;
}
