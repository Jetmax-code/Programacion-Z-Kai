using System;

class Programa
{
    static void Main()
    {
        AdivinarContraseña();
    }

    static void AdivinarContraseña()
    {
        string clave = "secreto123";
        string entrada = "";
        while (entrada != clave)
            entrada = Console.ReadLine();
        Console.WriteLine("¡Acceso concedido!");
    }
}