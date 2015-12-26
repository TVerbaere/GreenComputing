package recherches;

public class DichotomiqueRecursive {

	private String[] dico;
	
	public DichotomiqueRecursive(String[] array) {
		dico = array;
	}

	static int recherche_rec(String[] t, String val, int g, int d) {
		if (g >= d)
		{
			if (val.compareTo (t[g]) == 0) return g ;
			if (g > 0 && val.compareTo (t[g-1]) == 0) return g - 1 ;
			return -1 ;
		}
		int m = (d + g) / 2 ;
		if (val.compareTo (t[m]) <= 0)
			return recherche_rec (t, val, g, m) ;
		
		return recherche_rec (t, val, m+1, d) ;
	}

	static int recherche(String[] t, String val) {
		return recherche_rec (t, val, 0, t.length - 1) ;
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
