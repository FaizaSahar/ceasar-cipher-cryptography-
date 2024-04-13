#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char msg[100];
    int length, choice, key;

    cout << "-----------------------------------\n";
    cout << "1. Encryption \n2. Decryption \nEnter your choice: ";
    cin >> choice;
    cout << "-----------------------------------\n";
    cout << "ENTER MESSAGE: ";
    cin >> msg; //take the message as input

    cout << "ENTER KEY: ";
    cin >> key; //take the key as input
    length = strlen(msg);
    cout << "-----------------------------------\n"; 

    //For Encryption
    if (choice == 1) 
    {
        char ch;
        for (int i = 0; msg[i] != '\0'; ++i)
        {
            ch = msg[i];

            //Encrypt For Lowercase Letter
            if (ch >= 'a' && ch <= 'z')
            {
                ch = ch + key;
                if (ch > 'z')
                {
                    ch = ch - 'z' + 'a' - 1;
                }

                msg[i] = ch;
            }

            //Encrypt For Uppercase Letter
            else if (ch >= 'A' && ch <= 'Z')
            {
                ch = ch + key;
                if (ch > 'Z')
                {
                    ch = ch - 'Z' + 'A' - 1;
                }

                msg[i] = ch;
            }
        }

        cout << "ENCRYPTED MESSAGE: " << msg;
        cout << "\n-----------------------------------\n";

    }

    //For Decryption
    else if (choice == 2)
    {
        char ch;
        for (int i = 0; msg[i] != '\0'; ++i)
        {
            ch = msg[i];

            //Decrypt For Lowercase Letter
            if (ch >= 'a' && ch <= 'z')
            {
                ch = ch - key;
                if (ch < 'a')
                {
                    ch = ch + 'z' - 'a' + 1;
                }
                msg[i] = ch;
            }

            //Decrypt For Uppercase Letter
            else if (ch >= 'A' && ch <= 'Z')
            {
                ch = ch - key;
                if (ch < 'A')
                {
                    ch = ch + 'Z' - 'A' + 1;
                }
                msg[i] = ch;
            }
        }
        cout << "DECRYPTED MESSAGE: " << msg;
        cout << "\n-----------------------------------\n";

    }
}