package algorithm.study;

import java.util.Scanner;

/* 문제 
 * -- 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
 */

public class Ex_2 {

public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		int a = scan.nextInt();
		int b = scan.nextInt();
		scan.close();
		
		System.out.println(a+b);
   }
	
}
