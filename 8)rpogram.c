int main()
{
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for(int  i=0;i<n;i++)
        scanf("%d",&arr[i]);
    unique(arr,n);
    getch();
    return 0;
}
void unique(int ar[],int n)
{
    int i,j,v;
    for(i=0;i<n;i++)
    {
      if(find(ar,n,i))
        printf("%d ",ar[i]);

    }
}
int find(int ar[],int n,int j)
{
    for(int i=0;i<n;i++)
    {
        if(j!=i)
          if(ar[i]==ar[j])
            return 0;
    }
    return 1;

}
