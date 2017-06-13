//
//  main.c
//  sort
//
//  Created by 20161104600 on 2017/6/12.
//  Copyright © 2017年 20161104600. All rights reserved.
//

#include <stdio.h>
void Bubble(int num[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;i+j<n-1;j++)
        {
            if(num[j]>num[j+1])
            {
                int m=0;
                m = num[j];
                num[j] = num[j+1];
                num[j+1] = m;
            }
        }
        printf("%d ",num[i]);
    }
    return;//
}
int main()
{
    int n;
    FILE *p;
    scanf("%d",&n);
    p=fopen("/Users/a20161104600/Desktop/sort/input.txt","r");
    if(p==NULL)
    {
        printf("Error opening!");
        return 0;
    }
    else
    {
        int a[];
        int i=0;
        a[i]=fgetc(p);
        while(a[i]!=EOF)
        {
            a[i+1]=fgetc(p);
        }
        fclose(p);
    }
    
    //Bubble(num,10);/Users/a20161104600/Desktop/sort/output.txt//
    return 0;
}
   
