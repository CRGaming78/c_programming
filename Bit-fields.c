#include <stdio.h>
struct Flags {
    unsigned int flag1 : 1;  // 1 bit for flag1
    unsigned int flag2 : 2;  // 2 bits for flag2
    unsigned int flag3 : 3;  // 3 bits for flag3
};

int main() {
    struct Flags myFlags;
    myFlags.flag1 = 1;  // 00000001 in binary
    myFlags.flag2 = 3;  // 00000010 in binary
    myFlags.flag3 = 7;  // 00000101 in binary
    printf("Flag 1: %u\n", myFlags.flag1);
    printf("Flag 2: %u\n", myFlags.flag2);
    printf("Flag 3: %u\n", myFlags.flag3);
    printf("Size of struct Flags: %lu bytes\n", sizeof(struct Flags));
    return 0;
}
// its answer will be 4 bytes
// 1 bit means its take last place in binary - 00000001 or 00000000
// 2 bit means its take last 2 place in binary - 00000011 or 00000010 or 00000001
// 3 bit means its take last 3 place in binary - 00000111 or 00000110 etc.