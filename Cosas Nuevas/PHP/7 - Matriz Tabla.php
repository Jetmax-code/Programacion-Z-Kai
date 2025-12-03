<?php
function tablasmultiplicar() {
    $matriz = [];

    for ($i = 1; $i <= 10; $i++) {
        $fila = [];
        for ($j = 1; $j <= 10; $j++) {
            $fila[] = $i * $j;
        }
        $matriz[$i] = $fila;
    }

    return $matriz;
}

print_r(tablasmultiplicar());
?>