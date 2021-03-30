#include <iostream>
#include <string>

using namespace std;

class canbo
{
private:
    string hoten;
    int luongcoban;

public:
    void nhapbp()
    {
        cout << "Nhap ten can bo: ";
        getline(cin, hoten);
        // cin.ignore();
        cout << "Nhap luong co ban: ";
        cin >> this->luongcoban;
        cin.ignore();
        cout << endl;
    }
    void xemmh()
    {
        cout << "Ten can bo: " << hoten << " -> luong co ban: " << luongcoban << endl;
    }
    string gethoten()
    {
        return this->hoten;
    }
    int getluongcoban()
    {
        return this->luongcoban;
    }
    void sethoten(string hoten)
    {
        this->hoten = hoten;
    }
    void setluongcoban(int luongcoban)
    {
        this->luongcoban = luongcoban;
    }
};

class danhsach
{
private:
    canbo a[100];
    int tscanbo;

public:
    void nhapbp()
    {
        cout << "Nhap tong so can bo: ";
        cin >> tscanbo;
        cin.ignore();
        for (size_t i = 0; i < tscanbo; i++)
        {
            a[i].nhapbp();
        }
    }
    void xemmh()
    {
        cout << "Tong so can bo " << tscanbo << endl;
        for (size_t i = 0; i < tscanbo; i++)
        {
            cout << i << ". ";
            a[i].xemmh();
        }
    }

    void sapxepgiam()
    {
        for (int i = 0; i < tscanbo - 1; ++i)
            for (int j = 0; j < tscanbo - i - 1; ++j)
                if (a[j].getluongcoban() < a[j + 1].getluongcoban())
                {
                    string temphoten = a[j].gethoten();
                    a[j].sethoten(a[j + 1].gethoten());
                    a[j + 1].sethoten(temphoten);
                    int templuongcoban = a[j].getluongcoban();
                    a[j].setluongcoban(a[j + 1].getluongcoban());
                    a[j + 1].setluongcoban(templuongcoban);
                }
    }

    void bangluong();
};

class luongcb : public canbo
{
private:
    int ngaycong;
    int luong;
};
class bangluong
{
private:
    int thang;
    int tongluong;
    int tscanbo;
    luongcb b[100];

public:
    void nhapbp();
    void xemmh();
};

int main() {
    
}