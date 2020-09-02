//
//  9660.cpp
//  IASG
//
//  Created by Kang Minsang on 2020/09/02.
//  Copyright © 2020 Kang Minsang. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    long long n;
    int rest;
    cin>>n;
    rest = n%7;
    if(rest == 0)
        cout<<"CY";
    else if(rest == 2)
        cout<<"CY";
    else
        cout<<"SK";
    return 0;
}
