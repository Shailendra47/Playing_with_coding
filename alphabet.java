//Q. WAJP to print alphabet A to Z using File handling
import java.io.*;

class Letter{
	FileOutputStream fout;
	void show() throws Exception{
		try{
			fout = new FileOutputStream("CapitalLetter.txt");
			for (char ch='A'; ch<='Z'; ch++) {
				fout.write(ch);
				fout.write(' ');
			}			
		}catch(IOException obj){}
		finally{
			fout.close();
			//Close method throws an IOException
		}
	}
	public static void main(String[] s) {
		Letter lobj = new Letter();
		try{
			lobj.show();
		}catch(Exception e){}
	}
}
//By default throw exception is CheckException