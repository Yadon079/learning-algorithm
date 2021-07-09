import java.util.*;

public class boj_2630 {

  public static int white = 0;
  public static int blue = 0;
  public static int[][] board;

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();

    board = new int[n][n];

    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        board[i][j] = sc.nextInt();
      }
    }

    partition(0, 0, n);

    System.out.println(white);
    System.out.println(blue);
    sc.close();
  }

  public static void partition(int row, int col, int size) {
    if(colorCheck(row, col, size)) {
      if(board[row][col] == 0) {
        white++;
      } else {
        blue++;
      }

      return;
    }

    int newSize = size / 2;

    partition(row, col, newSize);
    partition(row, col + newSize, newSize);
    partition(row + newSize, col, newSize);
    partition(row + newSize, col + newSize, newSize);
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