//construcor and desrtuctor using shared pinter
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class myClass
{
    public:
    myClass(){
        cout<<"construcor called"<<endl;
    }
    ~myClass(){
        cout<<"destructor called"<<endl;
    }
    void display()const{
       cout<<"display class "<<endl;
    }
};
void useShared(shared_ptr<myClass>ptr){
    cout<<"insdie this function"<<endl;
    ptr->display();
}

int main()
{
   shared_ptr<myClass>ptr1=make_shared<myClass>();
   ptr1->display();
   shared_ptr<myClass>ptr2=ptr1;
   ptr2->display();
   cout<<ptr1.use_count()<<endl;//2
   useShared(ptr1);
   cout<<ptr1.use_count()<<endl;
    return 0;
}