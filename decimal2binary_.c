#include<stdio.h>
int main()
    {
        int x,i,j;
        int arr[8]={0,0,0,0,0,0,0,0};
        printf("Enter a number between 0 to 255 : ");
        scanf("%d",&x);
        for(i=7;i>=0;i--)
        {
            arr[i]=(x%2);
            
            if (x>1)
            {
                x=x/2;
            }
            else
            {
                break;
            }

        }
        for (j=0;j<=7;j++)
        {
            printf("%d",arr[j]);
        }
        getch();
    }