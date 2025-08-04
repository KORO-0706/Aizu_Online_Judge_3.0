import java.io.*;

public class ITP1_01_B{
    public static void main(String[] args)throws IOException{
        BufferedReader line = new BufferedReader(new InputStreamReader(System.in)); 
        int x = Integer.parseInt(line.readLine());
        
        System.out.println(x*x*x);
    }
}

