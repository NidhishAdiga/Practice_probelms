#include<iostream>
using namespace std;
struct movie {
 char name[3];
 double rating[3];
};
int main (){
  movie  name = {"nidhish"};
 movie rating ={4.37};
cout << movie.name "-" movie.rating<< endl;
return 0;
}