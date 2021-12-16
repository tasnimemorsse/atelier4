#include<iostream>
using namespace std;
int main (){
	string st("150220010300");//donner la valeur du string
	
		if(st.length() != 12)               //la vérification du nombre des chiffres
	cout<<"la date est incorrect"<<endl;
	else  {
        cout << "Date  : " << st.substr(0,2) << "/" << st.substr(2,2) << "/" << st.substr(4,4) << endl;//afficher la date
        cout << "Heure : " << st.substr(8,2) << "h" << st.substr(10,2) << endl;//afficher l'heure
}

}
