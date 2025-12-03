<?php
function invertirarray($arr) {
    $invertido = [];
    for ($i = count($arr) - 1; $i >= 0; $i--) {
        $invertido[] = $arr[$i];
    }
    return $invertido;
}

print_r(invertirarray([1,2,3,4]));
?>