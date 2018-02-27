#include<bits/stdc++.h>
using namespace std;

bool solve(string& a, string& b, int n, int m) {
	
	if(n != m) return false;
	
	int hash[26] = {};
	bool marked[26] = {};
	memset(hash, -1, sizeof hash);
	
	for(int i = 0; i < n; i++) {
		
		if(hash[a[i] - 'a'] == -1) {
			
			if(marked[b[i] - 'a']) return false;
			
			marked[b[i] - 'a'] = true;
			hash[a[i] - 'a'] = b[i] - 'a';
		}	
		else if(hash[a[i] - 'a'] != b[i] - 'a') return false;
	}	

	return true;
}

int main() {
	
	string a;
	string b;
	
	cin >> a;
	cin >> b;
	
	if(solve(a, b, a.length(), b.length())) cout << "Yes\n";
	else cout << "No\n";
	
	return 0;
}
