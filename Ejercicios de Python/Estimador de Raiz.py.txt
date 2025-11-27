Titulo = print("Estimador de raiz")

Numero = int(input("Ingrese un numero: "))
Impar = 1
Raiz = 0

while Numero >= Impar:
    Numero -= Impar
    Impar += 2
    Raiz += 1
    
print(f"Raiz cuadrada estimada: {Raiz}")