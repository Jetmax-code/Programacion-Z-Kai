Titulo = print("Conversor Decimal a Binario")

Decimal = int(input("Introduzca un numero decimal: "))

if Decimal == 0:
    print("Binario: 0")
else:
    Binario = ""
    Numero = Decimal

    while Numero > 0:
        Resto = Numero % 2
        Binario = str(Resto) + Binario
        Numero = Numero // 2
    
    print(f"Binario de {Decimal} es: {Binario}")