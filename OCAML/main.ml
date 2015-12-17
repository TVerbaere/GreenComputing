let init_tableau =
	let liste = ref [] in
	try
		let ch = open_in "../dico.txt" in
	  	while true do
	    		let line = input_line ch in
	    		liste := !liste@[line]
	  	done;
		!liste;
	with End_of_file -> !liste;;

let recherche_sequentielle_iterative tab v =
	let i = ref 0 and trouve = ref false in
	while  !i < (Array.length tab) && not(!trouve) do
		if ((String.compare (tab.(!i)) v) == 0) then
			trouve := true
		else i := !i + 1
	done;
	if (!trouve) then !i
	else -1;;

let rec sous_recherche_sequentielle_recursive tab v ind =
	if (ind == (Array.length tab)) then -1
	else if ((String.compare (tab.(ind)) v) == 0) then ind
	else sous_recherche_sequentielle_recursive tab v (ind+1);;

let recherche_sequentielle_recursive tab v =
	sous_recherche_sequentielle_recursive tab v 0

let recherche_dichotomique_iterative tab v =
	let debut = ref 0
	and fin = ref (Array.length tab - 1)
	and trouve = ref false
	and milieu = ref (-1) in

	while not(!trouve) && !debut <= !fin do
		milieu := (!debut + !fin) / 2;
		if ((String.compare tab.(!milieu) v) == 0) then trouve := true
		else if ((String.compare tab.(!milieu) v) <= 0) then debut := !milieu + 1
		else fin := !milieu - 1;
	done;
		
	if !trouve then !milieu
	else -1;;

let rec sous_recherche_dichotomique_recursive tab v g d=
	if g >= d then
	begin
		if ((String.compare tab.(g) v) == 0) then g
		else if (g > 0 && (String.compare tab.(g-1) v) == 0) then g-1
		else -1
	end
	else
	begin
		let m = ( (d+g) / 2) in
		if ((String.compare tab.(m) v) >= 0) then sous_recherche_dichotomique_recursive tab v g m
		else sous_recherche_dichotomique_recursive tab v (m+1) d
	end;;

let recherche_dichotomique_recursive tab v =
	sous_recherche_dichotomique_recursive tab v 0 (Array.length tab -1);;

let arg = 
	let tab = Array.of_list init_tableau in

	Printf.printf "Appuyer sur \"Entrée\" pour lancer la recherche séquentielle itérative...................\n";
	read_line();
	Printf.printf "Lancement de la recherche séquentielle itérative\n";
	Printf.printf "%s : %d\n" "admonestassions" (recherche_sequentielle_iterative tab "admonestassions");
	Printf.printf "%s : %d\n" "b" (recherche_sequentielle_iterative tab "b");
	Printf.printf "Fin de la recherche séquentielle itérative\n";

	Printf.printf "Appuyer sur \"Entrée\" pour lancer la recherche séquentielle récursive...................\n";
	read_line();
	Printf.printf "Lancement de la recherche séquentielle récursive\n";
	Printf.printf "%s : %d\n" "admonestassions" (recherche_sequentielle_recursive tab "admonestassions");
	Printf.printf "%s : %d\n" "b" (recherche_sequentielle_recursive tab "b");
	Printf.printf "Fin de la recherche séquentielle récursive\n";

	Printf.printf "Appuyer sur \"Entrée\" pour lancer la recherche dichotomique itérative...................\n";
	read_line();
	Printf.printf "Lancement de la recherche dichotomique itérative\n";
	Printf.printf "%s : %d\n" "admonestassions" (recherche_dichotomique_iterative tab "admonestassions");
	Printf.printf "%s : %d\n" "b" (recherche_dichotomique_iterative tab "b");
	Printf.printf "Fin de la recherche dichotomique itérative\n";

	Printf.printf "Appuyer sur \"Entrée\" pour lancer la recherche dichotomique récursive...................\n";
	read_line();
	Printf.printf "Lancement de la recherche dichotomique récursive\n";
	Printf.printf "%s : %d\n" "admonestassions" (recherche_dichotomique_recursive tab "admonestassions");
	Printf.printf "%s : %d\n" "b" (recherche_dichotomique_recursive tab "b");
	Printf.printf "Fin de la recherche dichotomique récursive\n";


