#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;



int main(){

    int arreglo[3]={10,20,30};

    cout<< arreglo[1]<<endl;

    int *aparr =&arreglo[0];

    for (int i=0; i<3; i++){
        cout<<aparr<<" "<<*aparr<<endl;
        //Se tiene que aumentar 1
        aparr++;
        // aparr = aparr+2;
    }
    cout<<"-----VECTORES-----"<<endl;

    vector<int> vec1;
    cout<<vec1.size()<<endl;
    vec1.push_back(10);
    vec1.push_back(20);
    vec1.push_back(30);
    vec1.push_back(1010.15);
    for (int i =0; i<vec1.size(); i++){
        cout<<vec1[i]<<endl;
    }



    return 0;
}