<?php
function histograma($colores) {
    $conteo = [];

    foreach ($colores as $c) {
        if (!isset($conteo[$c])) {
            $conteo[$c] = 0;
        }
        $conteo[$c]++;
    }

    return $conteo;
}

print_r(histograma(["rojo", "azul", "rojo"]));
?>