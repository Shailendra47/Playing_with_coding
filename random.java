/*
Q. WAJP to explain the concept of random method?
*/
import java.util.Random;

class RandomClass{
	public static void main(String[] args) {
		Random object = new Random();
		for (int i=0; i<=5; i++) {
			int objecti = object.nextInt(50);
			System.out.println(+ objecti);
		}
	}
}