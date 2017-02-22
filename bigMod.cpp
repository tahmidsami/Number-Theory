#include<bits/stdc++.h>

#define i64 long long

i64 M = 100; //The mod number
i64 F(i64 N,i64 P) //the function will get N to the power P
{
	if(P==0) return 1;
	if(P%2==0) //if P is even
	{
		i64 ret=F(N,P/2);
		return ((ret%M)*(ret%M))%M;
	}
	else return ((N%M)*(F(N,P-1)%M))%M;

}

int main()
{
    i64 a, b;
    scanf("%lld%lld",&a, &b);
    printf("%lld",F(a,b));
    return 0;
}
