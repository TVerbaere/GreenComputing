#include "recherche.h"

#define SIZE 5000 // Nombre de mots, a changer en fonction de la taille du dico.txt

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

	int res = recherche_sequentielle_iterative(tab,SIZE,"admonestassions\n");
	printf("admonestassions : %d\n",res);
	res = recherche_sequentielle_iterative(tab,SIZE,"b\n");
	printf("b : %d\n",res);

	return 1;

}
