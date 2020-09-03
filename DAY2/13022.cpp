//
//  13022.cpp
//  IASG
//
//  Created by Kang Minsang on 2020/09/03.
//  Copyright © 2020 Kang Minsang. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    char input = ' ';
    int count[4] = {0};
    
    while(input != '\n')
    {
        cin.get(input);
        //주기상 처음, w 입력
        if(input == 'w')
        {
            count[0]++;
        }
        //종료 입력
        else if(input == '\n')
        {
            //주기상 정상종료
            if(count[0] == 0)
            {
                cout<<1;
                return 0;
            }
            //주기상 비정상종료
            else
            {
                cout<<0;
                return 0;
            }
        }
        //그 외 문자 입력
        else
        {
            if(input == 'o')
            {
                count[1]++;
                while(count[1] != count[0])
                {
                    cin.get(input);
                    if(input != 'o')
                    {
                        cout<<0;
                        return 0;
                    }
                    count[1]++;
                }
                while(count[2] != count[0])
                {
                    cin.get(input);
                    if(input != 'l')
                    {
                        cout<<0;
                        return 0;
                    }
                    count[2]++;
                }
                while(count[3] != count[0])
                {
                    cin.get(input);
                    if(input != 'f')
                    {
                        cout<<0;
                        return 0;
                    }
                    count[3]++;
                }
                //정상적으로 반복이 종료된 경우
                for(int i=0; i<4; i++)
                    count[i] = 0;
            }
            //이상한 문자 입력
            else
            {
                cout<<0;
                return 0;
            }
        }
        
    }
    return 0;
}
