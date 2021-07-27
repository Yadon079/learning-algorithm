// [1차] 비밀지도
// https://programmers.co.kr/learn/courses/30/lessons/17681

function solution(n, arr1, arr2) {
  let answer = [];

  for (let i = 0; i < n; i++) {
    let col = "";
    let a = arr1[i].toString(2);
    let b = arr2[i].toString(2);

    let dec = (Number(a) + Number(b)).toString();

    if (dec.length !== n) {
      dec = dec.padStart(n, "0");
    }

    for (let j = 0; j < dec.length; j++) {
      dec[j] !== "0" ? (col += "#") : (col += " ");
    }

    answer.push(col);
  }

  return answer;
}
