#include <iostream>
using namespace std;
int main(){
double n=1;
double pi;
while(n!=-1){
	pi = 0;
	cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):\n";	
	cin>>n;
	if(n!=-1){
		for (int i=0; i<=n; i++){
			if(!(i%2)){
			pi= pi + (1/(2.0*i+1));
			}
			else{
			pi= pi - (1/(2.0*i+1));
			}
		}
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	cout<<"The approximate value of pi using "<<n+1<<" terms is: "<<pi*4<<endl;
	}
}
return 0;
}

