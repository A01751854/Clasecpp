#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void metodo(int x, int &y, int *z){
    x=x+5;
    y=y+10;
    *z = *z+100;
}
int main(){
    int x=0;
    int y=20;
    int *ap= &x;

    cout <<ap << endl;
    cout <<*ap <<endl;


    metodo(x,y, ap);
    cout << x<< " " <<y<< endl;



    return 0;
}