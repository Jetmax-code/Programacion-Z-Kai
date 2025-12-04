using System;

class Programa
{
    static void Main()
    {
        NumeroParImpar(8);
    }

    static void NumeroParImpar(int n)
    {
        if (n % 2 == 0)
            Console.WriteLine($"El número {n} es par.");
        else
            Console.WriteLine($"El número {n} es impar.");
    }
}