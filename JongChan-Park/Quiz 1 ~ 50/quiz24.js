// JadenCase 문자열 만들기
// https://programmers.co.kr/learn/courses/30/lessons/12951

function solution(s) {
  s = s.toLowerCase();
  let answer = s
    .split(" ")
    .map((ele) => {
      let splitEle = ele.split("");

      if (splitEle[0] != null) {
        splitEle[0] = splitEle[0].toUpperCase();
      }

      return splitEle.join("");
    })
    .join(" ");

  return answer;
}
