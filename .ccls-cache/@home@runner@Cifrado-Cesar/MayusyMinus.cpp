#include <iostream>
#include <string>

using namespace std;

string a_mayus(string str) {
  for (int i = 0; str[i]; i++)
    str[i] = str[i] >= 'a' && str[i] <= 'z' ? str[i] - 32 : str[i];

  return str;
}

string a_minus(string str) {
  for (int i = 0; str[i]; i++)
    str[i] = str[i] >= 'A' && str[i] <= 'Z' ? str[i] + 32 : str[i];

  return str;
}

int main() {
    string cadena;
    cout << "Ingrese una cadena de texto: ";
    getline(cin, cadena);

    cout << "Cadena en minúsculas: " << a_minus(cadena) << endl;

    cout << "Cadena en mayúsculas: " << a_mayus(cadena) << endl;

    return 0;
}