/*
----------description----------
假设你有一个各位数字互不相同的四位数，把所有的数字从大到小排序后得到a,从小到大后得到b,然后用a-
b替换原来这个数，并且继续操作。例如，从1234出发，依次可以得到4321-1234=3087、8730-378=8352、8532-2358=6174，又回到了它自己！现在要你写一个程序来判断一个四位数经过多少次这样的操作能出现循环，并且求出操作的次数

比如输入1234执行顺序是1234->3087->8352->6174->6174,输出是4


----------input----------
第一行输入n,代表有n组测试数据。  
接下来n行每行都写一个各位数字互不相同的四位数


----------output----------
经过多少次上面描述的操作才能出现循环


----------sample_input----------
1
1234
----------sample_putput----------
4
*/
/////////////////////////////
#include<stdio.h>
int main()
{
	void sort(int a[]);
	int N,i,count;
	int a[4],b[4],num;
	scanf("%d",&N);
	while(N--)
	{
		count=0;
		scanf("%d",&num);
		do{

			for(i=0;i<4;i++)
			{
				a[3-i]=num%10;
				num/=10;
			}
			sort(a);
			//for(i=0;i<4;i++)
				//printf("%d",a[i]);
			num=a[0]*1000+a[1]*100+a[2]*10+a[3]-a[3]*1000-a[2]*100-a[1]*10-a[0];
			count++;
		}while(num!=6174);
		printf("%d\n",count+1);
	}
	return 0;
	
}
void sort(int a[])//大到小排序
{
	int i,j;
	int temp;
	for(i=0;i<3;i++)
		for(j=i+1;j<4;j++)
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
return ;
}        