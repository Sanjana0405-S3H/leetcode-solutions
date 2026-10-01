/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool* ans=malloc(candiesSize*sizeof(bool));
    int max=candies[0];
    *returnSize=candiesSize;
    for(int i=1; i<candiesSize; i++){

        if(candies[i]>max){
            max=candies[i];
        }
    }
    for(int i=0;i<candiesSize;i++){
if(candies[i]+extraCandies>=max){
    ans[i]=true;
}
else{
    ans[i]=false;
}
}
return ans;

}