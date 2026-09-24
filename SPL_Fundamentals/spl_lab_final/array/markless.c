#include<stdio.h>
int main(){
    int mark[10]={45, 67, 89, 34, 23, 56, 78, 90, 12, 43};
    for (int i=0; i<10; i++){
    
        if(mark[i]<35){
        printf("%d ", mark[i]);
    }
    
    }
   

    return 0;
}