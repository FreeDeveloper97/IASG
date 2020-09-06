//
//  17262.cpp
//  IASG
//
//  Created by Kang Minsang on 2020/09/04.
//  Copyright © 2020 Kang Minsang. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,s,e;
    int max=-1,min=100000;
    int result;

    cin>>n;
    while(n--)
    {
        cin>>s>>e;
        if(s > max)
            max = s;
        if(e < min)
            min = e;
    }
    result = max-min;
    if(result < 0)
        result = 0;
    cout<<result;
    return 0;
}
