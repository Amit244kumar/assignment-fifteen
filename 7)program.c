int main()
{
    int n,m;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the number:");
    scanf("%d",&m);
    printf("The total number of duplicate is %d",duplicate(arr,n,m));
    getch();
    return 0;
}
int  duplicate(int ar[],int n,int m)   // 4 3  4 2 3 4
{

    int c=0,i;
    for(i=0;i<n;i++)
    {
      if(ar[i]==m)
            c++;
    }
     return c;
}
