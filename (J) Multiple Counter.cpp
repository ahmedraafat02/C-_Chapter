#include <iostream>
using namespace std;
 
int main(){
	int a , b , x;
	int div=0;
	cin >> a >> b >> x;
	for (int i= a; i <= b; i++){
		if(i % x == 0){
			div++;
		}
	}
	cout << div;
 
}