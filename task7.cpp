#include <iostream>
using namespace std;
main(){
string name;
float matric ;
float inter;
float ecat;
float aggregate;
cout << "Enter your name : ";
cin>> name;
cout << "Enter your matricNum: ";
cin>> matric;
cout << "Enter your interNum: " ; 
cin>>inter;
cout << "Enter your ecatNum: ";
cin>> ecat;
aggregate =(matric/1100*10)+(inter/550*40)+ (ecat/400*50) ;
cout << "Your aggregate is: "<<aggregate;

}

