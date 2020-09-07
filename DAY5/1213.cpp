//
//  1213.cpp
//  IASG
//
//  Created by Kang Minsang on 2020/09/07.
//  Copyright © 2020 Kang Minsang. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    //A : 65 -> 0
    int count[26] = {0};
    int num = 0;
    int index = 0;
    int oddCount = 0;
    int evenCount = 0;
    int temp = 0;
    string name;
    cin>>name;
    for(int i=0; i<name.size(); i++)
    {
        count[(int)name[i]-65]++;
    }
    //총개수, 홀수 카운트 증가
    for(int i=0; i<26; i++)
    {
        if(count[i] != 0)
        {
            num++;
            if(count[i]%2 == 1)
            {
                oddCount++;
                index = i;
            }
            else
                evenCount++;
        }
    }
    //한문자만 입력된 경우 그대로 출력
    if(num == 1)
    {
        for(int i=0; i<26; i++)
        {
            if(count[i] != 0)
            {
                temp = count[i];
                while(temp--)
                    cout<<(char)(i+65);
            }
        }
        return 0;
    }
    //두문자 이상 -> 판별
    else if(num == 0)
    {
        cout<<"I'm Sorry Hansoo";
    }
    else
    {
        //홀수 문자가 1개인 경우 : 나머지 반전
        if(oddCount == 1)
        {
            for(int i=0; i<26; i++)
            {
                if(count[i] != 0)
                {
                    temp = count[i]/2;
                    while(temp--)
                        cout<<(char)(i+65);
                }
            }
            cout<<(char)(index+65);
            for(int i=25; i>=0; i--)
            {
                if(count[i] != 0)
                {
                    temp = count[i]/2;
                    while(temp--)
                        cout<<(char)(i+65);
                }
            }
        }
        //홀수가 없는경우
        else if(oddCount == 0)
        {
            for(int i=0; i<26; i++)
            {
                if(count[i] != 0)
                {
                    temp = count[i]/2;
                    while(temp--)
                        cout<<(char)(i+65);
                }
            }
            for(int i=25; i>=0; i--)
            {
                if(count[i] != 0)
                {
                    temp = count[i]/2;
                    while(temp--)
                        cout<<(char)(i+65);
                }
            }
        } //정상 종료
        //비정상 종료
        else
        {
            cout<<"I'm Sorry Hansoo";
        }
    }
    return 0;
}
