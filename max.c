#include <stdio.h>

int main(void){
    int x=0;
    int value;
    int i=0;
    int errorcount=0;
    int max=0;
    int data[10];
    
    scanf("%d",&x);
    printf("How many data are there?: %d\n",x);
    
    for(i=0;i<x;i++){
        scanf("%d",&value);
        if(value>=0){
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
        if(max<data[i]){
            max=data[i];
        }
        else{
            continue;
        }
    }
    if(errorcount!=5){
        printf("max: %d",max);
    }
    else{
        printf("error");
    }
    
}
