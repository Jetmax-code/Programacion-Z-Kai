Titulo = print("Detector de Numeros Primos")
Numero = int(input("Ingresa un numero entero: "))

if Numero <= 1:
    print("Numero Invalido")

else:
    Es_Primo = True

    for I in range(2, Numero):
        if Numero % I == 0:
            Es_Primo = False
            break

    if Es_Primo:
        print(f"{Numero} es primo.")
    else:
        print(f"{Numero} No es primo.")