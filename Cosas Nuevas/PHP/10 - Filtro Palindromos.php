<?php
function espalindromo($palabra) {
    $len = strlen($palabra);
    for ($i = 0; $i < $len / 2; $i++) {
        if ($palabra[$i] !== $palabra[$len - 1 - $i]) {
            return false;
        }
    }
    return true;
}

function filtrarpalindromos($arr) {
    $resultado = [];
    foreach ($arr as $p) {
        if (espalindromo($p)) {
            $resultado[] = $p;
        }
    }
    return $resultado;
}

print_r(filtrarpalindromos(["oso", "casa", "ana", "sol"]));
?>