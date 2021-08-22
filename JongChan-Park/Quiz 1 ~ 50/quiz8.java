import java.util.*;

class Solution {
    public int solution(int[][] board, int[] moves) {
        Stack<Integer> stack = new Stack<>(); // List로 타입 잡으면 add(), push()
        
        int answer = 0;
        int movesLength = moves.length;
        int column = board[board.length - 1].length;
        
        for(int i = 0; i < movesLength; i++) {            
            for(int j = 0; j < column; j++) {
                if(board[j][moves[i] - 1] != 0) {
                    if(stack.size() == 0) {
                        stack.push(board[j][moves[i] - 1]);
                        board[j][moves[i] - 1] = 0;
                        break;
                    }
                    
                    if(stack.peek() == board[j][moves[i] - 1]) {
                        stack.pop();
                        answer += 2;
                    } else {
                        stack.push(board[j][moves[i] - 1]);
                    }
                    
                    board[j][moves[i] - 1] = 0;
                    break;
                }
            }
        }
        
      
        return answer;
    }
}