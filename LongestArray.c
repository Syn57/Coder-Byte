#include <stdio.h> 
#include <string.h>
#include <ctype.h>
char nes[99];
char str1[99],str2[99];
int i, j, pj , first, last, ind1=0, ind2=0;

int main(void) { 
  // keep this function call here
  printf("Hello world");
  strcpy(nes,"123456789 98765432");
  printf("%s, %d",nes,ind1);
  pj=strlen(nes);
  for(i=0;i<pj;i++){

    if(isalpha(nes[i]) || isdigit(nes[i]))
      ind1++;
    if(!isalpha(nes[i]) && !isdigit(nes[i])){
        if(ind1 > ind2){
          ind2=ind1;
          first=i-ind2;
          last=i-1;
          ind1=0;
        }
    	ind1=0;
    }
    else if (i==(pj-1)){
      if(ind1 > ind2){
          ind2=ind1;
          first=i-ind2+1;
          last=i-1+1;
          ind1=0;
        }
    }
  }
  printf("\n");
  for (i=first; i<=last; i++){
  	printf("%c",nes[i]);
  }
  printf("\n%d %d", first,last);
  return 0;  
}
