#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string teks[4];
	for(int i = 0; i < 4; i++){
		cin >> teks[i];
		
	}
	ofstream writefile("barang.txt");
	for(int i = 0; i < 4; i++){
		writefile << teks[i] << "\n";
	}
}

//CREATE AND WRITE FILE 
//#include <iostrean>
//#include <fstream>
//using namespace std;
//
//int main(){
//	oftream outfile("example.txt");
//	outfile << "nama saya pandu";
//	outfile.close();
//}

//READ FILE
//#include<iostream>
//#include<fstream>
//using namespace std;
//
//int main(){
//	string teks;
//	ifstream readfile("example.txt");
//	while(getline(readfile, teks)){
//		cout<<teks;
//	}
//	readfile.close();
//}
