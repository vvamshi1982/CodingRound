#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    string Temp="";
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    char TempChr;
    
    for (int i=0;i<n;i++)
    {
        if (s.at(i) == '-')
        Temp+= s.at(i);
        else
        {
            TempChr = s.at(i);
            if (TempChr >= 97 && TempChr <= 122) 
                Temp+= (char) ((((TempChr-'a')+k)%26) + 'a');
            else if   (TempChr >= 'A' && TempChr <= 'Z') 
                Temp+= (char )((((TempChr-'A')+k)%26) + 'A');
            else
                Temp+= s.at(i);
        }
    }
    cout << Temp;
    return 0;
}
