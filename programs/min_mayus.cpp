#include <iostream>
#include <string>

using namespace std;



string aMayus(string str) {
  for (int i = 0; str[i]; i++)
    str[i] = str[i] >= 'a' && str[i] <= 'z' ? str[i] - 32 : str[i];

  return str;
}

string aMinus(string str) {
  for (int i = 0; str[i]; i++)
    str[i] = str[i] >= 'A' && str[i] <= 'Z' ? str[i] + 32 : str[i];

  return str;
}

int main() {
    string cadena;
    cout << "Ingrese una cadena de texto: ";
    getline(cin, cadena);

    cout << "Cadena en minúsculas: " << aMinus(cadena) << endl;

    cout << "Cadena en mayúsculas: " << aMayus(cadena) << endl;

    return 0;
}
