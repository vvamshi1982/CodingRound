#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     int Counts[26];
    int diffcount =0;
    int NumChars=0;
    string S;
    cin >> S;
    if (S.size() == 1) 
        {
        cout << "YES" <<'\n';
            return 0;
    }
    else if (S.size() == 2)
      {
        if (S[0] != S[1])
            
            {
             cout << "YES" <<'\n';
            return 0;
        }
            
    }
    for (int i=0;i< 26;i++)
    {
       Counts[i] = 0;    
    }
    for (int i=0; i< S.size();i++)
    {
      Counts[S.at(i) -'a']++;   

    }
    
    
    //std::sort(std::begin(Counts), std::end(Counts));
    int PrevCount = Counts[0];
    for (int j=1;j<26;j++)
    {
       if (Counts[j] > 0 && PrevCount > 0 && 
           Counts[j] != PrevCount)
           diffcount++;
        if (diffcount > 1) break;
        if (PrevCount == 0 && Counts[j] > 0)
            PrevCount = Counts[j];
    }
    if (diffcount <= 1)
        cout << "YES" <<'\n';
    else
        cout << "NO" <<'\n';
    return 0;
}
