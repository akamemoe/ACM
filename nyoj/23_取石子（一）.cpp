/*
----------description----------
一天，TT在寝室闲着无聊，和同寝的人玩起了取石子游戏，而由于条件有限，他/她们是用旺仔小馒头当作石子。游戏的规则是这样的。设有一堆石子，数量为N（1<=N<=1000000），两个人轮番取出其中的若干个，每次最多取M个（1<=M<=1000000），最先把石子取完者胜利。我们知道，TT和他/她的室友都十分的聪明，那么如果是TT先取，他/她会取得游戏的胜利么？


----------input----------
第一行是一个正整数n表示有n组测试数据  
输入有不到1000组数据，每组数据一行，有两个数N和M,之间用空格分隔。


----------output----------
对于每组数据，输出一行。如果先取的TT可以赢得游戏，则输出“Win”，否则输出“Lose”（引号不用输出）


----------sample_input----------
2

1000 1

1 100
----------sample_putput----------
Lose

Win
*/
/////////////////////////////
#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    int n,m;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d%d",&n,&m);
        if(n%(m+1)==0)
            printf("Lose\n");
        else
            printf("Win\n");

    }
    return 0;
}