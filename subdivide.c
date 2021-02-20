#include <stdio.h>

void subdivide(int x){
    
    int data[100];
    int i;
    
    printf("Please Enter a number: %d\n",x);
    for(i=0;i<x;i++){
        data[i]=i+1;
        printf("%d\n",data[i]);
    }
    
}

int main(void){

    char str[1000];
    int x;
    
    fgets(str,sizeof(str),stdin);
    sscanf(str,"%d",&x);
    
    subdivide(x);
    
}
