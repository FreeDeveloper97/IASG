//
//  10819.cpp
//  IASG
//
//  Created by Kang Minsang on 2020/09/05.
//  Copyright © 2020 Kang Minsang. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int array[8] = {0};
    int n;
    int sum = 0;
    int temp = 0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    sort(array,array+n);
    do
    {
        for(int i=0; i<n-1; i++)
        {
            temp += abs(array[i] - array[i+1]);
        }
        sum = max(sum,temp);
        temp = 0;
    }while(next_permutation(array, array+n));

    cout<<sum;
}
