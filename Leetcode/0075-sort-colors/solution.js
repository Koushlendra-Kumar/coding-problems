/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    for(let i = 0; i< nums.length-1; i++){
        if(nums[i+1] < nums[i] ){
            for(let j = i; j>= 0; j--){
                if(nums[j+1] < nums[j]){
                    let temp = nums[j+1];
                    nums[j+1] = nums[j]
                    nums[j] = temp;
                }
            }
        }
    }
};
