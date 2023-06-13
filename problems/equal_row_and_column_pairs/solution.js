/**
 * @param {number[][]} grid
 * @return {number}
 */
var equalPairs = function(grid) {
    const n = grid.length;
    let ans = 0;

    for (let i = 0; i < n; ++i)
      for (let j = 0; j < n; ++j) {
        let k = 0;
        for (; k < n; ++k)
          if (grid[i][k] != grid[k][j])
            break;
        if (k == n)  // R[i] == C[j]
          ++ans;
      }

    return ans;
};