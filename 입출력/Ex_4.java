package algorithm.study;

import java.util.Scanner;

/* 문제 
 * -- 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
 * 각 테스트 케이스마다 A+B를 출력한다.
 */

public class Ex_4 {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);	
		int cycle = scan.nextInt();
		while(scan.hasNextInt()) {
			for(int i=0;i<cycle;i++) {
			int a = scan.nextInt();
			int b = scan.nextInt();
			System.out.println(a+b);
			}
		}

	}

	
}
