#include <iostream>
#include <cstdio>
#include <fstream>

using namespace std;

void resultat(int);
int rechercheDichoIterative(string [], string);
int rechercheDichoRecursive(string [], string);
int rechercheDichoRec(string [], string, int);
int rechercheSeqIterative(string [], string);
int rechercheSeqRecursive(string [], string);
int rechercheSeqRec(string [], string, int);

int main()
{
    string tab[90500];
    int indice = 0;
    ifstream fichier("../dico.txt", ios::in);
    if(fichier)
    {
        string ligne;
        while(getline(fichier, ligne))
        {
                tab[indice]=ligne;
                //cout << tab[indice] << endl;
                indice++;
        }
        fichier.close();
    }
    /*else
        cerr << "Impossible d'ouvrir le fichier !" << endl;
        return 0;*/

    /*for (int i=0; i<90500; i++){
		cout << tab[i] << endl;
    }*/

    //cout << tab[90499] << endl;
    //cout << tab[5000] << endl;
    cout << "Recherche dichotomique version iterative" << endl;
    cout << "Appuyez sur ENTREE pour lancer l'algorithme..." << endl;
    std::getchar();
    cout << "'admonestassions'" << endl;
    resultat(rechercheDichoIterative(tab, "admonestassions"));
    cout << "'b'" << endl;
    resultat(rechercheDichoIterative(tab, "b"));
    cout << "'attablais'" << endl;
    resultat(rechercheDichoIterative(tab, "attablais"));
    cout << "'chiqueur'" << endl;
    resultat(rechercheDichoIterative(tab, "chiqueur"));
    cout << "'bleutas'" << endl;
    resultat(rechercheDichoIterative(tab, "bleutas"));
    cout << "'tableau'" << endl;
    resultat(rechercheDichoIterative(tab, "tableau"));
    cout << "'cheiks'" << endl;
    resultat(rechercheDichoIterative(tab, "cheiks"));
    cout << "'deme'" << endl;
    resultat(rechercheDichoIterative(tab, "deme"));
    cout << "'correspondance'" << endl;
    resultat(rechercheDichoIterative(tab, "correspondance"));
    cout << "'feu'" << endl;
    resultat(rechercheDichoIterative(tab, "feu"));
    cout << "'crapulas'" << endl;
    resultat(rechercheDichoIterative(tab, "crapulas"));
    cout << "'contrevins'" << endl;
    resultat(rechercheDichoIterative(tab, "contrevins"));
    cout << "'dementielle'" << endl;
    resultat(rechercheDichoIterative(tab, "dementielle"));
    cout << "'bb'" << endl;
    resultat(rechercheDichoIterative(tab, "bb"));
    cout << "'contreront'" << endl;
    resultat(rechercheDichoIterative(tab, "contreront"));
    cout << "'climatisant'" << endl;
    resultat(rechercheDichoIterative(tab, "climatisant"));
    cout << "'cc'" << endl;
    resultat(rechercheDichoIterative(tab, "cc"));
    cout << "'zoo'" << endl;
    resultat(rechercheDichoIterative(tab, "zoo"));
    cout << "'acquerront'" << endl;
    resultat(rechercheDichoIterative(tab, "acquerront"));
    cout << "'agglutinai'" << endl;
    resultat(rechercheDichoIterative(tab, "agglutinai"));

/*
    cout << "Recherche dichotomique version recursive" << endl;
    cout << "Appuyez sur ENTREE pour lancer l'algorithme..." << endl;
    std::getchar();
    cout << "'admonestassions'" << endl;
    resultat(rechercheDichoRecursive(tab, "admonestassions"));
    cout << "'b'" << endl;
    resultat(rechercheDichoRecursive(tab, "b"));
    cout << "'attablais'" << endl;
    resultat(rechercheDichoRecursive(tab, "attablais"));
    cout << "'chiqueur'" << endl;
    resultat(rechercheDichoRecursive(tab, "chiqueur"));
    cout << "'bleutas'" << endl;
    resultat(rechercheDichoRecursive(tab, "bleutas"));
    cout << "'tableau'" << endl;
    resultat(rechercheDichoRecursive(tab, "tableau"));
    cout << "'cheiks'" << endl;
    resultat(rechercheDichoRecursive(tab, "cheiks"));
    cout << "'deme'" << endl;
    resultat(rechercheDichoRecursive(tab, "deme"));
    cout << "'correspondance'" << endl;
    resultat(rechercheDichoRecursive(tab, "correspondance"));
    cout << "'feu'" << endl;
    resultat(rechercheDichoRecursive(tab, "feu"));
    cout << "'crapulas'" << endl;
    resultat(rechercheDichoRecursive(tab, "crapulas"));
    cout << "'contrevins'" << endl;
    resultat(rechercheDichoRecursive(tab, "contrevins"));
    cout << "'dementielle'" << endl;
    resultat(rechercheDichoRecursive(tab, "dementielle"));
    cout << "'bb'" << endl;
    resultat(rechercheDichoRecursive(tab, "bb"));
    cout << "'contreront'" << endl;
    resultat(rechercheDichoRecursive(tab, "contreront"));
    cout << "'climatisant'" << endl;
    resultat(rechercheDichoRecursive(tab, "climatisant"));
    cout << "'cc'" << endl;
    resultat(rechercheDichoRecursive(tab, "cc"));
    cout << "'zoo'" << endl;
    resultat(rechercheDichoRecursive(tab, "zoo"));
    cout << "'acquerront'" << endl;
    resultat(rechercheDichoRecursive(tab, "acquerront"));
    cout << "'agglutinai'" << endl;
    resultat(rechercheDichoRecursive(tab, "agglutinai"));
*/

    cout << "Recherche sequentielle version iterative" << endl;
    cout << "Appuyez sur ENTREE pour lancer l'algorithme..." << endl;
    std::getchar();
    cout << "'admonestassions'" << endl;
    resultat(rechercheSeqIterative(tab, "admonestassions"));
    cout << "'b'" << endl;
    resultat(rechercheSeqIterative(tab, "b"));
    cout << "'attablais'" << endl;
    resultat(rechercheSeqIterative(tab, "attablais"));
    cout << "'chiqueur'" << endl;
    resultat(rechercheSeqIterative(tab, "chiqueur"));
    cout << "'bleutas'" << endl;
    resultat(rechercheSeqIterative(tab, "bleutas"));
    cout << "'tableau'" << endl;
    resultat(rechercheSeqIterative(tab, "tableau"));
    cout << "'cheiks'" << endl;
    resultat(rechercheSeqIterative(tab, "cheiks"));
    cout << "'deme'" << endl;
    resultat(rechercheSeqIterative(tab, "deme"));
    cout << "'correspondance'" << endl;
    resultat(rechercheSeqIterative(tab, "correspondance"));
    cout << "'feu'" << endl;
    resultat(rechercheSeqIterative(tab, "feu"));
    cout << "'crapulas'" << endl;
    resultat(rechercheSeqIterative(tab, "crapulas"));
    cout << "'contrevins'" << endl;
    resultat(rechercheSeqIterative(tab, "contrevins"));
    cout << "'dementielle'" << endl;
    resultat(rechercheSeqIterative(tab, "dementielle"));
    cout << "'bb'" << endl;
    resultat(rechercheSeqIterative(tab, "bb"));
    cout << "'contreront'" << endl;
    resultat(rechercheSeqIterative(tab, "contreront"));
    cout << "'climatisant'" << endl;
    resultat(rechercheSeqIterative(tab, "climatisant"));
    cout << "'cc'" << endl;
    resultat(rechercheSeqIterative(tab, "cc"));
    cout << "'zoo'" << endl;
    resultat(rechercheSeqIterative(tab, "zoo"));
    cout << "'acquerront'" << endl;
    resultat(rechercheSeqIterative(tab, "acquerront"));
    cout << "'agglutinai'" << endl;
    resultat(rechercheSeqIterative(tab, "agglutinai"));


    cout << "Recherche sequentielle version recursive" << endl;
    cout << "Appuyez sur ENTREE pour lancer l'algorithme..." << endl;
    std::getchar();
    cout << "'admonestassions'" << endl;
    resultat(rechercheSeqRecursive(tab, "admonestassions"));
    cout << "'b'" << endl;
    resultat(rechercheSeqRecursive(tab, "b"));
    cout << "'attablais'" << endl;
    resultat(rechercheSeqRecursive(tab, "attablais"));
    cout << "'chiqueur'" << endl;
    resultat(rechercheSeqRecursive(tab, "chiqueur"));
    cout << "'bleutas'" << endl;
    resultat(rechercheSeqRecursive(tab, "bleutas"));
    cout << "'tableau'" << endl;
    resultat(rechercheSeqRecursive(tab, "tableau"));
    cout << "'cheiks'" << endl;
    resultat(rechercheSeqRecursive(tab, "cheiks"));
    cout << "'deme'" << endl;
    resultat(rechercheSeqRecursive(tab, "deme"));
    cout << "'correspondance'" << endl;
    resultat(rechercheSeqRecursive(tab, "correspondance"));
    cout << "'feu'" << endl;
    resultat(rechercheSeqRecursive(tab, "feu"));
    cout << "'crapulas'" << endl;
    resultat(rechercheSeqRecursive(tab, "crapulas"));
    cout << "'contrevins'" << endl;
    resultat(rechercheSeqRecursive(tab, "contrevins"));
    cout << "'dementielle'" << endl;
    resultat(rechercheSeqRecursive(tab, "dementielle"));
    cout << "'bb'" << endl;
    resultat(rechercheSeqRecursive(tab, "bb"));
    cout << "'contreront'" << endl;
    resultat(rechercheSeqRecursive(tab, "contreront"));
    cout << "'climatisant'" << endl;
    resultat(rechercheSeqRecursive(tab, "climatisant"));
    cout << "'cc'" << endl;
    resultat(rechercheSeqRecursive(tab, "cc"));
    cout << "'zoo'" << endl;
    resultat(rechercheSeqRecursive(tab, "zoo"));
    cout << "'acquerront'" << endl;
    resultat(rechercheSeqRecursive(tab, "acquerront"));
    cout << "'agglutinai'" << endl;
    resultat(rechercheSeqRecursive(tab, "agglutinai"));

    cout << "Appuyez sur ENTREE pour fermer..." << endl;
    std::getchar();

    return 0;
}

