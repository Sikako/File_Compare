#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main(){
 char filename[30];
 char str[501];
 char c;
 FILE *fp;
 int count = 0;
 
 printf("Enter file name: ");
 gets(filename);
 fp = processFile(filename, "w");
 printf("Enter a string: ");
 while((c = getchar()) != '\n'){
  fputc(c, fp);
  if(c>='A' && c<='z') count+=1;
 }
 closeFile(fp, filename);
 printf("total: %d words\n", count);
 return 0;
}
