package data;

import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.InputStream;
import java.io.InputStreamReader;

public class Tableau {
	
	
	public static String[] getArray() {
		String[] array = new String[5000];;
		
		try{
			InputStream ips=new FileInputStream("../dico.txt"); 
			InputStreamReader ipsr=new InputStreamReader(ips);
			BufferedReader br=new BufferedReader(ipsr);
			String ligne;
			int i = 0;
			while ((ligne=br.readLine())!=null){
				array[i] = ligne;
				i++;
			}
			br.close(); 
		}		
		catch (Exception e){
			e.printStackTrace();
		}

		return array;
	}

}
