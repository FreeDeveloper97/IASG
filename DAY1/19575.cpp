//
//  19575.cpp
//  IASG
//
//  Created by Kang Minsang on 2020/09/02.
//  Copyright © 2020 Kang Minsang. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    long long N,X,ai,i;
    long long before;
    bool first = true;

    cin>>N>>X;
    while(N >= 0)
    {
        cin>>ai>>i;
        if(first)
        {
            before = ai;
            first = false;
        }
        else
        {
            before = ((before * X) + ai);
            before = before%1000000007;
        }
        N--;
    }
    cout<<before<<"\n";
    return 0;
}
