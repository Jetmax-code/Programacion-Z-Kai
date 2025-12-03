<?php
function totalcarrito($carrito) {
    $total = 0;

    foreach ($carrito as $producto => $precio) {
        $total += $precio;
    }

    if ($total > 50) {
        $total *= 0.9;
    }

    return $total;
}

$carrito = ["Pan" => 5, "Queso" => 20, "Carne" => 30];
echo totalcarrito($carrito);
?>