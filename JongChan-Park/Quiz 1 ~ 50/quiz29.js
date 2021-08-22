// 기능개발
// https://programmers.co.kr/learn/courses/30/lessons/42586?language=javascript

function solution(progresses, speeds) {
  let answer = [];
  let comDay = 0;
  let prevComDay = 0;

  while (progresses.length) {
    let target = progresses.shift();
    let speed = speeds.shift();

    while (target <= 100) {
      target += speed;
      comDay++;

      // progress 완료
      if (target >= 100) {
        if (!answer.length) {
          answer.push(1);
          prevComDay = comDay;
        } else {
          console.log(`${prevComDay} --- ${comDay}`);
          if (prevComDay >= comDay) {
            answer[answer.length - 1]++;
          } else {
            // 이전 완료한 날이 현재 보다 작다면 새로운 날을 지정한다
            prevComDay = comDay;

            answer.push(1);
          }
        }

        comDay = 0;
        break;
      }
    }
  }

  return answer;
}
