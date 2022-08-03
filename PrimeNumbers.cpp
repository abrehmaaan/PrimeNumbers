#include<iostream>
#include<cmath>
using namespace std;
void printPrimes(int n){
	cout << "Prime Numbers between 2 and "<<n<<" are:"<<endl;

    for(int i=2;i<=n;i++){
		int factorCount=0;
        for(int j=2;j<=sqrt(i);j++){
			if(i%j==0)
                factorCount=1;
        }
        if(factorCount==0)
        	cout<<i<<" ";
    }
}
int main(){
	printPrimes(1000);
	return 0;
}
