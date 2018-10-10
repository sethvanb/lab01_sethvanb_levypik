#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n=1;
double pi;
while(n!=0){
	cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):\n";	
	cin>>n;
	for (int i=0; i<n; i++){
	pi+=(pow(-1.0,n)/(2.0*n+1.0));
	}
cout<<"The approximate value of pi using "<<n+1<<" terms is: "<<pi<<endl;
}
return 0;
}

