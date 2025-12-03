<?php
function filtrarpositivos($arr) {
    $resultado = [];

    foreach ($arr as $n) {
        if ($n >= 0) {
            $resultado[] = $n;
        }
    }

    return $resultado;
}

print_r(filtrarpositivos([-3, 5, -1, 8]));
?>