package EsGarga;

import java.util.ArrayList;

class Container{
	ArrayList<Object> lista = new ArrayList();	
	
	void insert(Object element) {
		lista.add(element);
	}
	
	void print() {
		for(int i=0; i<lista.size(); i++) {
			System.out.println(lista.get(i).toString());
		}
	}
}

public class esempioGarga {

	public static void main(String[] args) {
		Container c = new Container();
		
		c.insert("Stringa");
		
		c.print();

	}

}
