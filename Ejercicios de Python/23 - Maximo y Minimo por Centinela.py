Titulo = print("Maximo y Minimo por Centinela")

Maximo = None
Minimo = None

while True:
    Numero = float(input("Ingrese numeros: "))
    if Numero == -1:
        break
    if Maximo is None:
        Maximo = Numero
        Minimo = Numero
    else:
        if Numero > Maximo:
            Maximo = Numero
        if Numero < Minimo:
            Minimo = Numero

print (f"Numero mas grande ingresado: {Maximo}")
print (f"Numero mas pequeño ingresado: {Minimo}")