#include<stdio.h>
void towerOfHanoi(int n,int fromtower,int totower, int extratower);
int main()
{
    int n;
    printf("ENTER NUMBER OF PLATES : ");
    scanf("%d",&n);
    towerOfHanoi(n,1,3,2);
    return 0;
}
void towerOfHanoi(int n,int fromtower,int totower, int extratower)
{
    if(n==1)
    {
        printf("Move plate 1 from %d to %d \n",fromtower,totower);
        return;
    }
    towerOfHanoi(n-1,fromtower,extratower,totower);
    printf("Move plate %d from %d to %d \n",n,fromtower,totower);
    towerOfHanoi(n-1,extratower,totower,fromtower);
}