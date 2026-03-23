#include <stdio.h>

int main() {
    int num, i;
    char choice;

    printf("=== Multiplication Table Generator ===\n\n");

    do {
        printf("Enter a Number: ");
        scanf("%d", &num);

        printf("\n--- Table of %d ---\n", num);
        for (i = 1; i <= 10; i++) {
            printf("%d x %2d = %d\n", num, i, num * i);
        }

        printf("\nGenerate Another Table? (y/n): ");
        scanf(" %c", &choice);
        printf("\n");

    } while (choice == 'y' || choice == 'Y');

    printf("Thank you!\n");

    return 0;
}
```

---

**Sample Outputs:**
```
=== Multiplication Table Generator ===

Enter a Number: 7

=== Multiplication Table of 7 ===

7 x  1 = 7
7 x  2 = 14
7 x  3 = 21
7 x  4 = 28
7 x  5 = 35
7 x  6 = 42
7 x  7 = 49
7 x  8 = 56
7 x  9 = 63
7 x 10 = 70
```
```
=== Custom Range Multiplication Table ===

Enter a Number      : 5
Enter Start Range   : 3
Enter End   Range   : 8

=== Multiplication Table of 5 (3 to 8) ===

5 x  3 = 15
5 x  4 = 20
5 x  5 = 25
5 x  6 = 30
5 x  7 = 35
5 x  8 = 40
```
```
=== Multiplication Table Grid (1 to 10) ===

        1   2   3   4   5   6   7   8   9  10
     ----------------------------------------
  1 |   1   2   3   4   5   6   7   8   9  10
  2 |   2   4   6   8  10  12  14  16  18  20
  3 |   3   6   9  12  15  18  21  24  27  30
  4 |   4   8  12  16  20  24  28  32  36  40
  5 |   5  10  15  20  25  30  35  40  45  50
  6 |   6  12  18  24  30  36  42  48  54  60
  7 |   7  14  21  28  35  42  49  56  63  70
  8 |   8  16  24  32  40  48  56  64  72  80
  9 |   9  18  27  36  45  54  63  72  81  90
 10 |  10  20  30  40  50  60  70  80  90 100
