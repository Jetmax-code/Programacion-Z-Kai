Titulo = print("La Suma de los Pares")
Numero = int(input("Ingresa un número entero positivo: "))

if Numero > 0:
    Suma = 0
    for I in range(0, Numero + 1):
        if I % 2 == 0:
            Suma += I

    print(f"La suma de los pares entre 0 y {Numero} es: {Suma}")

else:
    print("Respuesta Invalida: El número debe ser positivo.")