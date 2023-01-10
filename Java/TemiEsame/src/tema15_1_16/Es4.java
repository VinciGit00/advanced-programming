package tema15_1_16;

import java.util.ArrayList;
import java.util.Collections;

//Significa che usa il comparable della superclasse
class VoceDizionario<E extends Comparable<? super E> , V> implements Comparable<VoceDizionario<E, V>> {
	E chiave;
	V valore;

	VoceDizionario(E chiave, V valore) {
		this.chiave = chiave;
		this.valore = valore;

	}

	@Override
	public String toString() {
		return "chiave: " + chiave + ", valore: " + valore;
	}

	@Override
	public boolean equals(Object obj) {

		if (obj instanceof VoceDizionario) {
			VoceDizionario v = (VoceDizionario) obj;

			return v.chiave.equals(this.chiave);
		}
		return false;
	}

	@Override
	public int compareTo(VoceDizionario<E, V> o) {
		return chiave.compareTo(o.chiave);
	}

}

class Dizionario<E, V> {

	ArrayList<VoceDizionario> lista;

	Dizionario() {
		lista = new ArrayList<>();
	}

	public E cerca(E chiave) {
		for (int i = 0; i < lista.size(); i++) {
			if (lista.get(i).chiave.equals(chiave)) {
				return (E) lista.get(i).valore;
			}
		}
		return null;
	}

	public boolean cercaVal(V valore) {
		for (int i = 0; i < lista.size(); i++) {
			// Non va bene, devo fare un comparable
			if (lista.get(i).valore.equals(valore)) {
				return true;
			}
		}
		return false;
	}

	public void insert(E chiave, V valore) {
		boolean flag = true;

		for (int i = 0; i < lista.size(); i++) {
			if (lista.get(i).chiave.equals(chiave) && lista.get(i).valore.equals(valore)) {
				flag = false;
				break;
			}

		}
		if (flag == true) {
			lista.add(new VoceDizionario((Comparable) chiave, valore));
			ordina();
		}

	}

	void ordina() {
		Collections.sort(this.lista);
	}

	public void stampa() {
		for (int i = 0; i < lista.size(); i++) {
			System.out.println(lista.get(i).toString());
		}
	}

}

public class Es4 {
	public static void main(String[] args) {

		Dizionario d = new Dizionario();
		d.insert("c", "b");
		d.insert("a", "b");
		d.insert("b", "b");
		d.insert("d", "b");
		d.insert("a", "b");
		d.insert("a", "b");


		d.stampa();
		
		d.ordina();
		
		d.stampa();

		System.out.println(d.cerca("a"));
	}
}
