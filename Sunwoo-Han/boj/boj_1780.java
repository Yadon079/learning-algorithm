import java.io.*;
import java.util.*;

public class boj_1780 {

  public static int a = 0; // -1
  public static int b = 0; // 0
  public static int c = 0; // 1
  public static int[][] board;

  public static void main(String[] args) throws Exception {
    // Scanner sc = new Scanner(System.in);
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st;

    // int n = sc.nextInt();
    int n = Integer.parseInt(br.readLine());

    board = new int[n][n];

    for(int i = 0; i < n; i++) {
      st = new StringTokenizer(br.readLine());

      for(int j = 0; j < n; j++) {
        // board[i][j] = sc.nextInt();
        board[i][j] = Integer.parseInt(st.nextToken());
      }
    }

    partition(0, 0, n);

    System.out.println(a);
    System.out.println(b);
    System.out.println(c);
    // sc.close();
  }

  public static void partition(int row, int col, int size) {
    if(colorCheck(row, col, size)) {
      if(board[row][col] == -1) {
        a++;
      } else if(board[row][col] == 0) {
        b++;
      } else {
        c++;
      }

      return;
    }

    int newSize = size / 3;

    partition(row, col, newSize);
    partition(row, col + newSize, newSize);
    partition(row, col + 2 * newSize, newSize);	

    partition(row + newSize, col, newSize);
    partition(row + newSize, col + newSize, newSize);
    partition(row + newSize, col + 2 * newSize, newSize);

    partition(row + 2 * newSize, col, newSize);
		partition(row + 2 * newSize, col + newSize, newSize);
		partition(row + 2 * newSize, col + 2 * newSize, newSize);
  }

  public static boolean colorCheck(int row, int col, int size) {
    int color = board[row][col];

    for(int i = row; i < row + size; i++) {
      for(int j = col; j < col + size; j++) {
        if(board[i][j] != color) {
          return false;
        }
      }
    }

    return true;
  }

}