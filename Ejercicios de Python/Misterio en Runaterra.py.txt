Titulo = print("Misterio en Runaterra")

# Nivel 1
print("\nTe despiertas en una extraña cueva.")
print("Te ADENTRAS en la cueva, SALES de ella, o pides por AYUDA?")
Opcion_1 = input("Elige: ADENTRARSE / SALIR / AYUDA: ").strip().lower()

if Opcion_1 == "adentrarse":
    # Nivel 2A
    print("\nTe adentras y te encuentras una sala con tres puertas, cual tomaras?")
    print("PUERTA AMARILLA, PUERTA ROJA, o PUERTA VERDE")
    Opcion_2 = input("Elige: AMARILLA / ROJA / VERDE: ").strip().lower()

    if Opcion_2 == "amarilla":
        # Nivel 3A
        print("\nTe encuentras en una ciudad blanca y dorada, te encuentras con tres individuos: Un CABALLERO, un CRIMINAL, y un INVESTIGADOR.")
        print("Con cual vas a hablar?")
        Opcion_3 = input("Elige: CABALLERO / CRIMINAL / INVESTIGADOR: ").strip().lower()

        if Opcion_3 == "caballero":
            # --- LEVEL 4A ---
            print("\nEl caballero te pregunta que necesitas.")
            print("Le RESPONDES, lo IGNORAS, o lo ATACAS?")
            Opcion_4 = input("Elige: RESPONDER / IGNORAR / ATACAR: ").strip().lower()

            if Opcion_4 == "responder":
                print("\nEl caballero entiende tu problema y te ayuda a volver a tu mundo")
            elif Opcion_4 == "ignorar":
                print("\nEl caballero sospecha de ti y te lleva a la carcel")
            elif Opcion_4 == "atacar":
                print("\nEl caballero ni se inmuta ante tu ataque y de noquea de un golpe")
            else:
                print("Opcion invalida")

        elif Opcion_3 == "criminal":
            # Nivel 4B
            print("\nEl criminal te saluda y te pregunta si odias la opresion.")
            print("Le respondes SI, NO, o le PREGUNTAS porque huele a rata muerta")
            Opcion_4 = input("Elige: SI / NO / PREGUNTAR: ").strip().lower()

            if Opcion_4 == "si":
                print("\nTe invita a su rebelion contra la ciudad, ahora tambien eres un criminal!")
            elif Opcion_4 == "no":
                print("\nEl criminal te declara su enemigo y el de todos los magos")
            elif Opcion_4 == "preguntar":
                print("\nEl criminal se ofende y se va, estas solo ahora.")
            else:
                print("Opcion invalida.")

        elif Opcion_3 == "investigador":
            print("\nEl investigador no pregunta y te arresta por que cree que eres un mago")
        else:
            print("Opcion no valida")

    elif Opcion_2 == "roja":
        # Nivel 3B
        print("\nTe encuentras en una ciudad oscura y militarizada, te encuentras con tres personas: un GENERAL, un ASESINO, y una MAGA")
        print("¿Con cual vas a hablar?")
        Opcion_3 = input("Elige: GENERAL / ASESINO / MAGA: ").strip().lower()

        if Opcion_3 == "general":
            print("\nEl general te invita a unirte al ejercito, ¡ahora eres un soldado!")
        elif Opcion_3 == "asesino":
            print("\nEl asesino sospecha que eres un espia y te elimina")
        elif Opcion_3 == "maga":
            print("\nLa maga te manda al reino de las sombras, ya no puedes volver a casa")
        else:
            print("Opcion invalida")

    elif Opcion_2 == "verde":
        # Nivel 3C
        print("\nTe encuentras en un pueblo rodeado de un bosque mistico y ves a tres personas: un NINJA, un ARTISTA, y una RATA ELECTRICA")
        print("¿Con cual hablas?")
        Opcion_3 = input("Elige: NINJA / ARTISTA / RATA: ").strip().lower()

        if Opcion_3 == "ninja":
            print("\nEl ninja te tira una bomba de humo y regresas a tu hogar")
        elif Opcion_3 == "artista":
            print("\n¡El artista te dibuja un mapa y regresas a casa!")
        elif Opcion_3 == "rata":
            print("\nLa criatura te grita: NO SOY PIKACHU, y procede a darte un corrientazo")
        else:
            print("Opcion invalida")
    else:
        print("Opcion invalida")

# (Nivel 1 - Salir)
elif Opcion_1 == "salir":
    print("\nSales de la cueva y te encuentras con una guerrera en una armadura radiante como el sol")
    print("Te ESCONDES, la ENFRENTAS, o le pides AYUDA?")
    Opcion_2 = input("Elige: ESCONDERSE / ENFRENTAR / AYUDA: ").strip().lower()

    if Opcion_2 == "esconderse":
        print("\nLa guerrera no te ve y eres capaz de escapar de la cueva")
    elif Opcion_2 == "enfrentar":
        print("\nLa guerrera acepta tu reto y te lanza un rayo solar que te hace cenizas")
    elif Opcion_2 == "ayuda":
        print("\nLa guerrera escucha tu plegaria y le pide al sol que te mande devuelta a tu hogar")
    else:
        print("Opcion invalida")

# (Nivel 1 - Ayuda)
elif Opcion_1 == "ayuda":
    print("\nUn hombre cubierto en cristales llega en tu auxilio")
    print("¿Que haces: CORRES de el, le pides AYUDA, o le ROBAS un cristal?")
    Opcion_2 = input("Elige: CORRER / AYUDA / ROBAR: ").strip().lower()

    if Opcion_2 == "correr":
        print("\nEscapas de el hombre en miedo y terminas cayendo en un pozo dentro de la cueva, estas perdido para siempre")
    elif Opcion_2 == "ayuda":
        print("\nEl hombre te lleva a un misterioso portal y te mande devuelta a casa")
    elif Opcion_2 == "robar":
        print("\nLe robas un cristal y te lleva devuelta a casa, pero el hombre te siguio y te metio un guantazo por ratero")
    else:
        print("Opcion invalida")

else:
    print("Opcion invalida")