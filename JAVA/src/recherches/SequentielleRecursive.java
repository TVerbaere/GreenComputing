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
		// Valeur ne se trouvant pas dans le dico
		System.out.println("b : "+recherche(dico,"b"));
		
		// Valeur se trouvant dans le dico
		System.out.println("admonestassions : "+recherche(dico,"admonestassions"));

	}
}
