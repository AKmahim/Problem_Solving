#include<iostream>
using namespace std;

class Complex{
    int real,img;
public:
    Complex(){
        real= 0;
        img = 0;
    }
    Complex(int r,int i){
        real = r;
        img = i;
    }
    Complex add(Complex c1,Complex c2){
        Complex temp;
        temp.real = c1.real + c2.real;
        temp.img = c1.img + c2.img;
        return temp;
    }
    void display(){
        cout<<"Real part is : "<< real<<endl;
        cout << "Imaginary part is : "<<img<<endl;
    }
};
int main()
{
    Complex c1(2,3),c2(4,5),c3;
    c3 = c3.add(c1,c2);
    c3.display();
}
