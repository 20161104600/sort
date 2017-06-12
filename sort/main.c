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
                int m = num[j];
                num[j] = num[j+1];
                num[j+1] = m;
            }
        }
        printf("%d ",num[i]);
    }
    return;
}
int main()
{
    int num[10]={11,2,60,45,3,6,65,12,98,23};
    Bubble(num,10);
    return 0;
}
   
