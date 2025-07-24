import java.io.*;

public class ITP1_1_D{
    public static void main(String[] args)throws IOException{
        BufferedReader line = new BufferedReader(new InputStreamReader(System.in)); 
        int S = Integer.parseInt(line.readLine());
        int h = S/3600;
        int m = (S%3600)/60;
        int s = (S%3600)%60;
        System.out.println(h+":"+m+":"+s);
    }
}

