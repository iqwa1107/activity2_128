#include <iostream>
using namespace std;

float persegipanjang(float p, float l) {
    return p * l;
}

float lingkaran(float r) {
    return 3.14 * r * r;
}

float segitiga(float a, float t) {
    return 0, 5 * a * t;
}

int main()
{
    float nilai[10];
    float panjang, lebar, jejari, alas, tinggi;
    int pillihan;
    bool menu;
    menu = true;
    while (menu == true)
        {
            cout << "\n\==============";
            cout << "\n M E N U ";
            cout << "\n\==============";
            cout << "\n 1. luas persegi panjang ";
            cout << "\n 2. luas lingkaran ";
            cout << "\n 3. luas segitiga ";
            cout << "\n 4. array ";
            cout << "\n 5. keluar ";
            cout << "\n Pilihan (1/2/3/4/5) : ";
            cin >> pillihan;


             
            switch (pillihan)
            {
            case 1:
                cout << "masukan panjang = ";
                cin >> panjang;
                cout << "masukan lebar = ";
                cin >> lebar;
                cout << "n\ Luas Persei panjang = " << persegipanjang(panjang, lebar);
                break;
            case 2:
                cout << "masukan jari-jari =";
                cin >> jejari;
                cout << "n\ Luas lingkaran = " << lingkaran (jejari);
                break;
            case 3:
                cout << "masukan alas =";
                cin >> alas;
                cout << " masukan tinggi = ";
                cin >> tinggi;
                cout << "n\ Luas lingkaran = " << segitiga (alas, tinggi);
            case 4:
                cout << " mengisi aray\n";
                for (int i = 0; i < 10; i++) {
                    cout << "nilai ke-" << (i + 1) << " : ";
                    cin >> nilai[i];
                }
                cout << "masukan isi aray\n";
                for (int i = 0; i< 10; i++) {
                    cout << "\nNilai ke-" << (i + 1) << ": " << nilai[i];
                }
                break;
            case 5:
                menu = false;
            default: 
                cout << "pilih salah!!";
                break;
            }
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
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln fil
