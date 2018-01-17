#include <iostream>
#include <string>
using namespace std;

class sendal {
	public:
	void perbedaan(string jenis);
	int harga;
	string merek;
};

int main(){
		sendal nipon, nike, adidas;
		
	nipon.merek="nipon sendal masyarakat baik";
	nike.merek="nike sandal masyarakat keren";
	adidas.merek="adidas sandal masyarakat terbaik dan keren ";
	
	nipon.harga=5000;
	nike.harga=25000;
	adidas.harga=100000;
	
cout <<"||||||||||||||||||||||||||||||||||||"<<endl;
cout <<"|           MOnggo Mampir          | "<<endl;
cout <<"||||||||||||||||||||||||||||||||||||"<<endl;
cout <<endl;

cout << "Sandal Nipon"<<endl;
cout << (nipon.merek)<<endl;
nipon.perbedaan("tampilan tidak tapi baik tapi nyaman di pakai");
cout <<endl;

cout << "Sandal Nike"<<endl;
cout << (nike.merek)<<endl;
nike.perbedaan("tampilan lumayan dan juga nyaman di pakai");
cout <<endl;

cout << "Sandal Adidas"<<endl;
cout << (adidas.merek)<<endl;
adidas.perbedaan("tampilan trendy dan keren dan pasti nyaman di pakai");
}

void sendal::perbedaan(string jenis){
	cout << "perbedaannya "<<jenis<<" !!"<<endl;
	cout << "harganya Rp "<<harga<<endl;
}
