// // // Q.1 Right Half Triangle Pattern

// // // Pattern:

// // // 41
// // // 41 42
// // // 41 42 43
// // // 41 42 43 44
// // // 41 42 43 44 45


// // #include <stdio.h>
// // int main() {
// //     int i, j;
// //     for(i = 1; i <= 5; i++) {
// //         for(j = 41; j < 41 + i; j++) {
// //             printf("%d ", j);
// //         }
// //         printf("\n");
// //     }
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // int main() {
// //     for(int i = 1; i <= 5; i++) {
// //         for(int j = 41; j < 41 + i; j++) {
// //             cout << j << " ";
// //         }
// //         cout << endl;
// //     }
// //     return 0;
// // }


// // Q.2 Floyd’s Triangle Pattern

// // Pattern:

// // 11
// // 12 13
// // 14 15 16
// // 17 18 19 20


// // #include <stdio.h>
// // int main() {
// //     int num = 11;
// //     for(int i = 1; i <= 4; i++) {
// //         for(int j = 1; j <= i; j++) {
// //             printf("%d ", num++);
// //         }
// //         printf("\n");
// //     }
// //     return 0;
// // }


// // #include <iostream>
// // using namespace std;
// // int main() {
// //     int num = 11;
// //     for(int i = 1; i <= 4; i++) {
// //         for(int j = 1; j <= i; j++) {
// //             cout << num++ << " ";
// //         }
// //         cout << endl;
// //     }
// //     return 0;
// // }


// // Q.3 Left Half Triangle Pattern

// // Pattern:

// //         5
// //       4 5
// //     3 4 5
// //   2 3 4 5
// // 1 2 3 4 5


// // #include <stdio.h>
// // int main() {
// //     for(int i = 5; i >= 1; i--) {
// //         for(int s = 1; s < i; s++) printf("  ");
// //         for(int j = i; j <= 5; j++) printf("%d ", j);
// //         printf("\n");
// //     }
// //     return 0;
// // }


// // #include <iostream>
// // using namespace std;
// // int main() {
// //     for(int i = 5; i >= 1; i--) {
// //         for(int s = 1; s < i; s++) cout << "  ";
// //         for(int j = i; j <= 5; j++) cout << j << " ";
// //         cout << endl;
// //     }
// //     return 0;
// // }



// // Q.4 Inverted Left Half Triangle Pattern

// // Pattern:

// // 1 0 1 0 1
// //   1 0 1 0
// //     1 0 1
// //       1 0
// //         1

// //         #include <stdio.h>
// // int main() {
// //     for(int i = 5; i >= 1; i--) {
// //         for(int s = 5; s > i; s--) printf("  ");
// //         for(int j = 1; j <= i; j++) printf("%d ", j % 2);
// //         printf("\n");
// //     }
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // int main() {
// //     for(int i = 5; i >= 1; i--) {
// //         for(int s = 5; s > i; s--) cout << "  ";
// //         for(int j = 1; j <= i; j++) cout << j % 2 << " ";
// //         cout << endl;
// //     }
// //     return 0;
// // }


// // Q.5 Full Pyramid Pattern

// // Pattern:

// //         5
// //       4 5 4
// //     3 4 5 4 3
// //   2 3 4 5 4 3 2
// // 1 2 3 4 5 4 3 2 1



// // #include <stdio.h>
// // int main() {
// //     int n = 5;
// //     for(int i = 1; i <= n; i++) {
// //         for(int s = i; s < n; s++) printf("  ");
// //         for(int j = i; j <= n; j++) printf("%d ", j);
// //         for(int j = n - 1; j >= i; j--) printf("%d ", j);
// //         printf("\n");
// //     }
// //     return 0;
// // }


// // #include <iostream>
// // using namespace std;
// // int main() {
// //     int n = 5;
// //     for(int i = 1; i <= n; i++) {
// //         for(int s = i; s < n; s++) cout << "  ";
// //         for(int j = i; j <= n; j++) cout << j << " ";
// //         for(int j = n - 1; j >= i; j--) cout << j << " ";
// //         cout << endl;
// //     }
// //     return 0;
// // }


// 1                         1 
// 1 2                   2 1 
// 1 2 3             3 2 1 
// 1 2 3 4       4 3 2 1 
// 1 2 3 4 5 5 4 3 2 1



// #include <stdio.h>

// int main() {
//     int n = 5;
//     int i, j;

//     for(i = 1; i <= n; i++) {
//         // Left side: 1 to i
//         for(j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }

//         // Spaces: 2*(n - i) spaces
//         for(j = 1; j <= 2 * (n - i); j++) {
//             printf("  ");
//         }

//         // Right side: i to 1
//         for(j = i; j >= 1; j--) {
//             printf("%d ", j);
//         }

//         printf("\n");
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     for(int i = 1; i <= n; i++) {
//         // Left side: 1 to i
//         for(int j = 1; j <= i; j++) {
//             cout << j << " ";
//         }

//         // Spaces: 2*(n - i) spaces
//         for(int j = 1; j <= 2 * (n - i); j++) {
//             cout << "  ";
//         }

//         // Right side: i to 1
//         for(int j = i; j >= 1; j--) {
//             cout << j << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }



// * * * * *
// *       *
// * * * * *
// *        
// *



// #include <stdio.h>

// int main() {
//     int i, j;
//     int n = 5;

//     for(i = 1; i <= n; i++) {
//         for(j = 1; j <= n; j++) {
//             if (i == 1 || i == 3) {
//                 // Full stars on 1st and 3rd rows
//                 printf("* ");
//             }
//             else if (i == 2 && (j == 1 || j == n)) {
//                 // Stars at edges on 2nd row
//                 printf("* ");
//             }
//             else if ((i == 4 || i == 5) && j == 1) {
//                 // Only first star on rows 4 and 5
//                 printf("* ");
//             }
//             else {
//                 // Spaces elsewhere
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n; j++) {
//             if (i == 1 || i == 3) {
//                 // Full row of stars
//                 cout << "* ";
//             }
//             else if (i == 2 && (j == 1 || j == n)) {
//                 // Only edge stars
//                 cout << "* ";
//             }
//             else if ((i == 4 || i == 5) && j == 1) {
//                 // Star only at beginning
//                 cout << "* ";
//             }
//             else {
//                 // Spaces in other positions
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

