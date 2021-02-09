#include<iostream>
using namespace std;

void myString(char *&R, int N){
	R = new char [N];    
	for(int i = 0; i < N;i++) R[i] = 'A'+i;
	R[N] = 0;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
