Titulo = print("Aprovacion de Creditos")
Deuda = input("Tienes deuda? (Si/No): ").strip().lower()

if Deuda == "si":
    print("Credito Rechazado.")
elif Deuda == "no":
    Ingreso = float(input("Introduzca su ingreso mensual: "))
    Antiguedad = float(input("Introduza su antigüedad en años: "))

    if Ingreso > 2000 and Antiguedad > 2:
        print("Credito Aprovado: 100%")
        
    elif Ingreso > 2000 and Antiguedad < 2:
        print("Credito Aprovado: 50%")

    elif 1000 <= Ingreso <= 2000 and Antiguedad > 5:
        print("Credito Aprovado: 50%")
    
    else:
        print("Credito Rechazado")

else:
    print("Respuesta Invalida")