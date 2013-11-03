<?php

$x = 100;
$y = "100";


echo '$x = 100;$y = "100"' . "\t\t--->";
echo '$x == $y :' . ($x == $y) . "\n";
echo '$x = 100;$y = "100"' . "\t\t--->";
echo '$x === $y :' . ($x === $y) . "\n";

echo '$x = 100;$y = "100"' . "\t\t--->";
echo '$x != $y :' . ($x != $y) . "\n";
echo '$x = 100;$y = "100"' . "\t\t--->";
echo '$x !== $y :' . ($x !== $y) . "\n";


$x = 0;
echo '$x = 0' . "\t\t--->";
echo '$x == FALSE :' . ($x == FALSE) . "\n";
echo '$x = 0' . "\t\t--->";
echo '$x === FALSE :' . ($x === FALSE) . "\n";

$x = "0";
echo '$x = "0"' . "\t\t--->";
echo '$x == FALSE :' . ($x == FALSE) . "\n";
echo '$x = "0"' . "\t\t--->";
echo '$x === FALSE :' . ($x === FALSE) . "\n";

$x = "";
echo '$x = ""' . "\t\t--->";
echo '$x == FALSE :' . ($x == FALSE) . "\n";
echo '$x = ""' . "\t\t--->";
echo '$x === FALSE :' . ($x === FALSE) . "\n";

?>
