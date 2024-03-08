#include <stdio.h>

int main() {
    int codigos[3][3][3]={
        {{1,2,3},{4,5,6},{7,8,9}},
        {{10,11,12},{13,14,15},{16,17,18}},
        {{19,20,21},{22,23,24},{25,26,27}}
    };
    int codigos2[3][3][3] = {1,2,3,4,5,6,7,8,9,10,
                            11,12,13,14,15,16,17,18,19,20,
                            21,22,23,24,25,26,27};
   
    int i,j,k;    
    for(i=0;i<3;i++){
        printf("Elemento %d\n__________________________________",i+1);
        for(j=0;j<3;j++){        
            printf("\n\tMatriz Bidimensional %d\n",j+1);
            for(k=0;k<3;k++){
                printf("\t%d",codigos2[i][j][k]);
            }    
            printf("\n");
        }  
    } 
    printf("\n\n\n");
    
    return 0;
}
