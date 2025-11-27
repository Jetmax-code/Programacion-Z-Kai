Titulo = print("El Reloj Matematico")
total_segundos = int(input("Ingresa la cantidad de segundos: "))
horas = total_segundos // 3600
segundos_restantes = total_segundos % 3600
minutos = segundos_restantes // 60
segundos_finales = segundos_restantes % 60
Respuesta = print(f"{total_segundos} segundos son: {horas} horas, {minutos} minutos, y {segundos_finales} segundos")