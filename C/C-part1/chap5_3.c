#include <stdio.h>

//接待地を求める関数absoluteの関数プロトタイプ
int absolute(int x);

int main() {
	//絶対値を求める値
	int a;

	//absolute関数の結果
	int result;

	a = -354;



	result = absolute(a);

	printf("絶対値は%dです\n", result);

	return 0;
}

//絶対値を求める関数absolutenお定義
//戻り値：int型の絶対値を戻す
//関数名：absokute
//引数ｘ：int型の絶対値を求める値を指定する
int absolute(int x) {
	if(x < 0) {
		x = -x;
	}

	return x;
}
