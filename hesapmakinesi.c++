#include <iostream>

using namespace std;

int main(){
	int secim;
	double sayi1, sayi2 , sonuc;
	
	cout<<"1.sayiyi gir:";
	cin>>sayi1;
	cout<<"2.sayiyi gir:";
	cin>>sayi2;
	cout<<"1-Toplama \n 2-Çikarma \n 3-Çarpma \n 4-Bölme \n";
	cin>>secim;
	cout<<"Sonuç"<<endl;
	cout<<endl;
	
	if(secim==1){
		sonuc=sayi1+sayi2;
		cout<<"sonuc: "<<sonuc<<endl;
	}
	else if(secim==2){
		sonuc=sayi1-sayi2;
		cout<<"sonuc: "<<sonuc<<endl;
	}
	else if(secim==3){
		sonuc=sayi1*sayi2;
		cout<<"sonuc: "<<sonuc<<endl;
	}
	else if(secim==4){
		sonuc=sayi1/sayi2;
	
		cout<<"sonuc: "<<sonuc<<endl;
	}
	else{
		cout<<"Hata"<<endl;
		cout<<"Seciminizi 1-4 araliginda yapiniz!"<<endl;
	}
	cout<<endl;
	cout<<"Sonuç"<<endl;
	return 0;
}
