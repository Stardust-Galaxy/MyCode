#pragma once

#include<iostream>

using namespace std;

class Door
{
public:
    Door() :openOrClose(false) { cout << "构造一扇门" << endl; }
    void Open() {
        if (!IsOpened()) {
            openOrClose = true;
            cout << "门被打开了" << endl;
        }
        else {
            cout << "门开着呢！" << endl;
        }
    }
    void Close() {
        if (IsOpened()) {
            openOrClose = false;
            cout << "门被关上了" << endl;
        }
        else {
            cout << "门关着呢！" << endl;
        }
    }
    bool IsOpened() const { return openOrClose; }
private:
    bool openOrClose;
};
