<?php

$age;//年齢

//年齢を尋ねる
echo "年齢はいくつですか：";
fscanf(STDIN, "%d", $age);

//ブロックを利用したif-else if文
if($age < 20) {
	echo "選挙権はありません\n";
} else if($age < 25) {
	echo "選挙権はありますが、衆議院議員の被選挙権はありません\n";
} else {
	echo "選挙権も衆議院議員の被選挙権もあります\n";
}

?>
