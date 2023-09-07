/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function(arr, size) {
    
    let result = [];
    while(arr.length){
        let temp = arr.splice(0, size);
        result.push(temp);
    }
    return result;
};
