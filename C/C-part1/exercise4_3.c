#include <stdio.h>

int main() {
	int test_score[10];	//テストの点数
	int i;			//ループで利用
	int total = 0;		//合計値
	double average;		//平均値

	//ポインタを宣言する
	int *p;

	//ポインタにtest_scoreのアドレスを代入する
	p = test_score;

	//添え字ではなくポインタを利用して値を代入する
	*p = 48;
	*(p + 1) = 68;
	*(p + 2) = 24;
	*(p + 3) = 40;
	*(p + 4) = 8;
	*(p + 5) = 28;
	*(p + 6) = 90;
	*(p + 7) = 18;
	*(p + 8) = 31;
	*(p + 9) = 36;

	//合計値を求める
	for(i = 0; i < 10; i ++) {
		//添え字ではなくポインタを利用する
		total += *(p + i);
	}

	//平均値を求める
	average = total / 10.0;
	printf("平均点は%f点です。\n", average);

	return 0;
}
