#include<string>
#include<iostream>
#include<exception>
#include <vector>

using namespace std;





int main()
{
    string b;
    int further=0;
    int newFurther=-1;
    cout<<"Give a string."<<endl;
    cin>>b;
    //vector<char> v(b.begin(),b.end());
    vector<char> v;
    for(auto& x:b)
    {
        v.push_back((char)tolower(x));
    }

    int e=v.size();
    if(e>1 && e<300000)
    {
        for(int t=0; t<e-1; t++)
        {
            char first=v[t];
            char second=v[t+1];

            for(int i=t+1; i<e-1; i++)
            {
                if(v[i]==first && v[i+1]==second)
                {
                    newFurther=i-t;
                    if(newFurther>further)
                    {
                        further=newFurther;
                    }
                }
            }
        }
    }
    else
    {
        return -1;
    }

    cout<<further;
    return 1;
}
