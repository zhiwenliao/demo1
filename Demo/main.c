#include<stdio.h>
#include <math.h>
#define N 100
void print(int sum);
int main(){
	int i = 0;
	char c[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	char a[N] = "";
	int sum = 0;
	scanf("%s",a);
	while(a[i]!='\0'){
		printf("%c",a[i]);
		
		sum += ((int)a[i]-48);
		i++;
	}
	printf("sumÎª£º%d\n",sum);
    print(sum);

}
void print(int sum){
    int i = 0,n=0,j; 
	
	char c[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	j=sum;
	while(j>0)
	{
		j/=10;
		n++;
	}
	while(sum>0){
	     i = sum%10;
		 printf("%s ",c[i]);
		 sum/=pow(10,n-1);
	}
	
}