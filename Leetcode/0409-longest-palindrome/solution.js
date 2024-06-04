/**
 * @param {string} s
 * @return {number}
 */
var longestPalindrome = function(s) {
    let wordCount = {};
    for(let i = 0; i< s.length; i++){
        wordCount[s[i]] = wordCount[s[i]] + 1 || 1;
    }
    let length = 0;
    let oddFound = false;
    for(let num of Object.values(wordCount)){
        if(num % 2 === 0){
            length += num
        } else {
            length += num -1;
            oddFound = true
        }
    }
    return oddFound ? length + 1 : length;
};
