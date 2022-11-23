package a;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

class Solution {

	public static int solution(int[] A) {
	    System.err.println("Tip: Use System.err.println() to write debug messages on the output tab.");
	    int dif = -1;
	    
	    ArrayList<Integer> list= new ArrayList<Integer>();
	    
	    for (int i = 0; i < A.length; i++) {
	      int count = 0;
	     		      
	     for(int j =i+1; j<A.length; j++) {
	    	 if(A[i]==A[j]) {
	    		 count++;
	    	 }
	     }
	     
	     	if(count>=2) {
	    	 list.add(A[i]);
	     	}
	         
	     }
	    
	    
	    if(list.size()>=2) {
	    	int min = Math.abs(list.get(0)-list.get(1));
	    	
	    	for(int i =0; i<list.size(); i++) {
	    		for(int j = i+1; j< list.size(); j++) {
	    			if(Math.abs(list.get(i)-list.get(j))<min) {
	    				min = Math.abs(list.get(i)-list.get(j));
	    				
	    			}
	    		}
	    	}
	    	
	    	dif =min;
	    	
	    	
	    }
	    
	    return dif;
	  }
	  
	  public static void main(String[] args) {
		  int a [] = {1,1,1};
	
		  System.out.println(solution(a));
	} 
   
 

}
