#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main(){
 char filename[30] = "NYCU.txt";
 char str[501];
 int numberWords = 0;
 char c;
 FILE *fp;
 fp = processFile(filename, "r");
 c = fgetc(fp);
 while(c != EOF){
  while( ((c>=0)&&(c<'A')) || ((c>'Z')&&(c<'a')) || ((c>'z')&&(c<256))){
   c = fgetc(fp);
  }
  if(((c>='a')&&(c<='z')) || ((c>='A')&&(c<='Z'))){
   numberWords++;
   while(((c>='a')&&(c<='z')) || ((c>='A')&&(c<='Z'))){
    c = fgetc(fp);
   }
  }
 }
 printf("Number of words in this file:%d\n", numberWords);
 closeFile(fp, filename);
 return 0;
}
