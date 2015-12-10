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
		// Valeur ne se trouvant pas dans le dico
		System.out.println("b : "+recherche(dico,"b"));
		
		// Valeur se trouvant dans le dico
		System.out.println("admonestassions : "+recherche(dico,"admonestassions"));

	}
	
	
}
