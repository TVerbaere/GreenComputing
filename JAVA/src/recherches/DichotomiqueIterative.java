package recherches;

public class DichotomiqueIterative {

	private String[] dico;
	
	public DichotomiqueIterative(String[] array) {
		dico = array;
	}

	static int recherche(String[] t, String val) {
		
		int debut = 0;
		int fin = t.length - 1;
		boolean trouve = false;
		int milieu = -1;
		
		while (!trouve && debut <= fin) {
			milieu = (debut+fin)/2;
			if (t[milieu].compareTo(val) == 0) {
				trouve = true;
			}
			else if (t[milieu].compareTo(val) <= 0){
				debut = milieu + 1;
			}
			else {
				fin = milieu - 1;
			}
		}
		
		if (trouve)
			return milieu;
		else
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
