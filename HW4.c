#include <stdio.h>
#include <stdlib.h>
#include "function.h"

/*----------------------------------------------------------------------------------------------------------------------
Subject: System Engineering
Subscrition: It's a program that can compare two text files and store which line and which column in the other file
Author: Sikako


----------------------------------------------------------------------------------------------------------------------*/



int main(){
 char filename1[20] = "ex32_1.txt";					// enter what text file you wanna compare
 char filename2[20] = "ex32_2.txt";
 char filename3[20] = "ans32.txt";					// enter what text file you wanna store 
 FILE *fp1, *fp2, *fp3;
 int  line;
 int  column;
 char char1, char2;

 printf("Start to compare %s and %s\n", filename1, filename2);
 printf("--------------------------------------------\n");

// open files
 fp1 = processFile( filename1, "r");
 fp2 = processFile( filename2, "r");
 fp3 = processFile( filename3, "w");

 char1 = fgetc(fp1);
 char2 = fgetc(fp2);

 line = 1;
 fprintf(fp3, "Line %d\n", line);
 while( char1 != EOF && char2 != EOF){
  if(char1 == '\n' && char2 == '\n'){
   line += 1;								// new line
   fprintf(fp3, "Line %d\n", line);
  } 
  char1 = fgetc(fp1);
  char2 = fgetc(fp2);
 }


 closeFile(fp1, filename1);
 closeFile(fp2, filename2);
 closeFile(fp3, filename3);


 return 0;

}

