int main()
{
    int n,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    frequency(arr,n);
    getch();
    return 0;
}

void frequency(int ar[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(ar[i]!=0){
          printf("%d->%d\n",ar[i],find(ar,ar[i],n,i+1));
        }
    }
}
int find(int r[],int e,int n,int s)
{
    int c=1;
   while(s<n)
   {
       if(e==r[s])
       {
          c++;
          r[s]=0;
       }
       s++;
   }
   return c;
}
