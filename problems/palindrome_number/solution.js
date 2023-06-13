/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    x = x.toString()
    if(x == x.split('').reverse('').join('')){
        return true
    } else {
        return false
    }
};