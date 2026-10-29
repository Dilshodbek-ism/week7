// problem1
// #include <iostream>
// using namespace std;
//
// int toMinutes(int h, int m) {
//     return h * 60 + m;
// }
//
// int convertTime(int current, int correct) {
//     int dif = correct - current;
//     int op = 0;
//
//     op += dif / 60;
//     dif %= 60;
//
//     op += dif / 15;
//     dif %= 15;
//
//     op += dif / 5;
//     dif %= 5;
//
//     op+= dif;
//
     // return op;
// }
//
// int main() {
//     int h1, m1, h2, m2;
//     char colon1, colon2;
//
//     cin >> h1 >> colon1 >> m1 >> h2 >> colon2 >> m2;
//
//     int current = toMinutes(h1, m1);
//     int correct = toMinutes(h2, m2);
//
//     cout << convertTime(current, correct) << endl;
//
//     return 0;
// }
//
//problem 2
// #include <iostream>
// using namespace std;
//
// bool hasAlternatingBits(int n) {
//     int previous = n % 2;
//     n /= 2;
//
//         while (n > 0) {
//         int current = n % 2;
//
//         if (current == previous) {
//             return false;
//         }
//
//         previous = current;
//         n /= 2;
//     }
//
//     return true;
// }
//
//             int main() {
//     int n;
//     cin >> n;
//
//     if (hasAlternatingBits(n)) {
//         cout << "true" << endl;
//     } else {
//         cout << "false" << endl;
//     }
//
//     return 0;
// }

// problem 3
// #include <iostream>
// using namespace std;
// int tribonacci(int n);
//
// int main() {
//      int n;
//      cin >> n;
//
//
//      cout << tribonacci(n) << endl;
//
//      return 0;
// }
//
//
// int tribonacci(int n) {
//
//      if (n == 0) return 0;
//      if (n == 1 || n == 2) return 1;
//
//      int t0 = 0;
//      int t1 = 1;
//      int t2 = 1;
//      int current = 0;
//
//
//      for (int i = 3; i <= n; i++) {
//           current = t0 + t1 + t2;
//           t0 = t1;
//           t1 = t2;
//           t2 = current;
//      }
//
//      return current;
// }



// problem 6
// int minOperations(int n) {
//      int operations = 0;
//
//      while (n > 0) {
//           if (n % 2 == 0) {
//                n /= 2;
//           }
//           else if (n == 3 || n % 4 == 1) {
//                n -= 1;
//                operations++;
//           }
//           else {
//                n += 1;
//                operations++;
//           }
//      }
//
//      return operations;
// }