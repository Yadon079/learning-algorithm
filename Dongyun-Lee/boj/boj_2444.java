import java.util.*;

public class boj_2444{


  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    sc.close();

    int a,b,c;

    for( a = 1; a <= n; a++){
      
      for( b = a ; b < n ; b++){
        System.out.print(" ");
      }
      for( c = a ; c <= 3*a - 2 ; c++){
        System.out.print("*");
      }
      System.out.print("\n");
    }
   
    for( a = n-1; a >= 1; a--){
      for( b = a ; b < n ; b++){
        System.out.print(" ");
      }
      for( c = a ; c <= 3*a - 2 ; c++){
        System.out.print("*");
      }
      System.out.println();
    }
  
 
  }

}

