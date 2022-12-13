#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string x;
	string y;
	string l,u,k,j ;
    cout << "Input text: ";
	cin >> x;
	y = func1(x);
    cout << "Reversed text: " << y << endl;
	u = func2(x);
	l = func3(x);
	k = func2(y);
	j = func3(y);
	if(u == k and l == j){
		cout << "Palindrome: Yes";
	}else{
		cout << "Palindrome: No";
	}
    return 0;
}
