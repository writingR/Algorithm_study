package algorithm.study;

import java.util.Scanner;

/* 문제 
 * -- 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
 * 조건 -> 첫째 줄에 A, 둘째 줄에 B가 주어진다. (0 < A, B < 10)
 */


public class Ex_3 {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);	
		
		int a = scan.nextInt();
		int b = scan.nextInt();
		
		scan.close();
		
		System.out.println(a+b);

	}
	
}
