<?php

//単文の場合はブロックにしなくてよい
$i = 0;
while($i < 100) echo '$i = '. $i++ ."\n";

//複数の文ならばブロックにする
$i = 99;
while($i >= 0) {
	echo '$i =' . $i . "\n";
	$i --;
}

?>
