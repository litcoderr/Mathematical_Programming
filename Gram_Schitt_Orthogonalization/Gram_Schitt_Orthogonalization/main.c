//
//  main.c
//  Gram_Schitt_Orthogonalization
//
//  Created by James Chee on 10/27/17.
//  Copyright © 2017 James Chee. All rights reserved.
//

#include <stdio.h>
int cnumber();
void print_array();

int dimension = 0; //dimension of the graph
int arr[100][100];//graph array
int ar[100]; // array for checking


int main(int argc, const char * argv[]) {
    int i,j; //calculation variable
    
    //get the dimension
    printf("dimension: ");
    scanf("%d", &dimension);
    
    //get the graph
    for(i=0;i<dimension;i++){
        for(j=0;j<dimension;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    //print and check the graph
    print_array();
    
    //get the color-number
    printf("this is the color-number : %d",cnumber());
    
    return 0;
}

int cnumber(){
    int current = 0;
    int count = 0;
    int check=0;
    int i=0,j=0;
    while(count<dimension){
        current++;
        for(i=0;i<dimension;i++){
            if(ar[i]==0){
                for(j=0;j<dimension;j++){
                    if(arr[i][j]==1){//select connected node's connected nodes
                        if(ar[j]==current){
                            check=1;
                            break;
                        }
                    }
                }
                if(check==0){
                    ar[i] = current;
                    count++;
                }
                check = 0;
            }
        }
    }
    return current;
}

void print_array(){
    int i,j;
    for(i=0;i<dimension;i++){
        for(j=0;j<dimension;j++){
            printf("(%d,%d) : %d ",i,j,arr[i][j]);
        }
        printf("\n");
    }
}
