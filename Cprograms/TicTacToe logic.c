#include<stdio>
#define MAXCOL 3
#define MAXROW 3

int main(){

    int a[MAXROW][MAXCOL],row1,col1;
    int u1,u2,i,j,row2,col2;
    while(cnt!=0){
        printf("Player 1, Your Turn!\n");
        printf("Enter row,col: ");
        scanf("%d %d",&row1,&col1);
        display_board();
        printf("Player 2, Your Turn\n");
        scanf("%d %d",&row2,&col2);
        display_board();
        cnt=check_board(a);
    }
}

int check_board(int a[][]){
    
}

