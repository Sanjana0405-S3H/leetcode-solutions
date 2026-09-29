bool checkPerfectNumber(int num) {
    int x;
    int sum =1;
    if(num<=1) return false;
   for(int i=2;i<=num/2;i++){
    if(num%i==0){
        sum=sum+i;
        
    }

   }
   return sum==num;
    
    
}