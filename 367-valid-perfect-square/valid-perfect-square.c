bool isPerfectSquare(int num) {
 
 //also: for(long long i=1; i<=num; i++){   
 for(long long i=1; i*i<=num;i++){
 
 
    if(i*i==num){

       return true;
      }
 }
 return false;
}