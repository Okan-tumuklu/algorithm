#include<iostream>


using namespace std;


int main(void){

	int dizi[40] = {1,3,2,4,5,6,7,3,3,54,76,8,0,54,23,412,3262,6123,416,43,23,123,5,465,55,3412,235,45456,123,56,54634,345,62344,234,16,7823,4,412,2};


	
	int deger = 2;
	int adet = 0;
	
	
	for(int i = 0; i < 40; i++){
		if(deger == dizi[i]){
			cout << deger <<": Dizide bulunaktadır ve " << i+1 << ": Elamanında yer almaktadır" << endl;
			adet++;
		}
	}
	
	cout << "************************\n";
	
	cout << deger <<" dizide " << adet << " Adet bulunmaktadır\n";
 	
	
	return 0;
}
