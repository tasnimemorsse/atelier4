#include<iostream>
#include<list>
#include<algorithm>
#include <iterator>
using namespace std;
int main (){
     list<string>l1;
         

l1.push_back("tasnime");
l1.push_back("morsse");
l1.push_back("20 ans");







l1.sort();
list<string>::iterator it=l1.begin();
for(;it!=l1.end();it++){
	cout<<*it<<endl;
}
return 0;
	}
