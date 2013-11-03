#include <stdio.h>

int main () {
	int x = 100;
	int y = 50;

	int result;

	//resultにxとyを加算した結果を代入する
	result = x + y;
	//resultを表示する
	printf("x + y = %d\n", result);

	//resultにxからyを減算した結果を代入する
	result = x - y;
	//resultを表示する
	printf("x - y = %d\n", result);

	//resultにxからyを減算した結果を代入する
	result = x * y;
	//resultを表示する
	printf("x * y = %d\n", result);

	//resultにxからyを減算した結果を代入する
	result = x / y;
	//resultを表示する
	printf("x / y = %d\n", result);

	//resultにインクリメント演算子で1増やしたxを代入する
	//一文で記述する
	result = ++x;
	//resultを表示する
	printf("x = %d\n", result);

	//resultにxをyで除算した譲与を結果に代入する
	//一文で記述する
	result = x % x;
	//resultを表示する
	printf("x %% = %d\n", result);

	result = x & y;

	printf("x & y = %d\n", result);

	return 0;
}
