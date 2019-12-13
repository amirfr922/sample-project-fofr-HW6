#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int i,j,a1,a2,a3,a4,a5,a6,a7,a8,placex,placeo,x1,x2,o1,o2,k=0,counter=0,sum=0;
    char arr[3][3]={};
    int x[3][3]={0};
    int y[9]={0};
    for(; a1!=237 && a2!=237 && a3!=237 && a4!=237 && a5!=237 && a6!=237 && a7!=237 && a1!=237;){
        scanf("%d",&placex);
        y[k]=placex;
        k++;
        x1=placex/3;
        x2=placex%3;
        arr[x1][x2-1]='X';
        x[x1][x2-1]='X';
        a1=x[0][0]+x[1][0]+x[2][0];
        a2=x[0][1]+x[1][1]+x[2][1];
        a3=x[0][2]+x[1][2]+x[2][2];
        a4=x[0][0]+x[0][1]+x[0][2];
        a5=x[1][0]+x[1][1]+x[1][2];
        a6=x[2][0]+x[2][1]+x[2][2];
        a7=x[0][0]+x[1][1]+x[2][2];
        a8=x[0][2]+x[1][1]+x[2][0];
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("|%c|",arr[i][j]);
            }
            printf("\n");
        }

        if( a1==264 || a2==264 || a3==264 || a4==264 || a5==264 || a6==264 || a7==264 || a8==264){
            puts("player 1 wins");
            return 0;
        }
        scanf("%d",&placeo);
        y[k]=placeo;
        k++;
        o1=placeo/3;
        o2=placeo%3;
        arr[o1][o2-1]='O';
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("|%c|",arr[i][j]);
            }
            printf("\n");
        }
        x[o1][o2-1]='O';

        a1=x[0][0]+x[1][0]+x[2][0];
        a2=x[0][1]+x[1][1]+x[2][1];
        a3=x[0][2]+x[1][2]+x[2][2];
        a4=x[0][0]+x[0][1]+x[0][2];
        a5=x[1][0]+x[1][1]+x[1][2];
        a6=x[2][0]+x[2][1]+x[2][2];
        a7=x[0][0]+x[1][1]+x[2][2];
        a8=x[0][2]+x[1][1]+x[2][0];
        for(counter=0;counter<k;counter++){
            sum=y[counter]+sum;
            if(sum==45){
                puts("try again");
                return 0;
            }
        }
    }
    puts("player 2 wins");
    return 0;
}//this is my code:)
