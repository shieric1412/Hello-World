//
//  main.cpp
//  Design Pattern
//
//  Created by Eric Shi on 9/27/16.
//  Copyright © 2016 Eric Shi. All rights reserved.
//

#include <iostream>     // std::cout
#include <algorithm>    // std::find
#include <vector>       // std::vector
using namespace std;
int main () {
    // using std::find with array and pointer:
    int myints[] = { 10, 20, 30, 40 };
    int * p;
    
    p = std::find (myints, myints+4, 30);
    cout << *p << endl;
    /*if (p != myints+4)
        std::cout << "Element found in myints: " << *p << '\n';
    else
        std::cout << "Element not found in myints\n";
    
    // using std::find with vector and iterator:
    std::vector<int> myvector (myints,myints+4);
    std::vector<int>::iterator it;
    
    it = find (myvector.begin(), myvector.end(), 30);
    if (it != myvector.end())
        std::cout << "Element found in myvector: " << *it << '\n';
    else
        std::cout << "Element not found in myvector\n";*/
    
    return 0;
}
