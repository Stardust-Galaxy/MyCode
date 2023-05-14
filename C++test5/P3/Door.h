#pragma once

#include<iostream>

using namespace std;

class Door
{
public:
    Door() :openOrClose(false) { cout << "Create a door" << endl; }
    void Open() {
        if (!IsOpened()) {
            openOrClose = true;
            cout << "The Door is now opened!" << endl;
        }
        else {
            cout << "The Door is already opened!"<< endl;
        }
    }
    void Close() {
        if (IsOpened()) {
            openOrClose = false;
            cout <<"The Door is shut!" << endl;
        }
        else {
            cout << "The Door is already closed!" << endl;
        }
    }
    bool IsOpened() const { return openOrClose; }
private:
    bool openOrClose;
};
