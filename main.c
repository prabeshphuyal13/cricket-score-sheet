#include<stdio.h>
#include<conio.h>
struct team{
    struct player{
        char name[10];
        int runs;
        int balls;
        int six;
        int fours;
        int rungiven;
        int over;
        float strikerate;
        float economy;
    }p[11];
    int extra;
};
int inputscore(int remballs){
    char ch;
    while(remball>0){
    clrscr();
    printf{"1,2,3,4 or 6 for RUNS\n"};
    printf{"out for WICKET\n"};
    printf{"w for WIDE\n"};
    printf{"n for NOBALL\n"};
    scanf("%c",&ch);
    switch(ch){
        case '1':


    }
    remballs--;
    }

}
void outputscore(struct player_values p){
    printf("%s",p.name);
}
int main(){
    int gameover=2,total_balls_ininning=gameover*6;
    struct team t[2];
    while(total_balls_ininning>0){
        inputscore(t1,t2);
    }
    return 0;
}
