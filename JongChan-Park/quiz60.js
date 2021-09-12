function solution(d, budget) {
  let cnt = 0;
  let sum = 0;

  d.sort();

  for (let i = 0; i < d.length; i++) {
    cnt++;
    sum += d[i];

    if (sum > budget) {
      cnt--;
      break;
    }
  }

  return cnt;
}
