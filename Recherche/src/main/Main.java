package main;

import java.util.Scanner;

import recherches.DichotomiqueIterative;
import recherches.DichotomiqueRecursive;
import recherches.SequentielleIterative;
import recherches.SequentielleRecursive;
import data.Tableau;

public class Main {
	
	public static void main(String[] args) {
		String[] dico = Tableau.getArray();
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Appuyer sur \"Entrée\" pour lancer la recherche itérative...................");
		String str = sc.nextLine();
		
		System.out.println("Lancement de la recherche itérative");
		new SequentielleIterative(dico).lancer();
		System.out.println("Fin de la recherche itérative");
		
		System.out.println("Appuyer sur \"Entrée\" pour lancer la recherche récursive...................");
		str = sc.nextLine();
		
		System.out.println("Lancement de la recherche récursive");
		new SequentielleRecursive(dico).lancer();
		System.out.println("Fin de la recherche récursive");
		
		System.out.println("Appuyer sur \"Entrée\" pour lancer la recherche dichotomique...................");
		str = sc.nextLine();
		
		System.out.println("Lancement de la recherche dichotomique");
		new DichotomiqueIterative(dico).lancer();
		System.out.println("Fin de la recherche dichotomique");
		
		System.out.println("Appuyer sur \"Entrée\" pour lancer la recherche dichotomique récursive...................");
		str = sc.nextLine();
		
		System.out.println("Lancement de la recherche dichotomique récursive");
		new DichotomiqueRecursive(dico).lancer();
		System.out.println("Fin de la recherche dichotomique récursive");
	}

}
