#include "recherche.h"

int recherche_sequentielle_iterative(char** tab, int taille, char* val) {
	for (int i=0; i < taille; i++) {
		if (strcmp(tab[i] , val) == 0) {
			return i;
		}
	}
	return -1;
}

int sous_recherche_sequentielle_recursive(char** tab, int taille, char* val, int indice) {
	if (indice == taille)
		return -1;
	if (strcmp(tab[indice] , val) == 0) {
		return indice;
	}
	else {
		return sous_recherche_sequentielle_recursive(tab, taille, val, indice+1);
	}
}

int recherche_sequentielle_recursive(char** tab, int taille, char* val) {
	return sous_recherche_sequentielle_recursive(tab, taille, val, 0);
}

int recherche_dichotomique_iterative(char** tab, int taille, char* val) {
	int debut = 0;
	int fin = taille - 1;
	boolean trouve = false;
	int milieu = -1;
		
	while ((trouve == false) && debut <= fin) {

		milieu = (debut+fin)/2;

		if (strcmp(tab[milieu],val) == 0) {
			trouve = true;
		}
		else if (strcmp(tab[milieu],val) <= 0){
			debut = milieu + 1;
		}
		else {
			fin = milieu - 1;
		}
	}
		
	if (trouve == true)
		return milieu;
	else
		return -1;
}

int sous_recherche_dichotomique_recursive(char** tab, int taille, char* val, int g, int d) {

	if (g >= d)
	{
		if (strcmp(tab[g],val) == 0) return g ;
		if (g > 0 && strcmp(tab[g-1],val) == 0) return g - 1 ;
		return -1 ;
	}

	int m = (d + g) / 2 ;

	if (strcmp(tab[m],val) >= 0)
		return sous_recherche_dichotomique_recursive(tab, taille, val, g, m) ;
		
	return sous_recherche_dichotomique_recursive(tab, taille, val, m+1, d) ;
}

int recherche_dichotomique_recursive(char** tab, int taille, char* val) {
	return sous_recherche_dichotomique_recursive(tab, taille, val, 0, taille-1);
}
