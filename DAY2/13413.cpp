//
//  13413.cpp
//  IASG
//
//  Created by Kang Minsang on 2020/09/03.
//  Copyright © 2020 Kang Minsang. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(NULL);
    int t,n;
    string before;
    string after;
    int Wcount = 0;
    int Bcount = 0;
    cin>>t;
    while(t--)
    {
        cin>>n>>before>>after;
        for(int i=0; i<n; i++)
        {
            if(after.at(i) != before.at(i))
            {
                if(before.at(i) == 'W')
                    Wcount++;
                else
                    Bcount++;
            }
        }
        if(Wcount > Bcount)
            cout<<Wcount<<"\n";
        else
            cout<<Bcount<<"\n";
        Wcount = 0;
        Bcount = 0;
    }
    return 0;
}


