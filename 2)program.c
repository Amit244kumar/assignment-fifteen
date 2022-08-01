int main()
{
    int arr[5],i;
    printf("Enter the array elements");
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);
    printf("The smallest element is %d",smallest(arr,5));
    getch();
    return 0;
}

int smallest(int ar[],int n)
{
    int i,j=ar[0];
    for(i=0;i<n;i++)
    {
        if(j>ar[i])
            j=ar[i];
    }
    return j;
}
