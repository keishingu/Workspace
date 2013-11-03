//絶対値を求める関数
int absolute_value(int value){
	//引数がマイナス値の場合
	if(value < 0){
		return value * -1;
	} else {
		return value;
	}
}
