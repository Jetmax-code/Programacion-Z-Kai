using System;

class Programa
{
    static void Main()
    {
        SumaPrimeros100();
    }

    static void SumaPrimeros100()
    {
        int suma = 0;
        for (int i = 1; i <= 100; i++)
            suma += i;
        Console.WriteLine(suma);
    }
}