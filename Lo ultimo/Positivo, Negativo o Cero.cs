using System;

class Programa
{
    static void Main()
    {
        PositivoNegativoCero(-1);
    }

    static void PositivoNegativoCero(int n)
    {
        if (n > 0)
            Console.WriteLine("El numero es positivo.");
        else if (n < 0)
            Console.WriteLine("El numero es negativo.");
        else
            Console.WriteLine("El numero es neutral.");
    }
}