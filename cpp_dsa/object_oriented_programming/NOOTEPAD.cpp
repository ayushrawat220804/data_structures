#include<stdio.h>
#include<conio.h>

main () {

FILE *fp;
char in, fn [35], cho;

printf("\n\t\t\t\t\tNOTEPAD\n");
printf("\n\t\t\tEnter File Name: ");
gets (fn);
printf("\n\nWhat Can You do write:w/read:r/add:a : ");
scanf("%c",&cho);

if(cho=='r')
{
fp=fopen(fn, "r");

printf("\n\n\n\t\t\tREAD MODE\n\n");

while((in=getc (fp))!=EOF)
{
printf("%c",in);
}

fclose(fp);
}
else if (cho=='w')
{
	fp=fopen(fn, "W");

printf("\n\n\n\t\t\tWRITE MODE\n");
printf("\n\n\t\t\t For Save File Press Ctrl+Z");

while((in=getchar()) !=EOF)
{
putc(in, fp);
}

fclose(fp);
}
else if (cho=='a')
{
	fp=fopen(fn, "a");

printf("\n\n\n\t\t\tADD MODE\n");
printf("\n\n\t\t\t For Save File Press Ctrl+Z, now you can type your content from here: \n");

while((in=getchar()) !=EOF)
{
putc(in, fp);
}

fclose(fp);
}

getch();

return 0;

}
