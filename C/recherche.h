#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {false, true} boolean;

int recherche_sequentielle_iterative(char** tab, int taille, char* val);

int recherche_sequentielle_recursive(char** tab, int taille, char* val);

int recherche_dichotomique_iterative(char** tab, int taille, char* val);

int recherche_dichotomique_recursive(char** tab, int taille, char* val);
