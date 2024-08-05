function kthDistinct(arr: string[], k: number): string {
    let count = {};
    for(let i = 0; i< arr.length; i++){
        count[arr[i]] = count[arr[i]] + 1 || 1;
    }
    
    for(let key in count) {
        if(count[key] == 1 ){
            if(k > 0) k--;
            if(k==0) return key;
        }
    }
    return "";
};
