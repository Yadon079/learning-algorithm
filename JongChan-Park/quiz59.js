function solution(n) {
  let strN = n.toString();
  let result = [];

  for (let i = 0; i < strN.length; i++) {
    result.push(nn[i]);
  }

  return parseInt(result.sort((a, b) => b - a).join(""));
}
