Titulo = print("La Tienda de Descuentos")
Precio = int(input("Ingrese el precio: "))
Descuento = int(input("Ingrese el porcentaje de descuento: "))
Calculo_de_descuento = Descuento / 100
Otro_calculo = Precio * Calculo_de_descuento
Precio_final = Precio - Otro_calculo
Ahorra = print(f"Se ahorra un: {Otro_calculo}")
Final = print(f"El precio final es: {Precio_final}")