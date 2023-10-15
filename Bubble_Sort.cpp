#include<iostream>

using namespace std;


int main(void){


	int dizi[18] = {2,4,1,5,3,2,5,6,12,3,4,12,3,4,6,8,21,14};
	int space;
	
	for(int j = 0; j < 17; j++){
		for(int i = 0; i < 17; i++){
			if(dizi[i] >= dizi[i+1]){
				space = dizi[i];
				dizi[i] = dizi[i+1];
				dizi[i+1] = space;
			}
		}
	}
	
	for(int x = 0; x < 18; x++){
		cout << " " << dizi[x];
	}
	cout << endl;

	

	return 0;
}
