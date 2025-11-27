Titulo = print("Clasificacion de Numeros")

Numero = int(input("Introduzca un numero: "))

if Numero > 0:
    print("Este numero es positivo")
    
    if Numero % 2 == 0:
        print("Tambien es par")
    else:
        print("Tambien es impar")

elif Numero < 0:
    print("Este numero es negativo")
    
else:
    print("Este numero es 0")