#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    int arr[4]={0},sum1=0;
    for(int i=0;i<n;i++)
    {
        if(password[i]>='a' && password[i]<='z')
            arr[0]++;
        else if(password[i]>='A' && password[i]<='Z')
            arr[1]++;
        else if(password[i]>='0' && password[i]<='9')
            arr[2]++;
        else if(password[i]=='!' || password[i]=='@' || password[i]=='#' || password[i]=='$' || password[i]=='%' || password[i]=='^' || password[i]=='&' || password[i]=='*' || password[i]=='(' || password[i]==')' || password[i]=='-' || password[i]=='+')
            arr[3]++;
    }
    for(int i=0;i<4;i++)
    {
        if(arr[i]==0)
            sum1++;
    }
    return max(6-n,sum1);
    // Return the minimum number of characters to make the password strong

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
