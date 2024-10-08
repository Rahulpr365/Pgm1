#include <stdio.h>
int main()
{
int a[50],flag = 0,element,n,i,foundindex;
printf("Enter the limit : ");
scanf("%d",&n);
printf("Enter the elements");
for(int i=0;i<n;i++)
{
    scanf(“%d”,&a[i]);
}
printf("Enter the element to search: ");
scanf("%d",&element);
for(int i=0;i<n;i++)
{
if (a[i] == element)
{
flag = 1;
foundindex=i;
break;
}
}
if (flag == 1) {
printf("Element found at index %d ", foundindex);
}
else
printf("The element not found");
}
