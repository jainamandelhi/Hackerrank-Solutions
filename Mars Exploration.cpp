#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
    int count1=0;
    for(int i=0;i<s.size();i++)
    {
        if(i%3==0 || i%3==2)
        {
            if(s[i]!='S')
                count1++;
        }
        else
        {
            if(s[i]!='O')
                count1++;
        }
    }
    return count1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
