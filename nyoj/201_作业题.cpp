/*
----------description----------
小白同学这学期有一门课程叫做《数值计算方法》，这是一门有效使用数字计算机求数学问题近似解的方法与过程，以及由相关理论构成的学科……

今天他们的Teacher S，给他们出了一道作业题。Teacher
S给了他们很多的点，让他们利用拉格朗日插值公式，计算出某严格单调函数的曲线。现在小白抄下了这些点，但是问题出现了，由于我们的小白同学上课时走了一下神，他多抄下来很多点，也就是说这些点整体连线不一定还是严格递增或递减的了。这可怎么处理呢。为此我们的小白同学制定了以下的取点规则：

1、取出尽可能多的满足构成严格单调曲线的点，作为曲线上的点。

2、通过拉格朗日插值公式，计算出曲线的方程

但是，他又遇到了一个问题，他发现他写下了上百个点。 _[- -!佩服吧]_ ,这就很难处理了 _(O_O).。_
由于拉格朗日插值公式的计算量与处理的点数有关，因此他请大家来帮忙，帮他统计一下，曲线上最多有多少点，以此来估计计算量。

已知：没有任何两个点的横坐标是相同的。


----------input----------
本题包含多组数据：  
首先，是一个整数T，代表数据的组数。  
然后，下面是T组测试数据。对于每组数据包含两行：  
第一行：一个数字N(1<=N<=999),代表输入的点的个数。  
第二行：包含N个数对X(1<=x<=10000),Y(1<=Y<=10000),代表所取的点的横纵坐标。  


----------output----------
每组输出各占一行，输出公一个整数，表示曲线上最多的点数


----------sample_input----------
2

2

1 2 3 4

3

2 2 1 3 3 4
----------sample_putput----------
2

2
*/
/////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#define max(a,b) a>b?a:b
struct P{
    int x,y;
}p[1005];
int comp(const void *a,const void *b)
{
    P *c=(P *)a;
    P *d=(P *)b;
    return c->x-d->x;
}
int main()
{
    int N;
    int i,n,j;
    scanf("%d",&N);
    int f[1005];//递增
    int ff[1005];//递减
    while(N--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d %d",&p[i].x,&p[i].y);
        qsort(p,n,sizeof(p[0]),comp);
        for(i=0;i<=n;i++)
        {
            f[i]=ff[i]=1;
            for(j=0;j<i;j++)
            {
                if(i==n || p[j].y<p[i].y)
                    f[i]=max(f[j]+1,f[i]);
                if(i==n || p[j].y>p[i].y)
                    ff[i]=max(ff[j]+1,ff[i]);
            }
        }
        printf("%d\n",max(f[n]-1,ff[n]-1));
    }
    return 0;
}