<?php

$age;//年齢

//年齢を尋ねる
echo "年齢はいくつですか：";
fscanf(STDIN, "%d", $age);

//ブロックを利用したif=else文
if($age >= 20) {
	echo "飲酒することができます\n";
	echo "喫煙することがでいます\n";
	echo "選挙権があります\n";
} else {
	echo "飲酒することはできません\n";
	echo "喫煙することはできません\n";
	echo "選挙権はありません\n";
}

?>
