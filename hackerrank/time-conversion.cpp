#include bitsstdc++.h

using namespace std;


  Complete the 'timeConversion' function below.
 
  The function is expected to return a STRING.
  The function accepts STRING s as parameter.
 

string timeConversion(string s) {
if(s[8]=='P' && (s[0] == '1' && s[1] == '2')) {
return s.substr(0,8);
}
if(s[8]=='A' && (s[0]=='1'&& s[1]=='2'))
{
    s[0] = '0';
    s[1] = '0'; 
    return s.substr(0,8);
}
if(s[8]=='P' && !(s[0] == '1' && s[1] == '2')) {
string numero = s.substr(0,2);
int minumero = stoi(numero);
int numPasado = minumero+12;
string hora = to_string(numPasado);
s[0] = hora[0];
s[1] = hora[1];
return s.substr(0,8);
}

return s.substr(0,8);

}
int main()
{
    ofstream fout(getenv(OUTPUT_PATH));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout  result  n;

    fout.close();

    return 0;
}
