#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void ffill(int,int,int,int,int);
void convex(int,int);
void concave(int,int);
void main()
{
    int gd=DETECT,gm,ch,x,y;
    initgraph(&gd,&gm,"C:\\tc\\bgi");
    cleardevice();
    printf("1.Convex Polygon\n2.Concave Polygon\nEnter Choice: ");
    scanf("%d",&ch);
    x=(100+152)/2;
    y=(100+152)/2;
    switch(ch)
    {
        case 1: convex(x,y);
                break;
        case 2: concave(x,y);
                break;
        default: printf("Wrong choice entered");
                 break;
       }
        getch();
        closegraph();
        restorecrtmode();
}
void convex(int x,int y)
{
    line(100,100,150,100);
    line(150,100,150,150);
    line(150,150,100,150);
    line(100,150,100,100);
    ffill(x,y,0,12,1);
}
void concave(int x,int y)
{
    line(100,100,125,125);
    line(125,125,150,100);
    line(150,100,150,150);
    line(150,150,100,150);
    line(100,150,100,100);
    ffill(x,y,0,12,0);
}
void ffill(int x,int y,int ocolor,int fcolor,int n)
{
    int c=getpixel(x,y);
    if(n==1)
    {
        if(c==ocolor)
        {
            delay(2);
            putpixel(x,y,fcolor);
            ffill(x+1,y,ocolor,fcolor,0);
            ffill(x-1,y,ocolor,fcolor,0);
            ffill(x,y+1,ocolor,fcolor,0);
            ffill(x,y-1,ocolor,fcolor,0);
        }
    }
    else
    {
        if(c==ocolor)
        {
            delay(2);
            putpixel(x,y,fcolor);
            ffill(x+1,y,ocolor,fcolor,1);
            ffill(x-1,y,ocolor,fcolor,1);
            ffill(x,y+1,ocolor,fcolor,1);
            ffill(x,y-1,ocolor,fcolor,1);
            ffill(x+1,y+1,ocolor,fcolor,1);
            ffill(x-1,y+1,ocolor,fcolor,1);
            ffill(x+1,y-1,ocolor,fcolor,1);
            ffill(x-1,y-1,ocolor,fcolor,1);
        }
    }
}