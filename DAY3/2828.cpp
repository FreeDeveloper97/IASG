//
//  2828.cpp
//  IASG
//
//  Created by Kang Minsang on 2020/09/04.
//  Copyright © 2020 Kang Minsang. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int M,N,count,location;
    int result = 0;
    int left,right,temp;
    cin>>N>>M>>count;
    left = 0;
    right = M;
    while(count--)
    {
        cin>>location;
        if(location > right)
        {
            temp = location - right;
            result += temp;
            right += temp;
            left += temp;
        }
        else if(location <= left)
        {
            temp = left - location + 1;
            result += temp;
            left -= temp;
            right -= temp;
        }
    }
    cout<<result;
    return 0;
}
