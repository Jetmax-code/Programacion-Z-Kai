using System;

class Programa
{
    static void Main()
    {
        MenuRepetitivo();
    }

    static void MenuRepetitivo()
    {
        int opcion;
        do
        {
            Console.WriteLine("1. Ver Saldo");
            Console.WriteLine("2. Depositar");
            Console.WriteLine("3. Salir");
            opcion = int.Parse(Console.ReadLine());
        }
        while (opcion != 3);
    }
}