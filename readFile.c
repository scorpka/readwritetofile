#include<stdio.h>
int main(void) {
FILE *fp;
 char a[20] = " ";
 char b[20] = " ";


  fp = fopen("readFile.txt","r");
  fscanf(fp,"%s%s",&a,&b); 
  fclose(fp);
 
  fp = fopen("readFile.txt","w");
   fprintf(fp,"%s %s",&b,&a);
  fclose(fp); 
   printf("%s%s",a,b); 
}
