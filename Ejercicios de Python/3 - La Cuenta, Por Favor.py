Titulo = print("La cuenta, por favor")
Cuenta = int(input("Total de la cuenta: "))
Propina = int(input("Porcentaje de propina: "))
Personas = int(input("Numero de personas: "))

Tasa_de_propina = Propina / 100
Cantidad_de_propina = Tasa_de_propina * Cuenta

Gran_total = Cuenta + Cantidad_de_propina
Cada_uno_paga = Gran_total / Personas

Resultado = print(f"Cantidad de propinas: {Cantidad_de_propina}")
Resultado = print(f"El gran total es: {Gran_total}")
Resultado = print(f"Cada persona paga: {Cada_uno_paga}")