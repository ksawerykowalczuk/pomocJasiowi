#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int rozmiar;
    string wejscie;
    string docelowy;
    cin >> rozmiar;
    cin >> wejscie;
    cin >> docelowy;
    int i = 0;
    int licznik = 0;
    while (wejscie != docelowy)
    {
        if (wejscie[i] == docelowy[i])
        {
            i++;
        }
        else
        {
            int j = 0;
            while (j < rozmiar)
            {
                if (wejscie[i] == docelowy[j])
                {
                    for (int k = 0; k < abs(j - i); k++)
                    {
                        if (i > j)
                        {
                            char temp = docelowy[j+k - 1];
                            docelowy[j+k - 1] = docelowy[j+k];
                            docelowy[j+k] = temp;
                        }
                        else
                        {
                            char temp = docelowy[j-k];
                            docelowy[j-k] = docelowy[j-k - 1];
                            docelowy[j-k - 1] = temp;
                        }
                    }

                    break;
                }
                else
                {
                    j++;
                }
            }
        }
    }
    cout << licznik;
}



/*
ABC
BAC
BCA

5
ABCDE
BACDE
BADCE
2

5
ABCDE
BACDE
BADCE
BADEC
BAEDC
BEADC
EBADC
EBADC
7

ABCDE
ABCED
ABECD
AEBCD
EABCD
EBACD
EBADC
6


ABCDE
baCDE
BcaDE
cbADE

EBADC
*/