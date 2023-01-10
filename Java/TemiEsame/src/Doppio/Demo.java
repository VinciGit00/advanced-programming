package Doppio;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

abstract class Function<T extends Comparable <? super T>, S> implements Comparable<T>{
	T t;
	S s;
	
	T compute(S s) {
		if(this.s==s)
			return t;
		else 
			return null;
	};
	@Override
	public int compareTo(T t) {
		return t.compareTo(t);
	}
}

class StringLenght extends Function<String, Integer>{
	
	Integer compute(String t) {
		return s;
	}

	@Override
	public int compareTo(String o) {
		return t.compareTo(o);
	}

}


class Applyier <T extends Comparable <? super T>,S> implements Comparable<S>{
	
	void apply(ArrayList<S> al, Function<T , S> f) {
		ArrayList<S> temp;
		
		for(int i = 0; i<al.size(); i++) {
			//temp =  al.get(1);
			//S res = f.compute(temp);
		}
		
	}

	@Override
	public int compareTo(S o) {
		return this.compareTo(o);
	}


}

public class Demo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
