#include<iostream>
#include<set>
#include<algorithm>
#include <iterator>
using namespace std;

int main(){
	int a;
	set<int>s;
	for (int i = 1; i <= 100; ++i)
{
s.insert(i);

}
set<int>::iterator it=s.begin();
for(;it!=s.end();it++){
	cout<<*it<<endl;
}
cout<<"saisir une valeur"<<endl;
cin>>a;
cout<<s.count(a)<<endl;


}


