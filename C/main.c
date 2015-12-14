#include "recherche.h"

#define SIZE 5000 // Nombre de mots, a changer en fonction de la taille du dico.txt

char* tab[SIZE];

void init_tableau(void)
   {
      FILE * fp;
      char* line = NULL;
      size_t len = 0;
      ssize_t read;

      int i = 0;

      fp = fopen("../dico.txt", "r");

      if (fp == NULL)
        exit(EXIT_FAILURE);


      while ((read = getline(&line, &len, fp)) != -1) {
	tab[i] = line;
        i++;
      }

 	fclose(fp);

   }


int main(){

	init_tableau();

printf("%s\n",tab[0]);
printf("%s\n",tab[1]);

	//int res = recherche_sequentielle_iterative(tab,SIZE,"admonestassions");
	//printf("%d",res);

	return 1;

}