void resultat (int indiceRetourne){
    if(indiceRetourne != -1) cout << "Le mot est a l'indice : " << indiceRetourne << endl;
    else cout << "Le mot n'est pas dans le tableau." << endl;
}

int rechercheDichoIterative(string tab[], string val){
  bool trouve;
  int id;
  int ifin;
  int im;

  trouve = false;
  id = 0;
  ifin = 90500;

  while(!trouve && ((ifin - id) > 1)){
    im = (id + ifin)/2;
    trouve = (tab[im] == val);
    if(tab[im] > val) ifin = im;
    else id = im;
  }

  if(tab[id] == val) return(id);
  else return(-1);
}

int rechercheDichoRecursive(string tab[], string val){
    return rechercheDichoRec(tab, val, 0);
}

int rechercheDichoRec(string tab[], string val, int indice){

}

int rechercheSeqIterative(string tab[], string val){
    for(int i(0); i<90500; ++i)
    {
        if(tab[i] == val) return(i);
    }
    return(-1);
}

int rechercheSeqRecursive(string tab[], string val){
    return rechercheSeqRec(tab, val, 0);
}

int rechercheSeqRec(string tab[], string val, int indice){
    if(indice == 5430) return(-1);
    if(tab[indice] == val) return(indice);
    else{
        indice++;
        return rechercheSeqRec(tab, val, indice);
    }
}
