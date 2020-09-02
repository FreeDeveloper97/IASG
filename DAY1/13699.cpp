//
//  13699.cpp
//  IASG
//
//  Created by Kang Minsang on 2020/09/02.
//  Copyright © 2020 Kang Minsang. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    long long array[36];
    int left,right;
    long long temp = 0;
    array[0] = 1;
    array[1] = 1;
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        left = 0;
        right = i-1;
        while(left != i)
        {
            temp += array[left]*array[right];
            left++;
            right--;
        }
        array[i] = temp;
        temp = 0;
    }
    cout<<array[n];

    return 0;
}
