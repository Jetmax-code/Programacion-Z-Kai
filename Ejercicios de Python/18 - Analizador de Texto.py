Titulo = print("Analizador de Texto")
Frase = input("Ingresa una frase: ")

Vocales = 0
Espacios = 0

for Letras in Frase:
    L = Letras.lower()

    if L == "a" or L == "e" or L == "i" or L == "o" or L == "u":
        Vocales += 1
    elif L == " ":
        Espacios += 1

print(f"Cantidad de vocales: {Vocales}")
print(f"Cantidad de espacios: {Espacios}")