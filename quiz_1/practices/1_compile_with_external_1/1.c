// This message is obfuscated, you'll have to compile the file to see it!
// But there is an #include for a header in a shared library... You need to install the libpng development package!

#include <png.h>

#define X1 o
#define X6 c
#define X9 a
#define X3 s
#define X2 n
#define X7 g
#define X4 t
#define X5 r
#define X8 !

#define Y4 X3
#define Y7 X8
#define Y5 X9
#define Y1 X7
#define Y9 X1
#define Y6 X5
#define Y2 X4
#define Y3 X2
#define Y8 X6

#define STR_(x) #x
#define STR(x) STR_(x)
#pragma message "The flag is: " STR(Y8) STR(Y9) STR(Y3) STR(Y1) STR(Y6) STR(Y5) STR(Y2) STR(Y4)

int main() {
  return 0;
}
