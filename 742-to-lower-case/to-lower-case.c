char* toLowerCase(char* s){
for(int i=0; s[i]!='\0';i++){
if(s[i]>='A'&&s[i]<='Z'){
    s[i]+=32;
}
}
return s;
}
/*or just:
for(int i=0; s[i]!='\0';i++){
s[i]=tolower.(s[i]);

}*/

