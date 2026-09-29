bool isPowerOfTwo(int n) {
    int x; 
    if(n<=0){
        return false;
    }
    while(n%2==0){
        n=n/2;
    }
     return n==1;

}
//also works if u write just: return (n>0)&&(n&(n-1)==0);