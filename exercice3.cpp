#include<iostream>
#include<list>
#include<algorithm>
#include <iterator>
using namespace std;
int main (){
     list<int>l1;
     int n;
     int i;
       do{
           
       cout<<" choisis une entire ";
       cin>>n;
       l1.push_back(n);
     i++;

   }while(i!=5);
         




l1.sort();
list<int>::iterator it=l1.begin();
for(;it!=l1.end();it++){
	cout<<*it<<endl;
}
return 0;
	}
