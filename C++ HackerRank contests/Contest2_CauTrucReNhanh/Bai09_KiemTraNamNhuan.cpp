#include <bits/stdc++.h>
using namespace std;

int main(){
	unsigned int N; cin >> N;
	if(N % 400 == 0 || (N % 4 == 0 && N % 100 != 0)){
		cout << "YES";
	}else{
		cout << "NO";
	}
}
