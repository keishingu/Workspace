<?php

//scanf()関数でキーボード入力
echo "整数を入力してください:";
fscanf(STDIN, "%d", $x);

echo "浮動小数点を入力してください:";
fscanf(STDIN, "%f", $d);

echo "文字列を入力してください:";
fscanf(STDIN, "%s", $str);

//入力した値を表示する
echo "整数：" . $x . "\n";
echo "浮動小数点：" . $d . "\n";
echo "文字列：" . $str . "\n";

?>
