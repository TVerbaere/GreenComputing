#include "recherche.h"

int recherche_sequentielle_iterative(char** tab, int taille, char* val) {
	for (int i=0; i < taille; i++) {
		//printf("%s",tab[i]);
		if (strcmp(tab[i] , val) == 0) {
			return i;
		}
	}
	return -1;
}

int recherche_sequentielle_recursive(char** tab, int taille, char* val) {
	return 0;
}

int recherche_dichotomique_iterative(char** tab, int taille, char* val) {
	return 0;
}

int recherche_dichotomique_recursive(char** tab, int taille, char* val) {
	return 0;
}
