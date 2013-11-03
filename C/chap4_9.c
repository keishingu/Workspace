#include <stdio.h>

int main(){
	int x;
	double d;

	//scanf()関数でキーボード入力
	printf("整数を入力してください： ");
	scanf("%d", &x);

	printf("不動小数点を入力してください： ");
	scanf("%lf", &d);

	//入力した値を表示する
	printf("整数： %d\n", x);
	printf("浮動小数点： %lf\n", d);

	return 0;
}
