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
        char speed[6];
        char lat2[10];
        char deg[6];
        char time1[7];
        char time[7];
        char state[2];
        char num[3];
        char high[5];
        fp=fopen("//Users//a20161104591//Desktop//GPSmessage//GPS170510.txt","r+");
        fscanf(fp,"%s%s",str1,str2);
        printf("%s\n%s\n",str1,str2);
        for(i=0;i<7;i++)
        {
            time[i]=str1[i+7];
        }
        time[6]='\0';
        printf("utc时间 :%c%c时%c%c分%c%c秒\n",time[0],time[1],time[2],time[3],time[4],time[5]);
        for(i=0;i<8;i++)
        {
            lat[i]=str1[i+16];
        }
        lat[8]='\0';
        printf("纬度 :%s\n",lat);
        for(i=0;i<9;i++)
        {
            lat2[i]=str1[i+27];
        }
        lat2[9]='\0';
        printf("经度 :%s\n",lat2);
        for(i=0;i<6;i++)
        {
            speed[i]=str1[i+39];
        }
        speed[5]='\0';
        printf("地面速率 :%s节\n",speed);
        for(i=0;i<6;i++)
        {
            deg[i]=str1[i+45];
        }
        deg[5]='\0';
        printf("地面航向 :%s度\n",deg);
        for(i=0;i<7;i++)
        {
            time1[i]=str1[i+51];
        }
        time1[6]='\0';
        printf("utc日期 :%c%c日%c%c月%c%c年\n",time1[0],time1[1],time1[2],time1[3],time1[4],time[5]);
        for(i=0;i<2;i++)
        {
            state[i]=str2[i+37];
        }
        state[1]='\0';
        printf("gps状态 :%s\n",state);
        for(i=0;i<3;i++)
        {
            num[i]=str2[i+39];
        }
        num[2]='\0';
        printf("卫星数量 :%s个\n",num);
        for(i=0;i<5;i++)
        {
            high[i]=str2[i+43];
        }
        high[4]='\0';
        printf("海拔高度 :%s米\n",high);
        fclose(fp);
        return 0;
        }
