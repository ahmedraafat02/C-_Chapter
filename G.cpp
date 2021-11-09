#include <iostream>
#include <math.h>
#include <iomanip>
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
using namespace std;

int main(){
    int T;
    cin >> T;
    int sum = 0;
    int sumarr[T];
    for (int t = 0; t < T; t++)
    {
        double x , y;
        cin >> x >> y;
        sum = (x+y)*((1 + abs(y - x))/2);
        sumarr[t]= sum;
}
    	for (int j = 0; j < T; j++){
    		cout << sumarr[j] << el;
    	}
}

