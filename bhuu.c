#dictionary
#inlcude<stdio.h>
#inlcude<stdlib.h>
void main()
{
 char ch=65;
 int i;
 for(i=0;i<=26;i++)
 {
 printf("%d %c",ch,ch);
 ch++;
 search();
 }
 void search(void)
 {
  int a;
  char d;
  printf(" enter the elemnent to be searched");
  scanf("%d ,&d);
 }
}
