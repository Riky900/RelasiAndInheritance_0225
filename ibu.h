#ifndef IBU_H
#define IBU_H
#include <vector>

class ibu
{
public:
    string nama;
    vector<anak*> daftar_anak;

    ibu(string pNama) : nama(pNama)
    {
        cout << "Ibu \"" << nama << "\" ada\n";
    }
    ~ibu()
    {
        cout << "Ibu \"" << nama << "\" tidak ada\n";
    }
    void tambahAnak(anak*);
    void cetakAnak();
};
void Ibu::tambahAnak(anak *pAnak)
{
    daftar_anak.push_back(pAnak);
}
void Ibu::cetakAnak()
{
    cout << "Daftar Anak Dari Ibu\"" << this->nama << "\":\n";

    for (auto &a : daftar_anak)
    {
        cout << a ->nama << "\n";
    }
    cout << endl;
    for (int i = 0; i < daftar_anak.size(); i++){
        cout << daftar_anak[i]->nama << endl;
    }
    cout << endl;
}
#endif