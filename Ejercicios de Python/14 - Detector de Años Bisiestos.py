Titulo = print("Detector de Años Bisiestos")
Año = int(input("Ingrese un año: "))

if (Año % 4 == 0 and Año % 100 != 0) or (Año % 400 == 0):
    print(f"{Año} es un año bisiesto")
else:
    print(f"{Año} no es un año bisiesto")