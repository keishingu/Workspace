<?php

//絶対値を求める関数
function absolute_value($value){
	//引数がマイナスの場合
	if($value < 0){
		return $value * -1;
	} else {
		return $value;
	}
}

$x = -10;

//関数を呼び出して戻り値を受け取る
//$result = absolute_value($x);

//関数ｗｐ呼び出してそのまま戻り値を表示する
echo absolute_value($x);

echo "\n";

?>
