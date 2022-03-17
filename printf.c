#include <stdio.h>
#include <stdlib.h>

int main(){
 FILE *out_file = fopen("print", "w");

 // test for files not existing.
 if(out_file == NULL){
  printf("Error! Could not open file\n");
  exit(-1); //must include stdlib.h
 }

 fprintf(out_file,"%c",'a');
 fclose(out_file);
 return 0;
}
