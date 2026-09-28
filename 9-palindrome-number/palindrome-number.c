bool isPalindrome(int x) {
    long int reversednum =0;
    int original = x;
    if(x<0){
        return false;
    }
    while(x>0){
        int remainder = x%10;
        reversednum = reversednum*10 + remainder;
        x/=10;
    }
    return original==reversednum;
}