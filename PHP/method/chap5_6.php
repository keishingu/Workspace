<?php

//添え字が重なっている場合
echo "添え字が重なっている場合\n";
$x[0] = 1;
$x[1] = 2;
$x[0] = 3;
$y[1] = 4;

$z = $x + $y;
foreach($z as $i){
	echo $i . "\n";
}

echo "\n";// 改行

//添え字が重なっていない場合
echo "添え字が重なっていない場合\n";
$y[2] = 3;
$y[3] = 4;

$z = $x + $y;
foreach($z as $i){
	echo $i . "\n";
}

echo "\n";//改行

//比較演算子
echo "比較演算子\n";
$x = array(100, 200);
$y = array("100", "200");

echo '$x == $y : ' . ($x == $y) . "\n";
echo '$x === $y : ' . ($x === $y) . "\n";
echo '$x != $y : ' . ($x != $y) . "\n";
echo '$x <> $y : ' . ($x <> $y) . "\n";
echo '$x !== $y : ' . ($x !== $y) . "\n";

?>
