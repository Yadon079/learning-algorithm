function solution(citations) {
  var answer = 0;
  let sorted = citations.sort((a, b) => b - a);

  for (let ele in sorted) {
    if (sorted[ele] > ele) {
      answer++;
    }
  }

  return answer;
}