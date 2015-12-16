let init_tableau =
	let liste = ref [] in
	try
		let ch = open_in "../dico.txt" in
	  	while true do
	    		let line = input_line ch in
	    		liste := line :: !liste
	  	done;
		!liste;
	with End_of_file -> !liste;;


let recherche_sequentielle_iterative =
	"seq iter\n";;

let rec recherche_sequentielle_recursive =
	"seq rec\n";;

let recherche_dichotomique_iterative =
	"dicho_iter\n";;

let rec recherche_dichotomique_recursive =
	"dicho_rec\n";;

let arg = 
	let tab = Array.of_list init_tableau in

	read_line();
	print_string(recherche_sequentielle_iterative);
	read_line();
	print_string(recherche_sequentielle_recursive);
	read_line();
	print_string(recherche_dichotomique_iterative);
	read_line();
	print_string(recherche_dichotomique_recursive);;


