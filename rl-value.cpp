#include <iostream>
#include <array>
#include <vector>
#include <map>
#include <set>
#include <typeinfo>
#include <string>
#include <ctime>
#include <algorithm>
#include <deque>
#include <functional>
#include "numbers.h"

using namespace std;


void f(vector<int>& coll, int&& a, int& b, const int& c){

    coll.push_back(a);

    cout << "przed zmianiana wartsoci b: " << b << endl;
    b *= 5;
    coll.push_back(b);

    coll.push_back(c);

    cout << "podwojne && czyli 10 * 2 -> a: "<<a << endl;
    cout << "po zmianie wartsoci b: " << b << endl;
    cout << "stala wartosc c: "<<c << endl;
}


int main(){

vector<int>v{};
int a1,a2;
a1 = a2 = 10;

f( v , a1 + a2 , a1 , a2);
printSTL(v , "," , true);

cout << "a1 : " << a1 << endl;
cout << "a2 : " << a2 << endl;

    return 0;
}

// L-WARTOSC -- istnieje dluzej, niz 1-o wyrazenie; mozna podac adres..
// R-WARTOSC -- istnieje tylko, przez 1-o wyrazenie np.a++ lub a+b=r-wartosc
 