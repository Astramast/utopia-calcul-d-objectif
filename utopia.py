def f(string):
    try:
        s = int(input(string))
    except:
        print("Mauvais input, veuillez réessayer")
        f(string)
    return s

k = ["Rang de l'attaqué : ", "Rang de l'attaquant : ", "Bonus/Malus : "]
l=[]
u = 1
while u == 1:
    print("Calcul de l'objectif : ")
    print("50 + (? - ?) * 5 + ?")
    for i in k:
        l.append(f(i))
    print(f"50 + ({l[0]} - {l[1]}) * 5 + {l[2]}")
    print("Objectif =", 50+(l[0] - l[1]) *5 + l[2])
    u = f("Continuer ? (Écrire 1 si oui 0 si non) : ")

