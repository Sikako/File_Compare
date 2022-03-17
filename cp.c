#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main(){
 char filename[2][30];
 char stringData[501];
 FILE *fp1, *fp2;
 printf("Enter the first file name:");
 scanf("%s", filename[0]);
 printf("Enter the second file name:");
 scanf("%s", filename[1]);
 fp1 = processFile(filename[0], "r");
 fp2 = processFile(filename[1], "w");
 fscanf(fp1, "%[^\n]s", stringData);
 fprintf(fp2, "%s", stringData);
 closeFile(fp1, filename[0]);
 closeFile(fp2, filename[1]);
 return 0;
}

