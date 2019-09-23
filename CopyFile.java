//To copy stulist.txt into copy.txt file

import java.io.*;

public class CopyFile{
	FileInputStream fin;
	FileOutputStream fout;
	int i;
	File file;
	void CopyFile(){
		try{
			file = new File("stulist.txt");
            fin = new FileInputStream(file);
            fout = new FileOutputStream(new File("copy.txt"));
		}catch(Exception obj){
			System.out.println("ExceptionCaught: " + obj);
		}
	}
	void copy(){
		try{
			while((i = fin.read())!=-1){
				fout.write((char)i);
	            System.out.print((char)i);
	        }
		}catch(Exception obj){
			System.out.println("ExceptionCaught in reading and writing: " + obj);
		}      
		finally{
			try{
				fin.close();
                fout.close();
			}catch(Exception object){
				System.out.println("ExceptionCaught when closing I/O file :" + object);
			}
		}    
	}	
public static void main(String[] args) {
		CopyFile fobj = new CopyFile();
    	fobj.copy();
	}
}
