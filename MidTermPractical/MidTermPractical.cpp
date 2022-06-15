// MidTermPractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <random>
using namespace std;
void flush();
int GetInt();
void AnsCheck(int you, int ans);
void ques1();
void ques2();
void ques3();
void ques4();
int main()
{
    string ques[4] = {"What color is the sky?", "How many sides are on a Square?", "Which company owns the Marvel cinamatic universe currently?", "What comes after 19?"};
    srand(time(NULL));
    //bool var = true;
    //while (var)
    {
        int i = rand() % 4;
        cout << ques[i] << endl;
        switch (i)
        {
        case 0:
        {
            ques1();
            break;
        }
        case 1:
        {
            ques2();
            break;
        }
        case 2:
        {
            ques3();
            break;
        }
        case 3:
        {
            ques4();
            break;
        }
        }

       // cout << "End Program(0): ";
        //cin >> var;
       // flush();
    }

    system("pause");
}

void flush() {
    cin.clear();
    cin.ignore(INT_MAX, '\n');
}

void ques1() {
    cout << "0. Blue" << endl;
    cout << "1. Green" << endl;
    cout << "2. Black" << endl;
    cout << "3. Brown" << endl;
    AnsCheck(GetInt(), 0);
    GetInt();
}
void ques2() {
    cout << "0. 3" << endl;
    cout << "1. 4" << endl;
    cout << "2. 16" << endl;
    cout << "3. 1" << endl;
    AnsCheck(GetInt(), 1);
    GetInt();
}
void ques3() {
    cout << "0. Illuminations" << endl;
    cout << "1. Studio Gibly" << endl;
    cout << "2. Lucas Films" << endl;
    cout << "3. Disney" << endl;
    AnsCheck(GetInt(), 3);
    GetInt();
}
void ques4() {
    cout << "0. 19" << endl;
    cout << "1. 30" << endl;
    cout << "2. 20" << endl;
    cout << "3. 80" << endl;
    AnsCheck(GetInt(), 2);
    GetInt();
}
int GetInt() {
    int ans;
    while (true)
    {
        cin >> ans;
        if (cin.fail() || ans > 3 || ans < 0)
        {
            cout << "Not a valid Entry." << endl;
            flush();
        }
        else
        {
            flush();
            break;
        }
    }
    return ans;
}

void AnsCheck(int you, int ans) {
    if (you == ans)
    {
        cout << "That is right." << endl;
    }
    else
    {
        cout << "Wrong answer" << endl;
    }
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
