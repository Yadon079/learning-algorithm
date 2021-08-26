import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class boj_1991 {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(br.readLine());

    Tree tree = new Tree();

    for (int i = 0; i < n; i++) {
      char[] data;
      data = br.readLine().replaceAll(" ", "").toCharArray();

      tree.createNode(data[0], data[1], data[2]);
    }

    tree.preOrder(tree.root);
    System.out.println();

    tree.inOrder(tree.root);
    System.out.println();

    tree.postOrder(tree.root);

    br.close();
  }

}

class Node {
  char data;
  Node left;
  Node right;

  Node(char data) {
    this.data = data;
  }
}

class Tree {
  Node root;

  public void createNode(char data, char leftData, char rightData) {
    if (root == null) {
      root = new Node(data);

      if (leftData != '.') {
        root.left = new Node(leftData);
      }

      if (rightData != '.') {
        root.right = new Node(rightData);
      }
    } else {
      searchNode(root, data, leftData, rightData);
    }
  }

  public void searchNode(Node root, char data, char leftData, char rightData) {
    if (root == null) {
      return;
    } else if (root.data == data) {
      if (leftData != '.') {
        root.left = new Node(leftData);
      }

      if (rightData != '.') {
        root.right = new Node(rightData);
      }
    } else {
      searchNode(root.left, data, leftData, rightData);
      searchNode(root.right, data, leftData, rightData);
    }
  }

  public void preOrder(Node root) {
    System.out.print(root.data);

    if (root.left != null) {
      preOrder(root.left);
    }

    if (root.right != null) {
      preOrder(root.right);
    }
  }

  public void inOrder(Node root) {
    if (root.left != null) {
      inOrder(root.left);
    }

    System.out.print(root.data);

    if (root.right != null) {
      inOrder(root.right);
    }
  }

  public void postOrder(Node root) {
    if (root.left != null) {
      postOrder(root.left);
    }

    if (root.right != null) {
      postOrder(root.right);
    }

    System.out.print(root.data);
  }
}