#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main(){
 char filename[30] = "NYCUcs.txt";
 char stringData[501];
 int phoneNumber;
 FILE *fp;
 fp = processFile(filename, "r");
 fgets(stringData, 500, fp);
 fscanf(fp, "%d", &phoneNumber);
 printf("%s%d\n", stringData, phoneNumber);
 closeFile(fp, filename);
 return 0;
}
