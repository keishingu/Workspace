#include <stdio.h>

int main(){
	int x = 100;
	char c = 30;
	short s = 20;
	double d;

	//暗黙の型変換
	d = x;
	printf("d = %f\n", d);
	x = s;
	printf("x = %d\n", x);
	s = c;
	printf("s = %d\n", s);

	//渓谷が発生する環境もある
	//gccでは警告は出力されない
	x = 200032000;
	s = 32000;
	d = 3.5555;

	c = s;
	printf("c = %d\n", c);
	s = x;
	printf("s = %d\n", s);
	x = d;
	printf("x = %d\n", x);

	//整数どうしの除算の結果をdoubleにする
	x = 3;
	d = (double)x / 2;
	printf("d = %f\n", d);
	//手薄うを利用している場合はdouble型にして
	//演算を行えば結果はdoubleになる
	d = x / 2.0;
	printf("d = %f\n", d);

	return 0;
}
