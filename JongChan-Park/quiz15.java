// 10845 큐
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.LinkedList;
import java.util.Queue;

public class Main {
  public static void push(Queue<Integer> q, int value) {
    q.add(value);
  }

  public static int pop(Queue<Integer> q) {
    if(q.isEmpty()) {
      return -1;
    }

    return q.poll();
  }

  public static int size(Queue<Integer> q) {
    return q.size();
  }

  public static int empty(Queue<Integer> q) {
    if(q.isEmpty()) {
      return 1;
    }

    return 0;
  }

  public static int front(Queue<Integer> q) {
    if(q.isEmpty()) {
      return -1;
    }

    return q.peek();
  }

  public static int back(Queue<Integer> q, int value) {
    if(q.isEmpty()) {
      return -1;
    }

    return value;
  }

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    int N = Integer.parseInt(br.readLine());
    int first = 0;
    Queue<Integer> q = new LinkedList<>();

    for(int i = 0; i < N; i++) {
      String[] input = br.readLine().split(" ");

      if(input[0].equals("push")) {
        int value = Integer.parseInt(input[1]);
        first = value;

        push(q, value);
      } else if (input[0].equals("pop")) {
        int value = pop(q);

        bw.write(value + "\n");
        bw.flush();
      } else if (input[0].equals("empty")) {
        bw.write(empty(q)  + "\n");
        bw.flush();
      }
       else if (input[0].equals("size")) {
        bw.write(size(q)  + "\n");
        bw.flush();
      } else if (input[0].equals("front")) {
        bw.write(front(q) + "\n");
        bw.flush();
      } else if (input[0].equals("back")) {
        bw.write(back(q, first) + "\n");
        bw.flush();
      }
    }
  }
}