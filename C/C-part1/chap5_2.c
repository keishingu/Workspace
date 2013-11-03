#include <stdio.h>

int main() {
	int i;
	double d;
	char str[80];

	//整数を入力
	printf("整数を入力してください\n");
	scanf("%d", &i);

	//浮動小数点を入力
	printf("浮動小数点を入力してください\n");
	scanf("%lf",&d);

	//文字列を入力
	printf("空白を含まない文字列を入力してください\n");
	scanf("%s",str);

	//入力内容を表示
	printf("\n");//改行
	printf("整数 = %d\n", i);
	printf("浮動小数点 ~ %f\n", d);
	printf("文字列 = %s\n", str);

	return 0;
}
