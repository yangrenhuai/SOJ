#include <iostream>
using namespace std;

int f(int n,int turn) {
	if (n == 0)
		return turn;
	else {
		turn =turn * 10 + n % 10;
		return f(n/10,turn);
	}
}

int main() {
	int n;
	cin >> n;
	int turn=0;
	turn=f(n,turn);
	
	cout<< turn;
}
