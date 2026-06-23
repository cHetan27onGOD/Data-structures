#include<iostream>
using namespace std;
int main(){
	int length {};
	int breadth {};
	int area,perimeter;
        cin>>length>> breadth;
        area=length*breadth;
        perimeter=2*(length+breadth);
        cout<< "Area = "<<area<<endl;
        cout<< "Perimeter = "<<perimeter<<endl;


}