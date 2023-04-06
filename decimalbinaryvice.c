//This is a program to convert binary to decimal ,vice versa
#include<stdio.h>
#include<stdlib.h>
int main()
    {
        int select;
        while(1)
        {     
                printf("\n1.Binary to Decimal converter \n2.Decimal to Binary converter \n3.Exit \n==>>Enter Your Choice: ");
                scanf("%d",&select);
            switch(select)
            {
                case 1:
                    binary();
                    break;
                case 2:
                    decimal();
                    break;
                case 3:
                    exit(0);
                default:
                    printf("Wrong option chosed:\n");
            }
        }    
    }
binary()
    {
        int arr[10],i,s=0,d=1;
        printf("\nEnter 10 digit binary number: ");
        for(i=0;i<=9;i++)
            scanf("%d",&arr[i]);
        for(i=0;i<=9;i++)
        {
            s=s+arr[i]*d;
            d=d*2;
        }
        printf("Decimal is: %d\n ",s);
        getch();
    }
decimal()
    {
        int dec,arr[11]={0,0,0,0,0,0,0,0,0,0,0},i=0,j=10;
        printf("Enter a Decimal number less then 2047 : ");
        scanf("%d",&dec);
        while(dec>=1)
        {   
            arr[i]=dec%2;
            dec=dec/2;
            i++;
        }
        while(j>=0)
        {
            printf("%d ",arr[j]);
            j--;
        }
        getch();
        printf("\n");
    }