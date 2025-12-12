#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ifstream dane("dane.txt");
    ofstream wynik("wynik.txt");
    string napis, wz = "TAK";
    int licz = 0;
    while (getline(dane, napis)) {
        for (int i = 0; i < napis.size() -(wz.size()-1); i++) {
            licz = 0;
            for (int j = 0; j < wz.size(); j++) {
                if (napis[i + j] == wz[j] || napis[i + j] == wz[j] -32 || napis[i + j] == wz[j] +32) {
                    licz++;
                }
            }
            if (licz == wz.size()) {
                wynik << i << " ";
            }
        }
        wynik << endl;
    }

}
