#include <stdio.h>

void min(int x){
    
    int i;
    int value;
    int errorcount=0;
    int min=100000;
    int data[10];

    for(i=0;i<x;i++){
        scanf("%d",&value);
        if(value<=100000){
            data[i]=value;
            printf("%d: %d\n",i+1,data[i]);
        }
        else{
            data[i]=value;
            printf("%d:error!!\n",i+1);
            errorcount++;
        }
        
    }
    for(i=0;i<x;i++){
        if(min>data[i]){
            min=data[i];
        }
        else{
            continue;
        }
    }
    if(errorcount!=x){
        printf("min: %d",min);
    }
    else{
        printf("error");
    }
}

int main(void){
    int x=0;
    
    scanf("%d",&x);
    printf("How many data are there?: %d\n",x);
    
    min(x);
    
}

