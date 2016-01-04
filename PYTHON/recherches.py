import re
#import sys

#sys.setrecursionlimit(10000)

def test(f,*args):
    s = str(f)
    nomf = re.split(' ',s)[1]
    # print(nomf, args)
    print('    resultat: '+ str(f(*args)))

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
    
def sequentielle_rec(element, liste_triee):
    def sequentielle_recursive(element, liste_triee, i):
        if i == 90500:
            return None
        elif element == liste_triee[i]:
            return (i)
        else:
            return sequentielle_recursive(element, liste_triee, i)
    return sequentielle_recursive(element, liste_triee, 0)


dico = lit_fichier("../dico.txt")


print("Recherche dichotomique version itérative")
input("Appuyez sur ENTREE pour lancer l'algorithme...")
print("'admonestassions'")
test(dichotomique_iterative,'admonestassions', dico)
print("'b'")
test(dichotomique_iterative,'b', dico)
print("'attablais'")
test(dichotomique_iterative,'attablais', dico)
print("'chiqueur'")
test(dichotomique_iterative,'chiqueur', dico)
print("'bleutas'")
test(dichotomique_iterative,'bleutas', dico)
print("'tableau'")
test(dichotomique_iterative,'tableau', dico)
print("'cheiks'")
test(dichotomique_iterative,'cheiks', dico)
print("'deme'")
test(dichotomique_iterative,'deme', dico)
print("'correspondance'")
test(dichotomique_iterative,'correspondance', dico)
print("'feu'")
test(dichotomique_iterative,'feu', dico)
print("'crapulas'")
test(dichotomique_iterative,'crapulas', dico)
print("'contrevins'")
test(dichotomique_iterative,'contrevins', dico)
print("'dementielle'")
test(dichotomique_iterative,'dementielle', dico)
print("'bb'")
test(dichotomique_iterative,'bb', dico)
print("'contreront'")
test(dichotomique_iterative,'contreront', dico)
print("'climatisant'")
test(dichotomique_iterative,'climatisant', dico)
print("'cc'")
test(dichotomique_iterative,'cc', dico)
print("'zoo'")
test(dichotomique_iterative,'zoo', dico)
print("'acquerront'")
test(dichotomique_iterative,'acquerront', dico)
print("'agglutinai'")
test(dichotomique_iterative,'agglutinai', dico)


print("Recherche dichotomique version recursive")
input("Appuyez sur ENTREE pour lancer l'algorithme...")
print("'admonestassions'")
test(dichotomique_recursive,'admonestassions', dico)
print("'b'")
test(dichotomique_recursive,'b', dico)
print("'attablais'")
test(dichotomique_recursive,'attablais', dico)
print("'chiqueur'")
test(dichotomique_recursive,'chiqueur', dico)
print("'bleutas'")
test(dichotomique_recursive,'bleutas', dico)
print("'tableau'")
test(dichotomique_recursive,'tableau', dico)
print("'cheiks'")
test(dichotomique_recursive,'cheiks', dico)
print("'deme'")
test(dichotomique_recursive,'deme', dico)
print("'correspondance'")
test(dichotomique_recursive,'correspondance', dico)
print("'feu'")
test(dichotomique_recursive,'feu', dico)
print("'crapulas'")
test(dichotomique_recursive,'crapulas', dico)
print("'contrevins'")
test(dichotomique_recursive,'contrevins', dico)
print("'dementielle'")
test(dichotomique_recursive,'dementielle', dico)
print("'bb'")
test(dichotomique_recursive,'bb', dico)
print("'contreront'")
test(dichotomique_recursive,'contreront', dico)
print("'climatisant'")
test(dichotomique_recursive,'climatisant', dico)
print("'cc'")
test(dichotomique_recursive,'cc', dico)
print("'zoo'")
test(dichotomique_recursive,'zoo', dico)
print("'acquerront'")
test(dichotomique_recursive,'acquerront', dico)
print("'agglutinai'")
test(dichotomique_recursive,'agglutinai', dico)


print("Recherche séquentielle version itérative")
input("Appuyez sur ENTREE pour lancer l'algorithme...")
print("'admonestassions'")
test(sequentielle_iterative,'admonestassions', dico)
print("'b'")
test(sequentielle_iterative,'b', dico)
print("'attablais'")
test(sequentielle_iterative,'attablais', dico)
print("'chiqueur'")
test(sequentielle_iterative,'chiqueur', dico)
print("'bleutas'")
test(sequentielle_iterative,'bleutas', dico)
print("'tableau'")
test(sequentielle_iterative,'tableau', dico)
print("'cheiks'")
test(sequentielle_iterative,'cheiks', dico)
print("'deme'")
test(sequentielle_iterative,'deme', dico)
print("'correspondance'")
test(sequentielle_iterative,'correspondance', dico)
print("'feu'")
test(sequentielle_iterative,'feu', dico)
print("'crapulas'")
test(sequentielle_iterative,'crapulas', dico)
print("'contrevins'")
test(sequentielle_iterative,'contrevins', dico)
print("'dementielle'")
test(sequentielle_iterative,'dementielle', dico)
print("'bb'")
test(sequentielle_iterative,'bb', dico)
print("'contreront'")
test(sequentielle_iterative,'contreront', dico)
print("'climatisant'")
test(sequentielle_iterative,'climatisant', dico)
print("'cc'")
test(sequentielle_iterative,'cc', dico)
print("'zoo'")
test(sequentielle_iterative,'zoo', dico)
print("'acquerront'")
test(sequentielle_iterative,'acquerront', dico)
print("'agglutinai'")
test(sequentielle_iterative,'agglutinai', dico)


print("Recherche séquentielle version récursive")
input("Appuyez sur ENTREE pour lancer l'algorithme...")
print("'admonestassions'")
test(sequentielle_iterative,'admonestassions', dico)
print("'b'")
test(sequentielle_iterative,'b', dico)
print("'attablais'")
test(sequentielle_iterative,'attablais', dico)
print("'chiqueur'")
test(sequentielle_iterative,'chiqueur', dico)
print("'bleutas'")
test(sequentielle_iterative,'bleutas', dico)
print("'tableau'")
test(sequentielle_iterative,'tableau', dico)
print("'cheiks'")
test(sequentielle_iterative,'cheiks', dico)
print("'deme'")
test(sequentielle_iterative,'deme', dico)
print("'correspondance'")
test(sequentielle_iterative,'correspondance', dico)
print("'feu'")
test(sequentielle_iterative,'feu', dico)
print("'crapulas'")
test(sequentielle_iterative,'crapulas', dico)
print("'contrevins'")
test(sequentielle_iterative,'contrevins', dico)
print("'dementielle'")
test(sequentielle_iterative,'dementielle', dico)
print("'bb'")
test(sequentielle_iterative,'bb', dico)
print("'contreront'")
test(sequentielle_iterative,'contreront', dico)
print("'climatisant'")
test(sequentielle_iterative,'climatisant', dico)
print("'cc'")
test(sequentielle_iterative,'cc', dico)
print("'zoo'")
test(sequentielle_iterative,'zoo', dico)
print("'acquerront'")
test(sequentielle_iterative,'acquerront', dico)
print("'agglutinai'")
test(sequentielle_iterative,'agglutinai', dico)

input("Appuyez sur ENTREE pour fermer la fenetre...")
