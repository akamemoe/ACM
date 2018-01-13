/*
----------description----------
我们的乐乐同学对于网络可算得上是情有独钟，他有一个计划，那就是用无线网覆盖郑州大学。

现在学校给了他一个机会，因此他要购买很多的无线路由。现在他正在部署某条大道的网络，而学校只允许把他的无线路由器放在路的正中间。我们默认这条大道是笔直的并且它在任何地方的宽度都一样。并且所有的路由器的覆盖面积是相同的。现在乐乐计算出这条大道的长和宽，以及路由器的覆盖半径，想请你帮忙，帮他计算出他最少要购买的路由器的数量。

注意：为了防止某种干扰，两台无线路由之间的最小距离不能小于1米![](/JudgeOnline/admin/kind/attached/20110319141528_59298.jpg)

图1中为一条矩形的道路，中间的虚线代表中线。图2为最小覆盖的示意图。


----------input----------
输入包括多组测试数据  
第一部分：一个整数T(1<=T<=500)  
第二部分：一共T行，每行包括三个整数L,D,R代表路的长，宽和覆盖半径（米）。  
(1<=L<=100000),(1<=D<=50),(1<=R<=200)。  


----------output----------
对于每组测试数据输出各占一行，只有一个整数，表示最少的路由器数量。如果不能覆盖，请输出impossible


----------sample_input----------
2
40 6 5
40 10 5
----------sample_putput----------
5
impossible
*/
/////////////////////////////
 
//125
#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	
	int n;
	double fg;
	scanf("%d",&T);
	while(T--)
	{
		int L,d,r;
		scanf("%d%d%d",&L,&d,&r);
		if(2*r<=d)
		{
			printf("impossible\n");
		}
		else
		{
			fg=2.0*sqrt(r*r-d*d/4.0);
			for(n=1;n*fg<L;n++);
			if((n-1)<=L)
			{
				printf("%d\n",n);
			}
			else
			{
				printf("impossible\n");
			}
		}
	}
	return 0;
}
        