using System;

class Programa
{
    static void Main()
    {
        Calculadora(10, 5, '-');
    }

    static void Calculadora(double a, double b, char op)
    {
        switch (op)
        {
            case '+': Console.WriteLine(a + b); break;
            case '-': Console.WriteLine(a - b); break;
            case '*': Console.WriteLine(a * b); break;
            case '/': Console.WriteLine(a / b); break;
            default: Console.WriteLine("Operación no válida."); break;
        }
    }
}