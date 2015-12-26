package recherches;

public class SequentielleRecursive {
	
private String[] dico;
	
	public SequentielleRecursive(String[] array) {
		dico = array;
	}

	static int recherche_rec(String[] t, String val, int indice) {
		if (indice >= t.length)
			return -1;
		else if (t[indice].compareTo(val) == 0)
			return indice;
		else
			return recherche_rec(t, val, indice+1);
	}
	
	static int recherche(String[] t, String val) {
		return recherche_rec(t, val, 0);
	}

	public void lancer() {

		System.out.println("admonestassions : "+recherche(dico,"admonestassions"));

		System.out.println("b : "+recherche(dico,"b"));

		System.out.println("attablais : "+recherche(dico,"attablais"));

		System.out.println("chiqueur : "+recherche(dico,"chiqueur"));

		System.out.println("bleutas : "+recherche(dico,"bleutas"));

		System.out.println("tableau : "+recherche(dico,"tableau"));

		System.out.println("cheiks : "+recherche(dico,"cheiks"));

		System.out.println("deme : "+recherche(dico,"deme"));

		System.out.println("correspondance : "+recherche(dico,"correspondance"));

		System.out.println("feu : "+recherche(dico,"feu"));

		System.out.println("crapulas : "+recherche(dico,"crapulas"));

		System.out.println("contrevins : "+recherche(dico,"contrevins"));

		System.out.println("dementielle : "+recherche(dico,"dementielle"));

		System.out.println("bb : "+recherche(dico,"bb"));

		System.out.println("contreront : "+recherche(dico,"contreront"));

		System.out.println("climatisant : "+recherche(dico,"climatisant"));

		System.out.println("cc : "+recherche(dico,"cc"));

		System.out.println("zoo : "+recherche(dico,"zoo"));

		System.out.println("acquerront : "+recherche(dico,"acquerront"));

		System.out.println("agglutinai : "+recherche(dico,"agglutinai"));

	}
}
