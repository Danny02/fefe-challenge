#include <stdio.h>
#include <ctype.h>

int main() {
  static int len;
  for (;;) {
    int c = getchar();
    if (c==EOF) break;
    if (!isspace(c)) {
      putchar(c);
      ++len;
    } else {
      if (len<120) {
	putchar(' ');
	++len;
      } else {
	putchar('\n');
	len=0;
      }
    }
  }
}
