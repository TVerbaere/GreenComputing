#include "recherche.h"

#define SIZE 90500 // Nombre de mots, a changer en fonction de la taille du dico.txt

char* tab[SIZE];

void init_tableau(void)
   {
      FILE * fp;
      size_t len = 0;
      ssize_t read;

      int i = 0;

      fp = fopen("../dico.txt", "r");

      if (fp == NULL)
        exit(EXIT_FAILURE);


      while ((read = getline(&tab[i], &len, fp)) != -1) {
        i++;
      }

 	fclose(fp);

   }


int main(){

	init_tableau();

	printf("Appuyer sur \"Entrée\" pour lancer la recherche séquentielle itérative...................\n");

	getc(stdin);

	printf("Lancement de la recherche séquentielle itérative\n");

	int res = recherche_sequentielle_iterative(tab,SIZE,"admonestassions\n");

	printf("admonestassions : %d\n",res);

	res = recherche_sequentielle_iterative(tab,SIZE,"b\n");

	printf("b : %d\n",res);

	res = recherche_sequentielle_iterative(tab,SIZE,"attablais\n");

	printf("attablais : %d\n",res);

	res = recherche_sequentielle_iterative(tab,SIZE,"chiqueur\n");

	printf("chiqueur : %d\n",res);

	res = recherche_sequentielle_iterative(tab,SIZE,"bleutas\n");

	printf("bleutas : %d\n",res);

	res = recherche_sequentielle_iterative(tab,SIZE,"tableau\n");

	printf("tableau : %d\n",res);

	res = recherche_sequentielle_iterative(tab,SIZE,"cheiks\n");

	printf("cheiks : %d\n",res);

	res = recherche_sequentielle_iterative(tab,SIZE,"dème\n");

	printf("dème : %d\n",res);

	res = recherche_sequentielle_iterative(tab,SIZE,"correspondance\n");

	printf("correspondance : %d\n",res);

	res = recherche_sequentielle_iterative(tab,SIZE,"feu\n");

	printf("feu : %d\n",res);

	res = recherche_sequentielle_iterative(tab,SIZE,"crapulas\n");

	printf("crapulas : %d\n",res);

	res = recherche_sequentielle_iterative(tab,SIZE,"contrevins\n");

	printf("contrevins : %d\n",res);

	res = recherche_sequentielle_iterative(tab,SIZE,"démentielle\n");

	printf("démentielle : %d\n",res);

	res = recherche_sequentielle_iterative(tab,SIZE,"bb\n");

	printf("bb : %d\n",res);

	res = recherche_sequentielle_iterative(tab,SIZE,"contreront\n");

	printf("contreront : %d\n",res);

	res = recherche_sequentielle_iterative(tab,SIZE,"climatisant\n");

	printf("climatisant : %d\n",res);

	res = recherche_sequentielle_iterative(tab,SIZE,"cc\n");

	printf("cc : %d\n",res);

	res = recherche_sequentielle_iterative(tab,SIZE,"zoo\n");

	printf("zoo : %d\n",res);

	res = recherche_sequentielle_iterative(tab,SIZE,"acquerront\n");

	printf("acquerront : %d\n",res);

	res = recherche_sequentielle_iterative(tab,SIZE,"agglutinai\n");

	printf("agglutinai : %d\n",res);

	printf("Fin de la recherche séquentielle itérative\n");


	// --------------------------------------------------

	printf("Appuyer sur \"Entrée\" pour lancer la recherche séquentielle récursive ...................\n");

	getc(stdin);

	printf("Lancement de la recherche séquentielle récursive\n");

	res = recherche_sequentielle_recursive(tab,SIZE,"admonestassions\n");

	printf("admonestassions : %d\n",res);

	res = recherche_sequentielle_recursive(tab,SIZE,"b\n");

	printf("b : %d\n",res);

	res = recherche_sequentielle_recursive(tab,SIZE,"attablais\n");

	printf("attablais : %d\n",res);

	res = recherche_sequentielle_recursive(tab,SIZE,"chiqueur\n");

	printf("chiqueur : %d\n",res);

	res = recherche_sequentielle_recursive(tab,SIZE,"bleutas\n");

	printf("bleutas : %d\n",res);

	res = recherche_sequentielle_recursive(tab,SIZE,"tableau\n");

	printf("tableau : %d\n",res);

	res = recherche_sequentielle_recursive(tab,SIZE,"cheiks\n");

	printf("cheiks : %d\n",res);

	res = recherche_sequentielle_recursive(tab,SIZE,"dème\n");

	printf("dème : %d\n",res);

	res = recherche_sequentielle_recursive(tab,SIZE,"correspondance\n");

	printf("correspondance : %d\n",res);

	res = recherche_sequentielle_recursive(tab,SIZE,"feu\n");

	printf("feu : %d\n",res);

	res = recherche_sequentielle_recursive(tab,SIZE,"crapulas\n");

	printf("crapulas : %d\n",res);

	res = recherche_sequentielle_recursive(tab,SIZE,"contrevins\n");

	printf("contrevins : %d\n",res);

	res = recherche_sequentielle_recursive(tab,SIZE,"démentielle\n");

	printf("démentielle : %d\n",res);

	res = recherche_sequentielle_recursive(tab,SIZE,"bb\n");

	printf("bb : %d\n",res);

	res = recherche_sequentielle_recursive(tab,SIZE,"contreront\n");

	printf("contreront : %d\n",res);

	res = recherche_sequentielle_recursive(tab,SIZE,"climatisant\n");

	printf("climatisant : %d\n",res);

	res = recherche_sequentielle_recursive(tab,SIZE,"cc\n");

	printf("cc : %d\n",res);

	res = recherche_sequentielle_recursive(tab,SIZE,"zoo\n");

	printf("zoo : %d\n",res);

	res = recherche_sequentielle_recursive(tab,SIZE,"acquerront\n");

	printf("acquerront : %d\n",res);

	res = recherche_sequentielle_recursive(tab,SIZE,"agglutinai\n");

	printf("agglutinai : %d\n",res);

	printf("Fin de la recherche séquentielle récursive\n");


	// --------------------------------------------------

	printf("Appuyer sur \"Entrée\" pour lancer la recherche dichotomique itérative...................\n");

	getc(stdin);

	printf("Lancement de la recherche dichotomique itérative\n");

	res = recherche_dichotomique_iterative(tab,SIZE,"admonestassions\n");

	printf("admonestassions : %d\n",res);

	res = recherche_dichotomique_iterative(tab,SIZE,"b\n");

	printf("b : %d\n",res);

	res = recherche_dichotomique_iterative(tab,SIZE,"attablais\n");

	printf("attablais : %d\n",res);

	res = recherche_dichotomique_iterative(tab,SIZE,"chiqueur\n");

	printf("chiqueur : %d\n",res);

	res = recherche_dichotomique_iterative(tab,SIZE,"bleutas\n");

	printf("bleutas : %d\n",res);

	res = recherche_dichotomique_iterative(tab,SIZE,"tableau\n");

	printf("tableau : %d\n",res);

	res = recherche_dichotomique_iterative(tab,SIZE,"cheiks\n");

	printf("cheiks : %d\n",res);

	res = recherche_dichotomique_iterative(tab,SIZE,"dème\n");

	printf("dème : %d\n",res);

	res = recherche_dichotomique_iterative(tab,SIZE,"correspondance\n");

	printf("correspondance : %d\n",res);

	res = recherche_dichotomique_iterative(tab,SIZE,"feu\n");

	printf("feu : %d\n",res);

	res = recherche_dichotomique_iterative(tab,SIZE,"crapulas\n");

	printf("crapulas : %d\n",res);

	res = recherche_dichotomique_iterative(tab,SIZE,"contrevins\n");

	printf("contrevins : %d\n",res);

	res = recherche_dichotomique_iterative(tab,SIZE,"démentielle\n");

	printf("démentielle : %d\n",res);

	res = recherche_dichotomique_iterative(tab,SIZE,"bb\n");

	printf("bb : %d\n",res);

	res = recherche_dichotomique_iterative(tab,SIZE,"contreront\n");

	printf("contreront : %d\n",res);

	res = recherche_dichotomique_iterative(tab,SIZE,"climatisant\n");

	printf("climatisant : %d\n",res);

	res = recherche_dichotomique_iterative(tab,SIZE,"cc\n");

	printf("cc : %d\n",res);

	res = recherche_dichotomique_iterative(tab,SIZE,"zoo\n");

	printf("zoo : %d\n",res);

	res = recherche_dichotomique_iterative(tab,SIZE,"acquerront\n");

	printf("acquerront : %d\n",res);

	res = recherche_dichotomique_iterative(tab,SIZE,"agglutinai\n");

	printf("agglutinai : %d\n",res);

	printf("Fin de la recherche dichotomique itérative\n");

	// --------------------------------------------------

	printf("Appuyer sur \"Entrée\" pour lancer la recherche dichotomique récursive...................\n");

	getc(stdin);

	printf("Lancement de la recherche dichotomique récursive\n");

	res = recherche_dichotomique_recursive(tab,SIZE,"admonestassions\n");

	printf("admonestassions : %d\n",res);

	res = recherche_dichotomique_recursive(tab,SIZE,"b\n");

	printf("b : %d\n",res);

	res = recherche_dichotomique_recursive(tab,SIZE,"attablais\n");

	printf("attablais : %d\n",res);

	res = recherche_dichotomique_recursive(tab,SIZE,"chiqueur\n");

	printf("chiqueur : %d\n",res);

	res = recherche_dichotomique_recursive(tab,SIZE,"bleutas\n");

	printf("bleutas : %d\n",res);

	res = recherche_dichotomique_recursive(tab,SIZE,"tableau\n");

	printf("tableau : %d\n",res);

	res = recherche_dichotomique_recursive(tab,SIZE,"cheiks\n");

	printf("cheiks : %d\n",res);

	res = recherche_dichotomique_recursive(tab,SIZE,"dème\n");

	printf("dème : %d\n",res);

	res = recherche_dichotomique_recursive(tab,SIZE,"correspondance\n");

	printf("correspondance : %d\n",res);

	res = recherche_dichotomique_recursive(tab,SIZE,"feu\n");

	printf("feu : %d\n",res);

	res = recherche_dichotomique_recursive(tab,SIZE,"crapulas\n");

	printf("crapulas : %d\n",res);

	res = recherche_dichotomique_recursive(tab,SIZE,"contrevins\n");

	printf("contrevins : %d\n",res);

	res = recherche_dichotomique_recursive(tab,SIZE,"démentielle\n");

	printf("démentielle : %d\n",res);

	res = recherche_dichotomique_recursive(tab,SIZE,"bb\n");

	printf("bb : %d\n",res);

	res = recherche_dichotomique_recursive(tab,SIZE,"contreront\n");

	printf("contreront : %d\n",res);

	res = recherche_dichotomique_recursive(tab,SIZE,"climatisant\n");

	printf("climatisant : %d\n",res);

	res = recherche_dichotomique_recursive(tab,SIZE,"cc\n");

	printf("cc : %d\n",res);

	res = recherche_dichotomique_recursive(tab,SIZE,"zoo\n");

	printf("zoo : %d\n",res);

	res = recherche_dichotomique_recursive(tab,SIZE,"acquerront\n");

	printf("acquerront : %d\n",res);

	res = recherche_dichotomique_recursive(tab,SIZE,"agglutinai\n");

	printf("agglutinai : %d\n",res);

	printf("Fin de la recherche dichotomique récursive\n");

	return 1;
}
