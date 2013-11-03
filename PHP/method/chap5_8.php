<?php


$employee = array(
"A001" =>
array("name" => "山武達郎", "address" => "徳島県", "age" => 34),

"A002" =>
array("name" => "浜根政夫", "address" => "岐阜県", "age" => 55),
);



foreach($employee as $employee_id => $data){
	echo "社員ID:" . $employee_id . "\n";
	echo "名前:" . $data["name"] . "\n";
	echo "住所:" . $data["address"] . "\n";
	echo "年齢:" . $data["age"] . "\n";

	echo "\n";//改行
}

?>
