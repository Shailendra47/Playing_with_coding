import java.util.Scanner;

class Testscanner{
	public static void main(String[] args) {
		Scanner s1 = new Scanner(System.in);
		System.out.println("Enter your Number");
		int var1 = s1.nextInt();
		System.out.println("Enter your Number");
		int var2  = s1.nextInt();
		int var3 = var1 + var2;
		System.out.println("" + var3);
	}
}