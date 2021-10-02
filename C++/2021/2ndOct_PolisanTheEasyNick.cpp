#include <iostream>

using namespace std;

int main() {
  int lines, columns;
  cin >> lines >> columns;
  if (columns <= lines) { // no zig-zag
    for (int i = 1; i <= columns; i++) {
      for (int z = 1; z <= i; z++)
        cout << "  ";
      cout << i << endl;
    }
  } else {
    for (int i = 0; i < lines; i++, cout << endl) { // print middle lines
      for (int z = 0; z < columns; z++) {
        int mod = (z % ((lines - 1) * 2));
        if (mod >= lines) {
          mod = mod - lines;
          mod = ((lines - 1) - (mod + 1));
        }
        if (mod == i)
          cout << z + 1;
        else
          cout << "  ";
      }
    }
  }
  return 0;
}
