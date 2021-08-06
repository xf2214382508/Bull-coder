#include<iostream>
#include<cstdio>


using namespace std;

char matric[80][80];

int main()
{
	int n;   //框子尺寸	
	char a,b;    // 输入的两个字符    a主  b边 
	bool firstcase = true;  //第一组数据标志 
	
	while(scanf("%d%c%c", &n, &a, &b) != EOF){
		if(firstcase == true){
			firstcase = false;
		}
		else{
			printf("\n");
		}
				
		for(int i=0;i<=n/2;++i){
			int j = n - i - 1;
			int length = n - 2 * i;
			char c;
			if((n/2 - i) % 2 == 0){
				c=a;
			}else{
				c=b;
			}
			for(int k = 0;k<length;++k)
			{
				matric[i][i+k]=c;
				matric[i+k][i]=c;
				matric[j][j-k]=c;
				matric[j-k][j]=c;
				
			}
			
			
			
			
		}
		if(n != 1){
			matric[0][0]=' ';
			matric[0][n-1]=' ';
			matric[n-1][0]=' ';
			matric[n-1][n-1]=' ';
			
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%c",matric[i][j]);
				
				
			}
			printf("\n");
			
		}
		
		
	}
	
	
	return 0;
}


