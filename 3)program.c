int main()
{
    int n,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
     sort(ar,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    getch();
    return 0;
}
void sort(int ar[],int n)
{
    int b,temp;
    for(int i=0;i<n;i++)
    {
        b=findSmall(ar,i,n);
        temp=ar[i];
        ar[i]=ar[b];
        ar[b]=temp;
    }
}

int findSmall(int r[],int d,int size)
{
   int i=r[d],s=d++;
    for(;d<size;d++)
    {
        if(i>r[d])
        {
            i=r[d];
            s=d;
        }
    }
    return s;
}
