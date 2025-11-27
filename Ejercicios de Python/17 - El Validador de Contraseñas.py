Titulo = print("El Validador de Contraseñas")
Contraseña_Correcta = "Mama Coco"

Fallos = 0

Contraseña_Ingresada = input("Ingresa la contraseña: ")

while Contraseña_Ingresada != Contraseña_Correcta:
    print("Contraseña incorrecta.")
    Fallos += 1
    Contraseña_Ingresada = input("Ingresa la contraseña nuevamente: ")

print("Contraseña correcta")
print(f"Intentos fallidos: {Fallos}")