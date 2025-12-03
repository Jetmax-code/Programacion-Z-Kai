<?php
function separarinventario($productos) {
    $enstock = [];
    $agotados = [];

    foreach ($productos as $p) {
        if ($p["stock"] > 0) {
            $enstock[] = $p;
        } else {
            $agotados[] = $p;
        }
    }

    return ["enstock" => $enstock, "agotados" => $agotados];
}

$inv = [
    ["nombre" => "Pan", "stock" => 10],
    ["nombre" => "Leche", "stock" => 0],
];

print_r(separarinventario($inv));
?>