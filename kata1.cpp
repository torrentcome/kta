#include<iostream>
using namespace std;

int main() {
	char w1[10], w2[10];
        cin>>w1>>w2;	
	
	if((strlen(w1) == 0)||(strlen(w1) != strlen(w2))){
		return 0;
	}

	int size = strlen(w1);

	cout<<w1;
	cout<<endl;
	for(int i=0; i<size; ++i) {
		char letter = w2[i];
		for(int j=0; j<size; j++){
			if(i == j){
				w1[j] = letter;
			}
		}
		cout<<w1;
		cout<<endl;
	}
	return 0;
}
