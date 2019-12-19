#include <graphics.h>  
#include <stdlib.h>  
#include <math.h>  
#include <stdio.h>  
#include <conio.h>  
#include <iostream.h>  
  
class bresen  
{  
    float x,y,a, b,r,p,h,k,p1,p2;  
    public:  
    void get ();  
    void cal ();  
};  
    void main ()  
    {  
    bresen b;  
    b.get ();  
    b.cal ();  
    getch ();  
   }  
    void bresen :: get ()  
   {  
    cout<<"\n ENTER CENTER OF ELLIPSE";  
    cout<<"\n ENTER (h, k) ";   
           cin>>h>>k;  
    cout<<"\n ENTER LENGTH OF MAJOR AND MINOR AXIS";  
    cin>>a>>b;  
  }  
void bresen ::cal ()  
{  
    /* request auto detection */  
    int gdriver = DETECT,gmode, errorcode;  
    int midx, midy, i;  
    /* initialize graphics and local variables */  
    initgraph (&gdriver, &gmode, " ");  
    /* read result of initialization */  
    errorcode = graphresult ();  
    if (errorcode ! = grOK)    /*an error occurred */  
    {  
        printf("Graphics error: %s \n", grapherrormsg (errorcode);  
        printf ("Press any key to halt:");  
        getch ();  
        exit (1); /* terminate with an error code */  
    }  
    x=0;  
    y=b;  
    // REGION 1  
    p1 =(b * b)-(a * a * b) + (a * a)/4);  
    {  
        putpixel (x+h, y+k, RED);  
        putpixel (-x+h, -y+k, RED);  
        putpixel (x+h, -y+k, RED);  
        putpixel (-x+h, y+k, RED);  
        if (p1 < 0)  
            p1 += ((2 *b * b) *(x+1))-((2 * a * a)*(y-1)) + (b * b);  
        else  
        {  
            p1+= ((2 *b * b) *(x+1))-((2 * a * a)*(y-1))-(b * b);  
            y--;          
        }  
        x++;  
    }  
    //REGION 2  
    p2 =((b * b)* (x + 0.5))+((a * a)*(y-1) * (y-1))-(a * a *b * b);  
    while (y>=0)  
    {  
        If (p2>0)  
        p2=p2-((2 * a * a)* (y-1))+(a *a);  
        else  
        {  
        p2=p2-((2 * a * a)* (y-1))+((2 * b * b)*(x+1))+(a * a);  
        x++;  
        }  
        y--;  
        putpixel (x+h, y+k, RED);  
        putpixel (-x+h, -y+k, RED);  
        putpixel (x+h, -y+k, RED);  
        putpixel (-x+h, y+k, RED);  
    }  
    getch();  

return 0;
}  