#include<iostream>
#include<set>
using namespace std;
int main()
{
     set<int> s= {1,2,3,4};
     //adding
     s.insert(10);
     s.insert(20);
     s.insert(30);
     s.insert(30);//duplicate element
     cout<<s.size()<<endl;//7(no duplicte allowed in set)
     //erase
     s.erase(3);//delete perticular elemnt 
     for(int i : s ){
        cout << i <<" ";
     }
     cout<<endl;
     //check if elemnt exixts using find function
     if(s.find(30)!=s.end()){
        cout<<"elemnt found"<<endl;
     }
     else
     cout<<"element not there"<<endl;
     //cout<<s[3];//no random access 
    return 0;
}
