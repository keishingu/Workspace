#include <stdio.h>

//絶対値を求める関数のプロトタイプを別ファイルから取り込む
#include "absolute_value.h"

int main(){
	int x = -10;
	int result;

	//関数を呼び出して戻り値を受け取る
	result = absolute_value(x);

	//関数を呼び出してそのまま戻り値を表示する
	printf("%dの絶対値 = %d\n", x, absolute_value(x));

	return 0;
}
