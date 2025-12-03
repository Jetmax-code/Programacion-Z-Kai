<?php
function maxmin($arr) {
    if (empty($arr)) return null;

    $max = $arr[0];
    $min = $arr[0];

    foreach ($arr as $n) {
        if ($n > $max) $max = $n;
        if ($n < $min) $min = $n;
    }

    return ["max" => $max, "min" => $min];
}

print_r(maxmin([4, 9, -1, 6]));
?>