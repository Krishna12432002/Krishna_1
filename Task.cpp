#include<iostream>
using namespace std;
class hello
{
    public:
  void display()
  {
    cout<<"display funcion "<<endl;
  }
};
int main(){
    cout<<"Hello"<<endl;
    hello h;
    h.display();
}