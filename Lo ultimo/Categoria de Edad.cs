using System;

class Programa
{
    static void Main()
    {
        CategoriaEdad(10);
    }

    static void CategoriaEdad(int edad)
    {
        if (edad >= 0 && edad <= 12)
            Console.WriteLine("Niño");
        else if (edad <= 17)
            Console.WriteLine("Adolescente");
        else if (edad <= 59)
            Console.WriteLine("Adulto");
        else
            Console.WriteLine("Adulto Mayor");
    }
}