<?php

//二次元配列にarray()関数ヲリ表紙て値を格納する
$data = array( array(100,200,300), array(111,222,333), array(444,555,666));




for($i = 0; $i < 3; $i++){

	for($j = 0; $j < 3; $j ++){
		echo $data[$i][$j] . " ";
	}
	echo "\n";
}

?>
