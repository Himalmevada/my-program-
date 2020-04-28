#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp,*fg;
    char ch;
    int i,n;
    fp=fopen("jivan.txt","r");
    fg=fopen("ravan.txt","w");
    if(fp==NULL)
    {
        printf("Error in file opening");
        exit(0);
    }
    fseek(fp,2,SEEK_END);
    n=ftell(fp);
    i=0;
    while(i<n)
    {
        i++;
        fseek(fp,-i,SEEK_END);
        ch=fgetc(fp);
        printf("%c",ch);
        putc(ch,fg);
    }
    fclose(fp);
    fclose(fg);
    getch();
}
