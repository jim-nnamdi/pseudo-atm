#include<iostream>
#include<string>
using namespace std;

template<typename T> T Add(const T& n1, T n2) {
    T tsum;
    tsum = n1 + n2;
    return tsum;
}

int main(){
    cout << "Result: " << Add(2,3) << endl;
}