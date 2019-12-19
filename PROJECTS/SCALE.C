#include<stdio.h>
#include<graphics.h>
#include<math.h>
int graDriver=DETECT,graMode;
int n,xs[100],ys[100],i;
float sfx,sfy;

void DrawFn()
{
for(i=0;i<n;i++)
 line(xs[i],ys[i],xs[(i+1)%n],ys[(i+1)%n]);
}

void scale()
{
for(i=0;i<n;i++)
 {
 xs[i]=xs[0]+(int)((float)(xs[i]-xs[0])*sfx);
 ys[i]=ys[0]+(int)((float)(ys[i]-ys[0])*sfy);
 }
}

void main()
{
printf("Enter number of sides: ");
scanf("%d",&n);
printf("Enter co-rdinates: x,y for each point ");
for(i=0;i<n;i++)
 scanf("%d%d",&xs[i],&ys[i]);
printf("Enter scale factors: (xs,ys) ");
scanf("%f%f",&sfx,&sfy);
initgraph(&graDriver,&graMode,"C:\\TURBOC3\\BGI\\");
setcolor(RED);
DrawFn();//original
scale();//scaling
setcolor(BLUE);
DrawFn();
getch();
}