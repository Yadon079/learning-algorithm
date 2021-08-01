// 11. Container With Most Water
// https://leetcode.com/problems/container-with-most-water/

// O(n^2) -- Fail

// var maxArea = function (height) {
//   let mostWater = 0;

//   // (i + j) * Math.min(height[i], height[j]);
//   for (let i = 0; i < height.length - 1; i++) {
//     let left = height[i];

//     for (let j = i + 1; j < height.length; j++) {
//       let right = height[j];

//       let result = (j - i) * Math.min(height[i], height[j]);

//       if (mostWater < result) {
//         mostWater = result;
//       }
//     }
//   }

//   return mostWater;
// };

// Two Pointer O(N)
var maxArea = function (height) {
  let water = 0;
  let left = 0;
  let right = height.length - 1;

  while (left < right) {
    let width = right - left;

    if (height[left] > height[right]) {
      water = Math.max(water, width * height[right]);
      right--;
    } else {
      water = Math.max(water, width * height[left]);
      left++;
    }
  }

  return water;
};
