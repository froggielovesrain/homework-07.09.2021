#include <bits/stdc++.h>
using namespace std;

int main()
{
		int dzialanie;
	cout<<"wpisz typ dzialania, ktore chcesz wykonac(dodawanie=1, odejmowanie=2, mnozenie=3, dzielenie=4) i wcisnij enter: \n"; 
	cin>>dzialanie;
	//nie wiem jak inaczej to zrobic, wyskakuje error za kazdym razem jak uzywam string zeby nie musiec wpisywac liczb tylko samo "dodawanie", "odejmowanie" itd	
    
	cout<<"wpisz liczbe pierwsza i wcisnij enter\n";
	    
	int liczba1;
		cin>>liczba1;
		
    cout<<"wpisz liczbe druga i wcisnij enter\n";
    int liczba2;
		cin>>liczba2;
		
		cout<<"wynik twojego dzialania to:\n";
//nie wiem tez jak zrobic zeby nie byly te liczby w nowej linijce wiec robie wszystko w nowej
	
	
    	
	if(dzialanie == 1){
	cout<<(liczba1+liczba2);
	
    }else if(dzialanie == 2){
	cout<<(liczba1-liczba2);
	
	}else if(dzialanie == 3){
	cout<<(liczba1*liczba2);
	
	}else{
	(dzialanie == 4);
	cout<<(liczba1/liczba2);
   }


	return 0;
}
