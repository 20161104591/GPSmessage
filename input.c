//
//  input.c
//  GPSmessage
//
//  Created by 20161104591 on 17/6/19.
//  Copyright © 2017年 20161104591. All rights reserved.
//

#include<stdio.h>
int main(){
    FILE *fp;
    char str[102] = {0}, strTemp[100];
    if( (fp=fopen("/Users/a20161104591/Desktop/GPSmessage/GPS170510.txt", "at+")) == NULL )
    {
        printf("Cannot open file, press any key to exit!\n");
        getch();
        exit(1);
    }
    printf("Input a string:");
    gets(strTemp);
    strcat(str, "\n");
    strcat(str, strTemp);
    fputs(str, fp);
    fclose(fp);
    return 0;
}
