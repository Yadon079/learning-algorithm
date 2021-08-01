import java.util.Scanner;

public class boj_1110 {

  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);

    int N = sc.nextInt();
    sc.close();

    int count = 0;
    int num = N;

    while(true){

     N = (((N%10)+(N/10))%10) +((N%10)*10); 
    count++;

    if(num == N){
      break;
    }



    }

    System.out.println(count);

    


  }
  
}
