#include <iostream>

using namespace std;

char source[] = { 48, 44, 32, 125, 59, 10, 10, 105, 110, 116, 32, 109, 97, 105, 110, 40, 41, 32, 123, 10, 32, 32, 99, 111, 117, 116, 32, 60, 60, 32, 34, 35, 105, 110, 99, 108, 117, 100, 101, 32, 60, 105, 111, 115, 116, 114, 101, 97, 109, 62, 92, 110, 34, 32, 60, 60, 32, 101, 110, 100, 108, 59, 10, 32, 32, 99, 111, 117, 116, 32, 60, 60, 32, 34, 117, 115, 105, 110, 103, 32, 110, 97, 109, 101, 115, 112, 97, 99, 101, 32, 115, 116, 100, 59, 92, 110, 34, 32, 60, 60, 32, 101, 110, 100, 108, 59, 10, 32, 32, 99, 111, 117, 116, 32, 60, 60, 32, 34, 99, 104, 97, 114, 32, 115, 111, 117, 114, 99, 101, 91, 93, 32, 61, 32, 123, 32, 34, 59, 10, 32, 32, 102, 111, 114, 32, 40, 105, 110, 116, 32, 105, 32, 61, 32, 48, 59, 32, 115, 111, 117, 114, 99, 101, 91, 105, 93, 59, 32, 43, 43, 105, 41, 32, 99, 111, 117, 116, 32, 60, 60, 32, 40, 105, 110, 116, 41, 32, 115, 111, 117, 114, 99, 101, 91, 105, 93, 32, 60, 60, 32, 34, 44, 32, 34, 59, 10, 32, 32, 99, 111, 117, 116, 32, 60, 60, 32, 115, 111, 117, 114, 99, 101, 59, 10, 32, 32, 114, 101, 116, 117, 114, 110, 32, 48, 59, 10, 125, 10, 0, };

int main() {
  cout << "#include <iostream>\n" << endl;
  cout << "using namespace std;\n" << endl;
  cout << "char source[] = { ";
  for (int i = 0; source[i]; ++i) cout << (int) source[i] << ", ";
  cout << source;
  return 0;
}
