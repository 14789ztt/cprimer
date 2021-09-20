#include<iostream>
#include<string>
#include<vector>
#include<iterator>


using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

void lam(int a){
    int b = 9;
    auto f = [b](int a){return a+b;};
    cout << f(a) << endl; 
}

int main(int argc,char *argv[])
{
    return 0;
}
