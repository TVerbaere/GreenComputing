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
		// Valeur ne se trouvant pas dans le dico
		System.out.println("b : "+recherche(dico,"b"));
		
		// Valeur se trouvant dans le dico
		System.out.println("admonestassions : "+recherche(dico,"admonestassions"));

	}
	
}
