/**
 * @param {number[]} nums
 * @return {string[]}
 */
var summaryRanges = function(nums) {
    let result = [];
    let temp = []
    for(let i = 0; i<nums.length; i++){
        temp.push(nums[i])
        if(nums[i+1] ==nums[i]+1){
            temp.push(nums[i+1])
        }else {
            if(temp.length > 1){
                result.push(`${temp[0]}->${temp[temp.length-1]}`)
            }else {
                result.push(`${temp[0]}`)
            }
            temp  = [];
        }
    }
    return result;
};