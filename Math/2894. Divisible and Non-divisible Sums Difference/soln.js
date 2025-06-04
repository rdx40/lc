/**
 * @param {number} n
 * @param {number} m
 * @return {number}
 */
var differenceOfSums = function (n, m) {
  let totSum = (n * (n + 1)) / 2;
  let divSum = sOD(n, m);
  let nonSum = totSum - divSum;
  return nonSum - divSum;
};

function sOD(n, m) {
  let cnt = Math.floor(n / m);
  return (cnt * (cnt + 1) * m) / 2;
}
