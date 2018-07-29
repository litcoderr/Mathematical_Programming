//
//  main.c
//  Hemilton_graph
//
//  Created by James Chee on 10/24/17.
//  Copyright © 2017 James Chee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i=0,j=0;
    int n=0;
    int arr[10][10];
    int finish = 1;
    int a=0,b=0;
    scanf("%d",&n);
    while(finish){
        scanf("%d %d",&a,&b);
        if(a==100){
            finish = 0;
        }else{
            arr[a][b] = 1;
            arr[b][a] = 1;
        }
    }
    return 0;
}
