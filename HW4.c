#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main(){
 char filename1[20] = "ex32_1.txt";
 char filename2[20] = "ex32_2.txt";
 char filename3[20] = "ans32.txt";
 FILE *fp1, *fp2, *fp3;
 int  line;
 int  column;
 char char1, char2;

 printf("Start to compare %s and %s\n", filename1, filename2);
 printf("--------------------------------------------\n");


 fp1 = processFile( filename1, "r");
 fp2 = processFile( filename2, "r");
 fp3 = processFile( filename3, "w");

 char1 = fgetc(fp1);
 char2 = fgetc(fp2);

 line = 1;
 while( char1 != '\n'){
  char1 = fgetc(fp1);
  printf("%d", line);
 }

 line += 1;

 printf("\n %d\n", line);


 closeFile(fp1, filename1);
 closeFile(fp2, filename2);
 closeFile(fp3, filename3);


 return 0;

}

