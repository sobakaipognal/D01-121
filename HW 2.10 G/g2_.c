#include<stdio.h>

#define SIZE 10

int main(){
 int num = 0;
 char aRes[26];
 int count = 0;
 FILE* in = fopen("input.txt", "r");
 FILE* out = fopen("output.txt", "w");

 fscanf(in, "%d", &num);
 //~ printf("%d\n", num);
 
 for(int i = 0; i < num; i += 2)
 {
  aRes[i] = 65+count++; 
 }
 
 count=0;
 
 for(int i = 1; i < num; i += 2)
 {
  if(count > 6) count = 0;
  aRes[i] = 50 + count;
  count += 2; 
 }
 
 //~ for(int i = 0; i < num; i++)
 //~ {
  //~ printf("%c ", aRes[i]); 
 //~ }
 
 fprintf(out, "%s", aRes);
 fclose(in);
 fclose(out);
}
