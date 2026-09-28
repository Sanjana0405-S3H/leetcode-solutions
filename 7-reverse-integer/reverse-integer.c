int reverse(int x){
long long original =x;
long long reversed =0;

while(x!=0){
   int d = x%10;
    reversed = reversed*10+d;
    x=x/10;
}
if(reversed<=-2147483648||reversed>=2147483648){
    return 0;
}
return reversed;
}
/*you can also use:
if(rev>INT_MAX||rev<INT_MIN){
return = 0;
} 
and also return (int)reversed;
*/
