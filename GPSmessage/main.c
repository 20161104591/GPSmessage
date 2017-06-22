//
//  main.c
//  GPSmessage
//
//  Created by 20161104591 on 17/6/16.
//  Copyright © 2017年 20161104591. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define N 10000
int main()
{
        int i;
        FILE *fp;
        char str1[65];
        char str2[65];
        char lat[9];
        fp=fopen("//Users//a20161104593//Desktop//gps//GPS170510.log","r+");
        fscanf(fp,"%s%s",str1,str2);
        printf("%s\n%s\n",str1,str2);
        for(i=0;i<8;i++)
        {
            lat[i]=str1[i+16];
        }
        lat[8]='\0';
        printf("纬度 :%s\n",lat);
        fclose(fp);
        return 0;
    }
