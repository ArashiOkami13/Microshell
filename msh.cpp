#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

main()
{
    int i, exit = 1;
    string input;
    vector <string> pipes;
    string intermediate;

    do
    {
        cout << "cssc2042% ";
        getline(cin, input);

        stringstream check(input);
        while(getline(check, intermediate, '|'))
        {
            pipes.push_back(intermediate);
        }
        if(pipes[0] == "exit")
            exit = 0;

        for(int i = 0; i < pipes.size(); i++)   //to verify items get tokenized
            cout << pipes[i] << '\n';

        pipes.clear();
    }while(exit);
}
