Titulo = print("La Calculadora de Intereses")

Capital = float(input("Ingrese el capital inicial: "))
Porcentaje_de_interes = float(input("Ingrese la tasa de interes mensual en porcentaje: "))
Meses = int(input("Ingrese la cantidad de meses: "))

Tasa_de_interes = Porcentaje_de_interes / 100

print("Capital por mes")

for Mes in range(1, Meses + 1):
    Interes = Capital * Tasa_de_interes
    Capital += Interes
    print(f"Mes {Mes}: {Capital}")
print(f"Capital final despues de {Meses} meses: {Capital}")