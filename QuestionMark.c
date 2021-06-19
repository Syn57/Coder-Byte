#include <stdio.h> 
#include <string.h>
#include <ctype.h>

void QuestionsMarks(char  str[99]) {
  int i,j,ind=0;
  char str2[99];
  strcpy(str2,str);
  // code goes here  
for(i=0;i<strlen(str);i++){
  if(isdigit(str[i])){
    for(j=i+1;j<strlen(str);j++){
      if(str[j] == '?'){
        ind++;
      }
      if (isdigit(str[j])){
        break;
      }
    }
  }
}
if(ind<3 || ind >10) printf("%s", "false");
}

int main(void) { 
   char str1[99] = {"9???1???9??1???9"};
  // keep this function call here
  QuestionsMarks(str1);
  return 0;
    
}