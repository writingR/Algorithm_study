package algorithm.study;

import java.util.Scanner;

/* 문제 
 * -- 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
 * 첫째 줄부터 N번째 줄 까지 차례대로 출력한다.
 */

public class Ex_6 {
	
	public static void main(String[] args) {
		
		Scanner scan = new Scanner (System.in);
		//String str = scan.next();
		int num = scan.nextInt();
			for(int i=1;i<=num;i++) {
			System.out.println(i);
	 	  }
		 	
	}
	
}
