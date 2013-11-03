<?php

//array()関数を利用して値を核の王する
$data = array("関数" => 100, "関西" => 200);

//連想配列でforeach文を利用
//連想配列の場合はキーも利用できる
foreach($data as $region => $value) {
	echo "地域：" . $region . "：" . $value . "\n";
}

echo "\n";//改行

$gen = array("風力発電", "太陽光発電", "波動発電");

//連想配列でない場合は添字となる
foreach($gen as $number => $method) {
	echo $number . "：" . $method . "\n";
}

?>
