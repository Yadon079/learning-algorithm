function price(num) {
  if (num <= 1) {
    return 6;
  } else if (num === 2) {
    return 5;
  } else if (num === 3) {
    return 4;
  } else if (num === 4) {
    return 3;
  } else if (num === 5) {
    return 2;
  } else {
    return 1;
  }
}

function solution(lottos, win_nums) {
  let cnt = 0;
  let zeroCnt = 0;
  let result = [];

  for (let i = 0; i < lottos.length; i++) {
    if (lottos[i] === 0) {
      zeroCnt++;
      continue;
    }

    if (win_nums.includes(lottos[i])) {
      cnt++;
    }
  }

  return [price(cnt + zeroCnt), price(cnt)];
}
