// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    unsigned char al[] = { '�', '�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�' };
    /*cout << int(al[0]) << endl;
    return 0;*/
    /*for (int i = 0; i < 66; i++)
    {
        std::cout << al[i] << ' ' << oct << int(al[i]) << ' ' << hex << int(al[i]) << endl;
    }*/

    //cout << "\n\n\n";
    int counter = 192; // � ������� ASCII ������� '�' ����� ����� 192
    unsigned char alf[66] = ""; // ������ ��� ��������

    for (int i = 0; i < 66; i++)
    {
        if (counter == 197 || counter == 229) // ������� ����� '�' � '�'
        {
            alf[i] = counter;

            if (counter == 197)
                alf[i + 1] = '�';
            else
                alf[i + 1] = '�';
            i++;
            counter++;
        }
        else
        {
            alf[i] = counter;
            counter++;
        }
    }
    
    for (int i = 0; i < 33; i++)
    {
        std::cout << alf[i] << ' ' << oct << int(alf[i]) << ' ' << hex << int(alf[i]) << endl;
        std::cout << "  " << oct << int(al[2 * i]) << ' ' << hex << int(al[2 * i]) << "\n" << endl;
        std::cout << alf[i + 33] << ' ' << oct << int(alf[i + 33]) << ' ' << hex << int(alf[i + 33]) << endl;
        std::cout << "  " << oct << int(al[2 * i + 1]) << ' ' << hex << int(al[2 * i + 1]) << "\n" << endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
