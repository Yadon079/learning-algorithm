// 숫자 문자열과 영단어
// https://programmers.co.kr/learn/courses/30/lessons/81301
function solution(s) {
  let engArr = [
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
  ];

  let engObj = {
    zero: "0",
    one: "1",
    two: "2",
    three: "3",
    four: "4",
    five: "5",
    six: "6",
    seven: "7",
    eight: "8",
    nine: "9",
  };
  let answer = 0;
  let sLen = s.length;
  let checkNumString = "";

  for (let i = 0; i < sLen; i++) {
    if (s.charCodeAt(i) >= 97 && s.charCodeAt(i) <= 122) {
      checkNumString += s[i];

      let isFound = engArr.find((ele) => ele === checkNumString);

      // 배열에 해당 문자열이 존재한다면 객체에 그 문자열의 값을 가져오고 초기화시킨다
      if (isFound) {
        answer += engObj[isFound];

        checkNumString = "";
      }
    } else {
      answer += s[i];
    }
  }

  return Number(answer);
}
