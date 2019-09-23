//Q. WAJP to demostrate Exception handling through try, catch block?
import java.util.Scanner;

class ArrayBound{
	public static void main(String[] s) {
		Scanner sc =  new Scanner(System.in);
		int arr[][] = new int[2][3];
		System.out.println("Enter values: ");
		try{
			for (int i=0; i<=1; i++) {
				for (int j=0; j<=2; j++) {
					arr[i][j] = sc.nextInt();
				}
			}
		}catch(ArrayIndexOutOfBoundsException e){}
		System.out.println("Your array = ");
		for (int i=0; i<=2; i++) {
			for (int j=0; j<=2; j++) {
				System.out.println("\t" + arr[i][j]);
			}
			System.out.println();
		}
	}
}