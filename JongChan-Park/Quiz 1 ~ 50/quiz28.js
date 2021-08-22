// 짝지어 제거하기
// https://programmers.co.kr/learn/courses/30/lessons/12973

function solution(s) {
  let fail = [];

  for (let i = 0; i < s.length; i++) {
    if (!fail.length) {
      fail.push(s[i]);
    } else {
      if (fail[fail.length - 1] === s[i]) {
        fail.pop();
      } else {
        fail.push(s[i]);
      }
    }
  }

  if (fail.length) {
    return 0;
  }

  return 1;
}
