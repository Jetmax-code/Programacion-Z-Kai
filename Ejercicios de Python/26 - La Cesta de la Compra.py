Titulo = print("La Cesta de la Compra")
Cesta = []

while True:
    print(" CESTA DE COMPRA ")
    print("1. Agregar un nuevo elemento")
    print("2. Mostrar el contenido de la cesta")
    print("3. Eliminar un elemento")
    print("4. Calcular el total de la compra")
    print("5. Renunciar")

    Opcion = input("Elija una opcion (1-5): ").strip()

    if Opcion == "1":
        Nombre = input("Ingrese el nombre del producto: ").strip()
        try:
            Precio = float(input("Ingrese el precio del producto: "))
            Cesta.append((Nombre, Precio))
            print(f"Añadido '{Nombre}' (${Precio}) a la cesta")
        except:
            print("Precio invalido")

    elif Opcion == "2":
        if len(Cesta) == 0:
            print("La cesta esta vacia")
        else:
            print(" Contenido de la cesta ")
            for I, Producto in enumerate(Cesta):
                print(f"{I+1}. {Producto[0]} - ${Producto[1]:}")

    elif Opcion == "3":
        if len(Cesta) == 0:
            print("La cesta esta vacia")
        else:
            print("¿Cual producto desea eliminar?")
            for I, Producto in enumerate(Cesta):
                print(f"{I+1}. {Producto[0]} - ${Producto[1]:}")

            try:
                Remover_Producto = int(input("Ingrese el numero del producto: "))
                if 1 <= Remover_Producto <= len(Cesta):
                    Producto_Removido = Cesta.pop(Remover_Producto - 1)
                    print(f"Removido '{Producto_Removido[0]}' de la cesta")
                else:
                    print("Numero invalido")
            except:
                print("Numero invalido")

    elif Opcion == "4":
        Total = sum(Precio for _, Precio in Cesta)
        print(f"Precio total de los productos: ${Total}")

    elif Opcion == "5":
        print("Saliendo del programa ¡Adios!")
        break

    else:
        print("Opcion invalida")