#include<iostream>
#include<string>

using namespace std;

int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string secretMessage{} , encryptedMessage{} , decryptedMessage{};
    cout<<"Enter the secret message : ";
    getline(cin , secretMessage);

    cout<<"Encrypting the message ...\n";

    for (auto c : secretMessage)
    {
        auto position = alphabet.find(c);
        if(position == string::npos)
        {
            encryptedMessage += c;
        }
        else{
            encryptedMessage += key.at(position);
        }
    }

    cout<<"Encrypted message is : "<< encryptedMessage << endl;

    cout<<"Decrypting Message ...\n";

    for (auto c : encryptedMessage)
    {
        auto position = key.find(c);
        if(position == string::npos)
        {
            decryptedMessage += c;
        }
        else{
            decryptedMessage += alphabet.at(position);
        }
        
        
    }

    cout<<"decrypted message is : "<<  decryptedMessage << endl;



    return 0;
}