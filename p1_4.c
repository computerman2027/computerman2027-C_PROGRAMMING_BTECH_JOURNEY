#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int x1,y1,x2,y2;
    float distance, slope;
    printf("Enter coordinates of first point");
    scanf("%d%d",&x1,&y1);
    printf("Enter coordinates of second point");
    scanf("%d%d",&x2,&y2);
    distance=sqrt(pow(x1-x2,2)+pow(y2-y1,2));
    slope=(((float)(y2-y1))/((float)(x2-x1)));
    printf("Distance = %f and slope = %f",distance,slope);
    return 0;
}