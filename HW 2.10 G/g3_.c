#include<stdio.h>

#define SIZE 10

void print_arr(char* a, int l);

int main()
{
 int length = 0;
 char aRes[1000];
 char c;
 //~ int count = 0;
 FILE* in = fopen("input.txt", "r");
 FILE* out = fopen("output.txt", "w");

 

 for(int i = 0; (c=getc(in)) != EOF; ++i)
 {
  if(c == '\n') continue;
  aRes[i] = c;
  length++;
 }
 
 
 
 for(int i = 0; i < length-1; ++i)
 {
  if(aRes[length-1] == aRes[i]) fprintf(out, "%d ", i);
 }
 
 //~ print_arr(aRes, length);
 
 fclose(in);
 fclose(out);
}

void print_arr(char* a, int l)
{
 for(int i = 0; i < l; ++i)
 {
  printf("%c", *(a+i));
 }
}
