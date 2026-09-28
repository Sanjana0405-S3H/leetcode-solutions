int hammingWeight(int n) {
    
    int count =0;
    while(n>0){
        if((n&1)==1){
            count++;
            /*10001 &
              00001 gives you 00001 so count incremented*/
        }
        n>>=1;
    }
 
    return count;
}