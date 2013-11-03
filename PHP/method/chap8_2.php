<?php

//絶対値wp求める関数の定義を別ファイルから取り込む
require("chap8_1.php");

$x = -10;

//関数を呼び出して戻り値を受け取る
$result = absolute_value($x);

//関数を呼び出してそのまま戻り値を表示する
echo absolute_value($x);

echo "\n";

?>
