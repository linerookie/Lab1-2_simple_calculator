#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int com_num[10] = {1,2,3,4,5,6,7,8,9,10};
int player_num[10] = {1,2,3,4,5,6,7,8,9,10};


void rand_swap(){
        int tmp,x,y,i;
        srand(time(NULL));
        for( i =0;i<50;i++)
        {
            x = rand()%10;
            y = rand()%10;
            if(x!=y){

                tmp =com_num[x];
                com_num[x] = com_num[y];
                com_num[y] = tmp;
            }

        }
        printf("com_num[]:");
        for(i = 0;i<10;i++){
            printf("%d ",com_num[i]);
        }
        printf("\n");

}



int main()
{
    int round = 0;
    int num = 0;
    int com_win=0;
    int player_win = 0;
    rand_swap();
    while(round <10)
    {
        for(int i =0;i<10-round;i++)
        {
            if(i==0)
            {
                if(round==9)
                    printf("[%d]",player_num[i]);
                else
                    printf("[%d,",player_num[i]);
            }
            else
            {

                if(i==(10-round-1))
                {

                    printf(" %d]\n",player_num[i]);
                }
                else
                    printf(" %d,",player_num[i]);
            }
        }

        printf("어떤 카드로 내시겠습니까?: \n" );
        scanf("%d",&num);
        printf("컴퓨터의 카드: %d , 플레이어의 카드: %d\n", com_num[round],num);
        if(num>com_num[round]){
            printf("플레이어가 이겼습니다.\n");
            player_win++;
        }

        else
        {
             printf("컴퓨터가 이겼습니다.\n");
             com_win++;
        }
        printf("%d라운드 끝, ",round+1);
        printf("Com %d : %d player\n\n", com_win,player_win);
        round++;
    }

    return 0;
}
