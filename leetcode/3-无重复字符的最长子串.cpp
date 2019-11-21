#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution1 {
public:
    int lengthOfLongestSubstring(string s);
    
};
 
int Solution1::lengthOfLongestSubstring(string s)
{
        int pointer=0,max=0,length=0;
        char temp[100];
        int flag=0,j=0;
        while(j<s.length())
        {
            pointer=j;
            int front=0;
            flag=0;
            length=0;
            temp[front++]=s[pointer];
            pointer++,length++;
            while(1)
            {
                char t=s[pointer++];
                
                for(int i=0;i<front;i++)
                {
                    if(temp[i]==t)
                    {
                        flag=1;
                        break;
                    }
                }
                
                if(flag==1||s[pointer]=='\0')
                {
                    if(length>max)max=length;
                    if(flag!=1)length++;
                    break;
                }
                else
                {
                    temp[front++]=t;
                    length++;
                    if(length>max)max=length;
                }
                
            }
            j++;
        }
        return max;
    }

int main()
{
    string s="pwwkew";
    int length;
    Solution1 function;
    length=function.lengthOfLongestSubstring(s);
    cout<<length<<endl;
    return 0;
}
