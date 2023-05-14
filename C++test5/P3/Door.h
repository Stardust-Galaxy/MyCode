#pragma once

#include<iostream>

using namespace std;

class Door
{
public:
    Door() :openOrClose(false) { cout << "����һ����" << endl; }
    void Open() {
        if (!IsOpened()) {
            openOrClose = true;
            cout << "�ű�����" << endl;
        }
        else {
            cout << "�ſ����أ�" << endl;
        }
    }
    void Close() {
        if (IsOpened()) {
            openOrClose = false;
            cout << "�ű�������" << endl;
        }
        else {
            cout << "�Ź����أ�" << endl;
        }
    }
    bool IsOpened() const { return openOrClose; }
private:
    bool openOrClose;
};
