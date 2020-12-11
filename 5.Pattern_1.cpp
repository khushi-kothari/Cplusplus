#include<iostream>
using namespace std;

int main() {
	int i, N;
	//cout << "Enter a number: ";
	cin >> N;

	for(int i=1; i<=N; i++) {
		if(i%2!=0) {
			for(int j=0; j<i; j++)
				cout<<1;
		}
		else {
			cout<<1;
			for(int j=0; j<i-2; j++)
				cout<<0;
			cout<<1;
		}
		cout<<"\n";
	}

	return 0;
}
