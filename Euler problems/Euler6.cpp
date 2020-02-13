//Euler6
#include <iostream>
using namespace std;
int main()
{
	int n ,result=1;
	cout<<"Enter a n";
	cin>>n;
	result=(((n*(n+1))/2)*((n*(n+1))/2));
	result-=(n*(n+1)*((2*n)+1)/6);
	cout<<result;
}
