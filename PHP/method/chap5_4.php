<?php

//個々の要素に値を格納する
$employee["name"] = "健武達郎";
$employee["address"] = "徳島県";
$employee["age"] = 34;

echo "名前：" . $employee["name"] . "\n";
echo "住所：" . $employee["address"] . "\n";
echo "年齢：" . $employee["age"] . "\n";

echo "\n";

//array()関数を利用して値を格納する
$employee = array("name" => "浜根政夫", "address" => "岐阜県", "age" => 55);

echo "名前：" . $employee["name"] . "\n";
echo "住所：" . $employee["address"] . "\n";
echo "年齢：" . $employee["age"] . "\n";

?>
