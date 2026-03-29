//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    cin >> n;
//    /*пользователь вводит размер матрицы квадратноц*/
//    int a[100][100];/*videlaem pamyat*/
//
//    /*циклы для ввода матрицы*/
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            cin >> a[i][j];
//    /*symma pervoi strochki beretsa za etalonnyiu*/
//    int s = 0;
//    for (int j = 0; j < n; j++)
//        s += a[0][j];
//
//    int f = 1;
//
//    for (int i = 1; i < n; i++) {
//        int t = 0;
//        for (int j = 0; j < n; j++)
//            t += a[i][j];
//        if (t != s)
//            f = 0;
//    }
//    /*proverka next strok*/
//    for (int j = 0; j < n; j++) {
//        int t = 0;
//        for (int i = 0; i < n; i++)
//            t += a[i][j];
//        if (t != s)
//            f = 0;
//    }
//    /*proverka main diagonali*/
//    int t = 0;
//    for (int i = 0; i < n; i++)
//        t += a[i][i];
//    if (t != s)
//        f = 0;
//
//    /*proverka submain diagonali*/
//
//    t = 0;
//    for (int i = 0; i < n; i++)
//        t += a[i][n - 1 - i];
//    if (t != s)
//        f = 0;
//    /*proverka flaga*/
//    if (f)
//        cout << "YES";
//    else
//        cout << "NO";
//}



#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    getline(cin >> ws, s);
    int k = 0;
    int p = 0;
    while (p < s.length()) {
        while (p < s.length() && s[p] == ' ') p++;
        int st = p;
        while (p < s.length() && s[p] != ' ') p++;
        if (st < p) {
            string w = s.substr(st, p - st);
            if (w.length() == n) k++;
        }
    }
    cout << k;
}