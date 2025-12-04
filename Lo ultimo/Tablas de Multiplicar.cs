using System;

class Programa
{
    static void Main()
    {
        TablaMultiplicar();
    }

    static void TablaMultiplicar()
    {
        for (int i = 1; i <= 10; i++)
            Console.WriteLine($"7 x {i} = {7 * i}");
    }
}