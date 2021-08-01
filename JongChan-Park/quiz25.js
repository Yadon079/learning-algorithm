// 신규 아이디 추천
// https://programmers.co.kr/learn/courses/30/lessons/72410

function solution(new_id) {
  // 1단계 : 소문자 치환
  new_id = new_id.toLowerCase();

  // 2단계 : 알파벳, 소문자, 숫자, 빼기(-), 밑줄(_), 마침표(.) 제외 제거
  new_id = new_id.replace(/[^\w\.\-]/g, "");

  // 3단계 : 온점 2개 이상 온점 하나로 치환
  new_id = new_id.replace(/[\.]{2,}/g, ".");

  // 4단계 처음과 끝에 온점이 있다면 제거
  new_id = new_id.replace(/^\./, "").replace(/\.$/, "");

  // 5단계 빈 문자열 === new_id = 'a';
  if (!new_id) {
    new_id = "a";
  }

  // 6단계 :  길이가 16 이상이라면 1 ~ 15자리까지만 가져오고
  // 끝에 온점이 있다면 제거
  if (new_id.length >= 16) {
    new_id = new_id.slice(0, 15);

    new_id = new_id.replace(/\.$/, "");
  }

  // 7단계 : new_id <= 2, 끝에 위치한 글자를 3글자가 될때까지 추가
  if (new_id.length <= 2) {
    new_id = new_id.padEnd(3, new_id[new_id.length - 1]);
  }

  return new_id;
}
