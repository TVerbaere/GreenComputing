import re

def test(f,*args):
    s = str(f)
    nomf = re.split(' ',s)[1]
    # print(nomf, args)
    print('resultat: '+ str(f(*args)))

def lit_fichier(file) :
    f = open(file,"r")
    mot = []
    for l in f :
        mot.append(l.replace("\n",""))
    f.close()
    return mot

# recherche dichotomique version itérative 
def dichotomique_iterative(element, liste_triee):
    if len(liste_triee) == 0:
        return(None)
    a = 0
    b = len(liste_triee)-1
    while a <= b: 
        c = int((a+b)/2)
        if element == liste_triee[c]: return(c)
        elif element < liste_triee[c]: b = c - 1
        else: a = c + 1
    return None

# recherche dichotomique version recursive
def dichotomique_recursive(element, liste_triee, *args):
    if len(args) == 0:
        i, j = 0, len(liste_triee)
    else:
        i, j = args
    if j <= i:
        return None
    k = (i + j) // 2
    if element == liste_triee[k]:
        return (k)
    elif element < liste_triee[k]:
        return dichotomique_recursive(element, liste_triee, i, k)
    else:
        return dichotomique_recursive(element, liste_triee, k+1, j)


# Recherche séquentielle version itérative
def sequentielle_iterative(element, liste_triee):
    i = 0
    while i < len(liste_triee):
        if element == liste_triee[i]:
            return (i)
        else:
            i = i+1
    return None

# Recherche séquentielle version recursive
def sequentielle_recursive(element, liste_triee, i):
    if i == len(liste_triee):
        return None
    elif element == liste_triee[i]:
        return (i)
    else:
        return sequentielle_recursive(element, liste_triee, i=i+1)
    
def sequentielle_rec(element, liste_triee):
    return sequentielle_recursive(element, liste_triee, 0)

dico = lit_fichier("dico.txt")

print("recherche dichotomique 'admonestassions' version itérative")
test(dichotomique_iterative,'admonestassions', dico)
print("recherche dichotomique 'b' version itérative")
test(dichotomique_iterative,'b', dico)
print("recherche dichotomique 'admonestassions' version recursive")
test(dichotomique_recursive,'admonestassions', dico)
print("recherche dichotomique 'b' version recursive")
test(dichotomique_recursive,'b', dico)
print("Recherche séquentielle 'admonestassions' version itérative")
test(sequentielle_iterative,'admonestassions', dico)
print("Recherche séquentielle 'b' version itérative")
test(sequentielle_iterative,'b', dico)
