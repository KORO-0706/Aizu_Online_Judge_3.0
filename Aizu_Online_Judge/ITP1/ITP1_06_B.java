import java.io.*;
class ITP1_06_B{
    public static void main(String[] args)throws IOException{
        BufferedReader line = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(line.readLine());
        boolean[] judge = new boolean[52+1];
        /*
        *  1～13 スペード
        * 14～26 ハート
        * 27～39 クラブ(クローバー？)
        * 40～52 ダイヤ
        * と考える
        */

        for(int i= 1;  i <= n; i++){
            String[] box = line.readLine().split(" ");
            String symbol = box[0];
            int number = Integer.parseInt(box[1]);
            if(symbol.equals("S")){
                judge[number] = true;
            }else if(symbol.equals("H")){
                judge[number+13] = true;
            }else if(symbol.equals("C")){
                judge[number+26] = true;
            }else if(symbol.equals("D")){
                judge[number+39] = true;
            }
        }

        for(int i = 1; i <= 52; i++){
            if(judge[i] == false){
                if(i <= 13){
                    System.out.println("S "+i);
                }else if(i <= 26){
                    System.out.println("H "+(i-13));
                }else if(i <= 39){
                    System.out.println("C "+(i-26));
                }else if(i <= 52){
                    System.out.println("D "+(i-39));
                }
            }
        }
    }
}