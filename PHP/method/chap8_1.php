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

?>
