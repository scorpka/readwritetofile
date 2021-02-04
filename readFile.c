#include<stdio.h>
int main(void) {
FILE *fp;
 char a;
 char b;
 char cac[90] = " ";
   int n = 0;
  fp = fopen("readFile.txt","r");
  for (int j=0; j<20; j++){
    fscanf(fp,"%c%c",&a,&b);
   if (a == EOF || b == EOF) {break;};
   cac[n]= a; n++; cac[n] = b; n++;
   
  }
  fclose(fp);
 
  fp = fopen("readFile.txt","w");
   fprintf(fp,"%s",cac);
  fclose(fp); 
   printf("%s",cac); 
}
