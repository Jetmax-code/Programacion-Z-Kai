Titulo = print("La Piramide Numerica")
Numero = int(input("Ingresa un numero entre 1 y 9: "))

if 1 <= Numero <= 9:
    for Fila in range(1, Numero + 1):
        for Columna in range(1, Fila + 1):
            print(Fila, end="")
        print()
else:
    print("Numero invalido")