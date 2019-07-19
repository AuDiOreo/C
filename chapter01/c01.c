#include "c01.h"
#include <stdio.h>
//
// Created by yihang.li on 7/18/2019.
//
int max_test(){
    int max(int a, int b, int c);
    int a,b,c,d;
    scanf("%d,%d,%d",&a,&b,&c);
    d=max(a,b,c);
    printf("max is %d\n",d);
}

int max(int a, int b, int c){
    int tmp,d;
    if(a>b) tmp=a;
    else tmp=b;
    if(tmp>c) d=tmp;
    else d=c;
    return d;
}

