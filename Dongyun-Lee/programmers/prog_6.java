public class prog_6 {

    public int[] solution(int[] lottos, int[] win_nums) {
        int[] answer = {0,0};
        int count = 0, zero_count = 0;

        for (int i = 0; i < 6; i++) {

            if (lottos[i] == 0) {
                zero_count++;
                continue;
            }

            for (int j = 0; j < 6; j++) {

                if (lottos[i] == win_nums[j]) {
                    count++;

                }
            }
        }
        for (int i = 1; i>=0 ; i--) {


            switch (count) {

                case 6: answer[i] = 1; break;
                case 5: answer[i] = 2; break;
                case 4: answer[i] = 3; break;
                case 3: answer[i] = 4; break;
                case 2: answer[i] = 5; break;
                default: answer[i] = 6; break;

            }
            count += zero_count;
        }


        return answer;
    }
}
