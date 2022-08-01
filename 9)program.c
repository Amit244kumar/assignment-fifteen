int main()
{
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr1[n],arr2[n],arr3[n+n];
    printf("Enter the first array elements");
    for(int i=0;i<n;i++)
        scanf("%d",&arr1[i]);
    printf("Enter the second array elements");
     for(int i=0;i<n;i++)
        scanf("%d",&arr2[i]);
    merge(arr1,arr2,arr3,n);
    printf("The merged array is:");
    for(int i=0;i<n+n;i++)
        printf("%d ",arr3[i]);
    getch();
    return 0;
}
void merge(int ar1[],int ar2[],int ar3[],int n)
{
    int i,j,k;
    for(i=0,j=0,k=0;i<n;k++)
    {
        if(ar1>ar2)
        {
            ar3[k]=ar1[i];
            i++;
        }else{
           ar3[k]=ar2[j];
            j++;
        }
    }
    if(i<n)
    {
        while(i<n)
        {
            ar3[k]=ar1[i];
            i++;
            k++;
        }
    }
    else{
        while(j<n)
        {
            ar3[k]=ar1[j];
            j++;
            k++;
        }
    }
}
