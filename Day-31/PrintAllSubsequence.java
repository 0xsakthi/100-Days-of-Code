package recursion;

import java.util.ArrayList;
import java.util.List;
//3->1->2->
//3->1->
//3->2->
//3->
//1->2->
//1->
//2->
//->
//take ,not take using recursion L6 Striver
public class Subsequence {
	static void print(int ind,List<Integer> li ,Integer[] arr,int n) {
		if(ind==n) {
			for(int it:li) {
				System.out.print(it+"->");
			}
			if(li.size()==0) {
				System.out.print("->");
			}
			System.out.println("");
			return;
		}
		
		li.add(arr[ind]);
		print(ind+1,li,arr,n);
		li.remove(li.size()-1);
		print(ind+1,li,arr,n);
	
		
	}
	public static void main(String[] args) {
		Integer arr[] = {3,1,2};
		int n = 3;
		List<Integer> li = new ArrayList<>();
		print(0,li,arr,n);
//		System.out.println(li.hashCode());
	}
}
