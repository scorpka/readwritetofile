#include<stdio.h>
  int readFile(char a,char b,FILE *fp,char *cac) {
   int n = 0;
   //extern char cac[90];
   fp = fopen("readFile.txt","r");

   for (int j=0; j<20; j++){
   fscanf(fp,"%c%c",&a,&b);
   if (a == EOF || b == EOF) {break;};
   if  (a == ' ') { a= '\t';};
   if  (b == ' ') { b= '\t';};
   cac[n]= a; n++; cac[n] = b; n++;
   }

   fclose(fp);
}

int writeFile(FILE *fp, char *cac) {
   fp = fopen("readFile.txt","w");
   fprintf(fp,"%s",cac);
   fclose(fp); 
}

int main(void) {
 FILE *fp;
 char a;
 char b;
 char cac[90] = " ";


 readFile(a,b,fp,cac); 
 writeFile(fp,cac);

 printf("%s",cac); 
}
