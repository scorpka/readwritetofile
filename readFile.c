#include<stdio.h>
int main(void) {
FILE *fp;
 char a[50] = " ";
 char b[50] = " ";


  fp = fopen("readFile.txt","r");
 // for (int y = 0; y < 20; y++) {
  fscanf(fp,"%s%s",&a,&b); 
  fclose(fp);
//};
   printf("%s%s",a,b); 
}
