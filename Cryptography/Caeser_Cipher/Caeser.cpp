#include<bits/stdc++.h>
using namespace std;

string encrypt(string t, int s)
{
    string res = "";

    for(int i = 0; i < t.length(); i++){
        if(isupper(t[i]))
            res += char((((int(t[i]) + s) - 65) % 26) + 65);

        else
            res += char((((int(t[i]) + s) - 97) % 26) + 97);
    }

    return res;
}

string decrypt(string t, int s)
{
    string res = "";

    for(int i = 0; i < t.length(); i++){
        if(isupper(t[i]))
            res += char((((int(t[i]) - s) - 65 + 26) % 26) + 65);

        else
            res += char((((int(t[i]) - s) - 97 + 26) % 26) + 97);
    }

    return res;
}

int main()
{
    string text, encrypted, decrypted;
    cin >> text;

    int s;
    cin >> s;

    cout << "Given Text: " << text << endl;
    cout << "Shift: " << s << endl;

    encrypted = encrypt(text, s);
    cout << "Encrypted text: " << encrypted << endl;

    decrypted = decrypt(encrypted, s);
    cout << "Decrypted text: " << decrypted << endl;

    return 0;
}
