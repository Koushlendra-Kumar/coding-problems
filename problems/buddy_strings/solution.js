/**
 * @param {string} s
 * @param {string} goal
 * @return {boolean}
 */
var buddyStrings = function(s, goal) {
    if(s.length !== goal.length) return false;
    
    let uniqueChar = [...new Set(s)];
    if(s == goal && uniqueChar.length == s.length){
        return false
    } else if(s == goal && uniqueChar.length != s.length){
        return true
    }
    
    let indices = [];
    for(let i = 0; i< s.length; i++){
        if(s[i] !== goal[i]){
            indices.push(i);
        }
    }
    if(indices.length == 2 && 
      s[indices[0]] == goal[indices[1]] &&
      s[indices[1]] == goal[indices[0]]
      ){
        return true;
    }else {
        return false;
    }
};