<?php
function promedio($notas) {
    if (empty($notas)) {
        return null;
    }

    $suma = 0;
    $count = 0;

    foreach ($notas as $n) {
        $suma += $n;
        $count++;
    }

    return $suma / $count;
}

echo promedio([10, 8, 7]);
?>