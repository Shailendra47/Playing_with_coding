import java.io.*;

class Bufferreaderexample{
	public static void main(String[] args) throws Exception{
		InputStreamReader ir = new InputStreamReader(System.in);
		BufferedReader br =  new BufferedReader(ir);
		System.out.println("Enter your name");
		String name = br.readLine();
		System.out.println("Welcome " + name);
	}
}