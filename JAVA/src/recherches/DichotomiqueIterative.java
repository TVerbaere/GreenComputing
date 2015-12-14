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
		// Valeur ne se trouvant pas dans le dico
		System.out.println("b : "+recherche(dico,"b"));
		
		// Valeur se trouvant dans le dico
		System.out.println("admonestassions : "+recherche(dico,"admonestassions"));

	}
	
	
}
