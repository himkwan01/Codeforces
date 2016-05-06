import java.util.Scanner;
public class A{
	public static void main(String args[]){
		Scanner cin = new Scanner(System.in);
		int a = cin.nextInt();
		int b = (a/3)*2;
		if(a%3!=0)b++;
		System.out.print(b);
	}
}