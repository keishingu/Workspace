<?php

//論理演算子nお&&とandは演算子の優先順位が違う
echo 'TRUE || TRUE && FALSE' . "\t:" . (TRUE || TRUE && FALSE) . "\n";
echo 'TRUE || TRUE and FALSE'. "\t:" . (TRUE || TRUE and FALSE). "\n";

//代入式は右から評価される
$x = $y = 10;
echo '$x = ' . $x . "\n";
echo '$y = ' . $y . "\n";

?>
