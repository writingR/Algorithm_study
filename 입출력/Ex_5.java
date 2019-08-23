package algorithm.study;

import java.util.Scanner;

/* 문제 
 * -- 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
 * 각 테스트 케이스마다 "Case #x: "를 출력한 다음, A+B를 출력한다. 테스트 케이스 번호는 1부터 시작한다.
 */

public class Ex_5 {
	
	public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int cycle = scan.nextInt();
        for(int i=1;i<=cycle;i++){
            int a = scan.nextInt();
            int b = scan.nextInt();
            
            if(a>0 && b >0) {
            	System.out.print("Case #"+i + ": ");
            	System.out.println(a+b);
            }
        }
    }
	
}
