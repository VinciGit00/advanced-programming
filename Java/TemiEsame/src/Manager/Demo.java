package Manager;

public class Demo {

	public static void main(String[] args) {
		Lavoratore i1 = new Impiegato();
		Lavoratore i2 = new Impiegato();
		Lavoratore i3 = new Impiegato();
		Lavoratore i4 = new Impiegato();
		
		Manager m1 = new Manager();
		Manager m2 = new Manager();
		
		m1.listaLavoratori.add(i1);
		m1.listaLavoratori.add(i2);
		m1.listaLavoratori.add(i3);
		m1.listaLavoratori.add(i4);

		m2.listaLavoratori.add(m1);
		
		Stipendi s = new Stipendi();
		
		System.out.println(m1.accept(s));
		System.out.println(m2.accept(s));

	}

}
