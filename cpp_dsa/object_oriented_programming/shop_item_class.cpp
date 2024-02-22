#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
class shop{
	int itemid[100];
	int itemprice[100];
	int counter;
	public:
		void intitcounter(){
			counter = 0;
			}
			void setprice();
			void getprice();
};
void shop::setprice(){
	cout <<"enter the id of yout item: " << counter+1 << endl;
	cin >> itemid[counter];
	cout << "enter the price of your item: " << endl;
	cin >> itemprice[counter];
	counter++;
}
void shop::getprice(){
	for (int i=0;i<counter;i++){
		cout << "the price of item with it: " << itemid[i] << " is: " << itemprice[i] << endl;
	}
}
int main(){
	shop dukan;
	dukan.setprice();
	dukan.setprice();
	dukan.getprice();
	return 0;

}
