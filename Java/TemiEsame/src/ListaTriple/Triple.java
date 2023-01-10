package ListaTriple;

import java.util.ArrayList;

public class Triple {

	public static void main(String[] args) {
		
	}
}

class ListaTriple<T, R extends Comparable <? super R>, S  extends Comparable <? super S>> {
	ArrayList <T> t = new ArrayList<T>();
	ArrayList <R> r = new ArrayList<R>();
	ArrayList <S> s = new ArrayList<S>();
	
	void aggiungi(T a, R b, S c) {
		t.add(a);
		r.add(b);
		s.add(c);
	}
	
	boolean find(R b, S c) {
		
		R max1 =  r.get(0);
		S max2 =  s.get(0);
		
		for(R elem : r) {
			 if(max1.compareTo(elem)<0)
				 max1 = elem;
		}
		
		for(S elem : s) {
			if(max2.compareTo(elem)<0)
				 max2 = elem;
		}
		
		return max1==b && max2==c;
	}

}