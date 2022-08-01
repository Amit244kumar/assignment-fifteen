int main()
{
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for(int  i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("The reverse number of array");
    reverse(arr,n);
    getch();
    return 0;
}

void reverse(int ar[],int n)
{
    for(int i=n-1;i>=0;i--)
        printf("%d ",ar[i]);

}
