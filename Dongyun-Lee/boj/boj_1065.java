import java.util.Scanner;

public class boj_1065 {


  public static void main(String[] args){
    
    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    int count=0;

    
      
    for(int i=1;i<=N;i++){

      if(i < 100){
        count++;
      }else {

        if(((i/100) - ((i%100)/10)) == (((i%100)/10) - (i%10))){
          count++;
        }
      }

    }
    System.out.println(count);
    sc.close();

  }
  
}
