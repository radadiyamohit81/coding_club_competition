/*Basic Math*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		if(a > b)swap(a,b);
		if(a == b)printf("0\n");
		else if(b%a == 0)printf("1\n");
		else printf("2\n");
	}
	return 0;
}
/*
Test Case:
		3
		4 6
		2 6
		15 10
Ans: 2 1 2
*/
