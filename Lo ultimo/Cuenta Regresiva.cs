using System;

class Programa
{
    static void Main()
    {
        CuentaRegresiva();
    }

    static void CuentaRegresiva()
    {
        int n = 10;
        while (n > 0)
        {
            Console.WriteLine(n);
            n--;
        }
        Console.WriteLine("¡Despegue!");
    }
}