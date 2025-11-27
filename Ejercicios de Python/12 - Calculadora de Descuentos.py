Titulo = print("Calculadora de Descuentos")
Precio = float(input("Ingrese el precio: "))

if Precio < 50:
    Tasa_de_descuento = 0
elif Precio <= 100:
    Tasa_de_descuento = 0.05
else:
    Tasa_de_descuento = 0.10

Descuento = Precio * Tasa_de_descuento
Precio_Final = Precio - Descuento

# Display results
print(f"Precio Original: ${Precio}")
print(f"Cantidad Descontada: ${Descuento}")
print(f"Precio Final: ${Precio_Final}")