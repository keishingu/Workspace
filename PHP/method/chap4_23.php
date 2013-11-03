<?php

$total = 0;
for($i = 1; $i <= 100; $i++) {
	$total += $i;
	//continue以下の命令は実行せずにfor文を続ける
	if($i % 10 != 0) continue;

	//$iが10で割り切れる時に結果を表示
	echo $i . "までの合計値" . $total . "\n";
}

?>
