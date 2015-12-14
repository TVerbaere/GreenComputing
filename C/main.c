#include "recherche.h"

int taille_dico(void)
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
        i++;
      }

      fclose(fp);
      if (line)
        free(line);
      
      return i;

  }

char** creer_tableau(void)
   {
      FILE * fp;
      char* line = NULL;
      size_t len = 0;
      ssize_t read;

      int taille = taille_dico();
      int i = 0;

      fp = fopen("../dico.txt", "r");

      char* tab[taille]

      if (fp == NULL)
        exit(EXIT_FAILURE);


      while ((read = getline(&line, &len, fp)) != -1) {
        printf("%s\n",line);
        i++;
      }

      return tab;
   }


int main(){

	//char** tableau = creer_tableau();
	//printf("%s",*tableau);

	//int taille = taille_dico();

	//int res = recherche_sequentielle_iterative(tableau, taille, "admonestassions");

	//printf("%d",res);

	return 1;

}