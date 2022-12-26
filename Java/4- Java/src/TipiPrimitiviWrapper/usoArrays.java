package TipiPrimitiviWrapper;

//Studente sottotipo di persona
//Studente extends Persona


public class usoArrays {

	public static void main(String[] args) {
		Person []amici;

		Student [] compagniDiClasse = new Student[50];
		amici = compagniDiClasse;

		Person zia = new Person("");
		
		
		//In memoria prende amici 
		//Non va bene  perchè ho un array di studenti perchè è un supertipo
		//errore in esecuzione
		amici[1] = zia;
		
		
		//Questo è possibile farlo!
		Person []amici2 = new Student[50] ;
		Object []amici3 = new Student[50] ;

	}

}
