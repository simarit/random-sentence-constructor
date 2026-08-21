// sentenceConstructor.cpp : This file contains the 'main' function. Program execution begins and ends there.

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <cstring>
#include <ctime>
#include <cmath>
#include <cctype>
#include <cstdlib>

using namespace std;

int main() {

    char article[5][5] = { "the", "a", "one", "some", "any" };
    char noun[5][5] = { "boy", "girl", "dog", "town", "car" };
    char verb[5][8] = { "drove", "jumped", "ran", "walked", "skipped" };
    char preposition[5][6] = { "to", "from", "over", "under", "on" };
    char sent[36];
    int i;
    int num = 0;
    srand(time(NULL));

    for (i = 1; i <= 10; i++)
    {
        num = rand() % 5;
        strcpy(sent, article[num]);

        strcat(sent, " ");
        num = rand() % 5;
        strcat(sent, noun[num]);

        strcat(sent, " ");
        num = rand() % 5;
        strcat(sent, verb[num]);

        strcat(sent, " ");
        num = rand() % 5;
        strcat(sent, preposition[num]);

        strcat(sent, " ");
        num = rand() % 5;
        strcat(sent, article[num]);

        strcat(sent, " ");
        num = rand() % 5;
        strcat(sent, noun[num]);

        strcat(sent, ".");

        sent[0] = toupper(sent[0]);

        cout << sent << endl;
    }

    return 0;
}