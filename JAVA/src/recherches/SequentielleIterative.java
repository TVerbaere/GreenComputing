package recherches;

public class SequentielleIterative {

	private String[] dico;
	
	public SequentielleIterative(String[] array) {
		dico = array;
	}

	static int recherche(String[] t, String val) {
		for (int i=0; i < t.length; i++ ) {
			if (t[i].compareTo(val) == 0) {
				return i;
			}
		}
		return -1;
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
