//
//  main.c
//  GPSmessage
//
//  Created by 20161104591 on 17/6/16.
//  Copyright © 2017年 20161104591. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main()
{
        int i;
        FILE *fp;
        FILE *fw;
        char str1[65];      //第一行数据
        char str2[65];      //第二行数据
        char lat[9];        //纬度
        char speed[6];      //地面速率
        char lat2[10];      //经度
        char deg[6];        //地面航向
        char time1[7];      //UTC日期
        char time[7];       //UTC时间
        char state[2];      //GPS状态
        char num[3];        //卫星数量
        char high[5];       //海拔高度
        fp=fopen("//Users//a20161104591//Desktop//GPSmessage//GPS170510.txt","r+");
        fw=fopen("//Users//a20161104591//Desktop//GPSmessage//output.txt","w+");
   while(fscanf(fp,"%s%s",str1,str2)!=EOF)
    {
        printf("%s\n%s\n",str1,str2);
        for(i=0;i<7;i++)
        {
            time[i]=str1[i+7];
        }
        time[6]='\0';
        printf("utc时间 :%c%c时%c%c分%c%c秒\n",time[0],time[1],time[2],time[3],time[4],time[5]);
        fprintf(fw,"utc时间 :%c%c时%c%c分%c%c秒\n",time[0],time[1],time[2],time[3],time[4],time[5]);
        for(i=0;i<8;i++)
        {
            lat[i]=str1[i+16];
        }
        lat[8]='\0';
        printf("纬度 :%s\n",lat);
        fprintf(fw,"纬度 :%s\n",lat);
        for(i=0;i<9;i++)
        {
            lat2[i]=str1[i+27];
        }
        lat2[9]='\0';
        printf("经度 :%s\n",lat2);
        fprintf(fw,"经度 :%s\n",lat2);
        for(i=0;i<6;i++)
        {
            speed[i]=str1[i+39];
        }
        speed[5]='\0';
        printf("地面速率 :%s节\n",speed);
        fprintf(fw,"地面速率 :%s节\n",speed);
        for(i=0;i<6;i++)
        {
            deg[i]=str1[i+45];
        }
        deg[5]='\0';
        printf("地面航向 :%s度\n",deg);
        fprintf(fw,"地面航向 :%s度\n",deg);
        for(i=0;i<7;i++)
        {
            time1[i]=str1[i+51];
        }
        time1[6]='\0';
        printf("utc日期 :%c%c日%c%c月%c%c年\n",time1[0],time1[1],time1[2],time1[3],time1[4],time[5]);
        fprintf(fw,"utc日期 :%c%c日%c%c月%c%c年\n",time1[0],time1[1],time1[2],time1[3],time1[4],time[5]);
        for(i=0;i<2;i++)
        {
            state[i]=str2[i+37];
        }
        state[1]='\0';
        printf("gps状态 :%s\n",state);
        fprintf(fw,"gps状态 :%s\n",state);
        for(i=0;i<3;i++)
        {
            num[i]=str2[i+39];
        }
        num[2]='\0';
        printf("卫星数量 :%s个\n",num);
        fprintf(fw,"卫星数量 :%s个\n",num);
        for(i=0;i<5;i++)
        {
            high[i]=str2[i+43];
        }
        high[4]='\0';
        printf("卫星数量 :%s个\n",num);
        fprintf(fw,"卫星数量 :%s个\n",num);
    }
    fclose(fp);
    return 0;
}
