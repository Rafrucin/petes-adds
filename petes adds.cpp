//SPOJ submission 23585091 (CPP14)plaintext list.Status: AC, problem BFN1, contest SPOJPL.By ravruc(ravruc), 2019 - 04 - 06 17 : 44 : 17.
#include <iostream>
#include <string>


using namespace std;

bool sprawdz(int kk)
{
    int licz = 0;
    string sa = to_string(kk);
    int dlug = sa.length();
    for (int i = 0; i < dlug / 2; i++)
    {
        //cout << sa << " " << dlug << " " <<sa[i] << " " << sa[dlug-1-i] << endl;
        if (sa[i] != sa[dlug - 1 - i])
        {
            licz++;
            break;
        }
    }
    return licz;
}

int dodawacz(int ww)
{
    string as = to_string(ww);
    string odw = as;
    for (int i = 0; i < as.length(); i++)
    {
        odw[i] = as[as.length() - 1 - i];
    }
    //cout << as << "  " << odw  << " " << stoi (odw) + ww << endl;
    return stoi(odw) + ww;

}



int main()
{
    int prob;
    cin >> prob;
    for (int i = 1; i <= prob; i++)
    {
        int ia;
        int licznik = 0;
        cin >> ia;
        if (sprawdz(ia) == 0) { cout << ia << " " << licznik << endl;continue; }
        else
        {
            do { int k = dodawacz(ia); ia = k; sprawdz(ia); licznik++; } while (sprawdz(ia) != 0);
        }
        cout << ia << " " << licznik << endl;
    }




    return 0;
}
