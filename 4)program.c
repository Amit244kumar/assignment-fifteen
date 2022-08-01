#include<stdio.h>
int main()
{
    int s,n;
    char w;
    printf("Enter the size of array:");
    scanf("%d",&s);
    int arr[s];
    printf("Enter the element of array:");
    for(int i=0;i<s;i++)
        scanf("%d",&arr[i]);
    printf("Enter the number of rotation:");
    scanf("%d",&n);
    printf("Enter l to left rotation r to right rotation:");
    fflush(stdin);
    scanf("%c",&w);
    rotation(arr,s,n,w);
    printf("After rotation of array");
    for(int i=0;i<s;i++)
        printf("%d ",arr[i]);
    getch();
    return 0;
}
void rotation(int arr[],int size,int n,char dir)
{

    int d,j;
    for(int i=0;i<n;i++)
    {

        if(dir=='l')
        {
            d=arr[0];                       // 5  6 3 6 3
            for(j=0;j<size-1;j++)
            {
                arr[j]=arr[j+1];
            }
            arr[j]=d;
        }
        else{
             d=arr[size-1];
            for(j=size-1;j>0;j--)
            {
                arr[j]=arr[j-1];
            }
            arr[j]=d;
        }
    }
}
