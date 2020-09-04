//
//  16120.cpp
//  IASG
//
//  Created by Kang Minsang on 2020/09/04.
//  Copyright © 2020 Kang Minsang. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int Pcount = 0;
    string input;
    cin>>input;

    for(int i=0; i<input.size(); i++)
    {
        if(input[i] == 'P')
        {
            Pcount++;
        }
        else if(input[i] == 'A')
        {
            if(Pcount >= 2 && input[i+1] == 'P')
            {
                Pcount--;
                i++;
            }
            else
            {
                cout << "NP"<<"\n";
                return 0;
            }
        }
        else
        {
            cout << "NP"<<"\n";
            return 0;
        }
    }
    if(Pcount == 1)
        cout<<"PPAP"<<"\n";
    else
        cout<<"NP"<<"\n";
    return 0;
}
