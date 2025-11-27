Titulo = print("Patron de Borde Cuadrado")

N = int(input("Ingrese el tamaño del cuadrado: "))
Simbolo = "#"

for Fila in range(N):
    for Columna in range(N):
        if Fila == 0 or Fila == N-1 or Columna == 0 or Columna == N-1:
            print(Simbolo, end="")
        else:
            print(" ", end="")
    print()