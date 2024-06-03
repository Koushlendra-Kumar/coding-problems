/**
 * @param {string} s
 * @param {string} t
 * @return {number}
 */
var appendCharacters = function(s, t) {
    let sPointer =0;
    let tPointer = 0;
    while(sPointer < s.length){
        if(s[sPointer]== t[tPointer]){
            tPointer++;
            sPointer++;
        } else if(s[sPointer] !== t[tPointer]){
            sPointer++;
        }
    }
    if(t.length == t.pointer){
        return 0
    }else {
        return t.length - tPointer;
    }
};
