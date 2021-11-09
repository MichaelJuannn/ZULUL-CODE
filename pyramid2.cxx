#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main(){
	
	int p,l,n,m,s,x,y,o,r;
	string z;
	cin>>p;
	cin>>l;
	n = 1 ;
	s = p ;
    x = l ;
    o = 0;

while (n <= s){
    while (y <= x)
   {
    cout << ".";
      while ( r <= l) {
      	cout<<"*";
      	r++;
      }

    y++;
    r = l - y ;
   }
   cout<<""<<endl;
   o = o - 1;
   y = o;
    n++;
}


	m = l % 5;
	p = p * l;
	cout<< p ;
	
	
	
	if (m < 1) {
		 	z="Odd";
		} else {
			z="Even";
		}
	
	cout<<z;

	
	
	
}