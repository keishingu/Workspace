//ヘッダファイルを取り込む
#include "absolute_value.h"

//絶対値を求める関数
int absolute_value(int value){
	//引数ｋがマイナス値の場合
	if(value < 0){
		return value * -1;
	} else {
		return value;
	}
}
