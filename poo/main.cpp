#include <cmath>
#include <iostream>
#include <string>

using namespace std;

bool es_primo(int n)
{
  if (n <= 1)
    return false;

  for (int i = 2; i <= sqrt(n); i++)
    if (!(n % i))
      return false;

  return true;
}

string cifrar(string mensaje, int clave)
{
  string cifrado = "";
  // cif += ((c - 'A' + clave) % 26) + 'A'; Mayusculas
  for (char c : mensaje)
    cifrado = c >= 'a' &&c <= 'z' ? cifrado += ((c - 'a' + clave) % 26) + 'a'
                                  : cifrado += c;

  return cifrado;
}

string descifrar(string cifrado, int clave)
{
  string mensaje = "";
  // mes += (char) ((c - 'A' - clave) % 26) + 'A'; Mayusculas

  for (char c : cifrado)
    mensaje = c >= 'a' &&c <= 'z'
                  ? mensaje += ((c - 'a' + (26 - clave)) % 26) + 'a'
                  : mensaje += c;

  return mensaje;
}

string a_minusculas(string cadena)
{
  for (int i = 0; cadena[i]; i++)
    cadena[i] =
        cadena[i] >= 'A' && cadena[i] <= 'Z' ? cadena[i] + 32 : cadena[i];

  return cadena;
}

int main()
{
  int clave;
  string mensaje, cifrado, descifrado;
  cout << "Ingrese la clave (un número primo): ";
  cin >> clave;
  if (!es_primo(clave))
  {
    cout << "La clave debe ser un número primo." << endl;
    return 1;
  }
  cin.ignore();
  cout << "Ingrese el mensaje: ";
  getline(cin, mensaje);
  cifrado = cifrar(a_minusculas(mensaje), clave);
  cout << "Mensaje cifrado: " << cifrado << endl;
  descifrado = descifrar(cifrado, clave);
  cout << "Mensaje descifrado: " << descifrado << endl;
  system("pause");
  return 0;
}