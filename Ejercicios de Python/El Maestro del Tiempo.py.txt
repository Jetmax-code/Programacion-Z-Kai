Titulo = print("El Maestro del Tiempo")
Tiempo = int(input("Introduzca la cantidad de segundos:"))
Horas = Tiempo // 3600
Segundos_restantes = Tiempo % 3600
Minutos = Segundos_restantes // 60
Segundos = Segundos_restantes % 60
Respuesta = print(f"{Tiempo} segundos son {Horas} horas, con {Minutos} minutos y {Segundos} segundos")