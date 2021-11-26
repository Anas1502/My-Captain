#include <stdio.h>
#include <stdlib.h>
int main()
{
      FILE *fp;
      char ch;
      int i,pos;
      fp=fopen("file.txt","r");
      if(fp==NULL)
      {
            printf("File Does not Exist");
      }
      fseek(fp,0,SEEK_END);
      pos=ftell(fp);
      i=0;
      while(i<pos)
       {
            i++;
            fseek(fp,-i,SEEK_END);
            ch=fgetc(fp);
            printf("%c",ch);
      }
      return 0;
}
