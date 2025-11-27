Titulo = print("El Triangulo Valido")
A = float(input("Ingrese angulo A: "))
B = float(input("Ingrese angulo B: "))
C = float(input("Ingrese angulo C: "))

if A > 0 and B > 0 and C > 0 and (A + B + C == 180):
    print("Es un triangulo valido")

    if A == B == C:
        print("Es un triangulo equilatero")
    elif A == B or A == C or B == C:
        print("Es un triangulo isoceles")
    else:
        print("Es un triangulo escaleno")
else:
    print("No es un triangulo valido")