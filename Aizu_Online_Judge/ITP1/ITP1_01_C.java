import java.io.*;

public class ITP1_01_C{
    public static void main(String[] args)throws IOException{
        BufferedReader line = new BufferedReader(new InputStreamReader(System.in)); 
        String[] figure = line.readLine().split(" ");
        int a = Integer.parseInt(figure[0]);
        int b = Integer.parseInt(figure[1]);
        System.out.println(a*b+" "+(a+b)*2);
    }
}

