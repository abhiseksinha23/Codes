#include<stdio.h> 
#include<math.h> 
  
// Using macros to convert degree to radian 
// and call sin() and cos() as these functions 
// take input in radians 
#define SIN(x) sin(x * 3.141592653589/180) 
#define COS(x) cos(x * 3.141592653589/180)   
  
// To rotate an object 
void rotate(float a[][2], int n, int x_pivot,  
                      int y_pivot, int angle) 
{ 
    int i = 0; 
    while (i < n) 
    { 
        // Shifting the pivot point to the origin 
        // and the given points accordingly 
        int x_shifted = a[i][0] - x_pivot; 
        int y_shifted = a[i][1] - y_pivot; 
  
        // Calculating the rotated point co-ordinates 
        // and shifting it back 
        a[i][0] = x_pivot + (x_shifted*COS(angle)  
                          - y_shifted*SIN(angle)); 
        a[i][1] = y_pivot + (x_shifted*SIN(angle)  
                          + y_shifted*COS(angle)); 
        i++; 
    } 

     line(a[0][0],a[0][1],a[1][0],a[1][1]);
     line(a[0][0],a[0][1],a[3][0],a[3][1]);
     line(a[2][0],a[2][1],a[1][0],a[1][1]);

     line(a[2][0],a[2][1],a[3][0],a[3][1]);
} 
  
// Driver Code 
int main() 
{ 

    // 1st Example 
    // The following figure is to be  
    // rotated about (0, 0) by 90 degrees 
    int gd, gm,size1; 
  float points_list1[][2] = {{100, 100}, {150, 200}, 
                                {200, 200}, {200, 150}};
    detectgraph(&gd, &gm); 
    initgraph(&gd, &gm,"C:\\TURBOC3\\bgi ");  
    size1 = 4;//No. of vertices 
  
    // Vertex co-ordinates must be in order 
  
     line(points_list1[0][0],points_list1[0][1],points_list1[1][0],points_list1[1][1]);
     line(points_list1[0][0],points_list1[0][1],points_list1[3][0],points_list1[3][1]);
     line(points_list1[2][0],points_list1[2][1],points_list1[1][0],points_list1[1][1]);

     line(points_list1[2][0],points_list1[2][1],points_list1[3][0],points_list1[3][1]);
      
    rotate(points_list1, size1, 0, 0, 90); 
      
    // 2nd Example 
    // The following figure is to be  
    // rotated about (50, -50) by -45 degrees 
    /*int size2 = 3;//No. of vertices 
    float points_list2[][2] = {{100, 100}, {100, 200}, 
                                {200, 200}};     
    rotate(points_list2, size2, 50, -50, -45);*/
    getch();
    return 0; 
} 