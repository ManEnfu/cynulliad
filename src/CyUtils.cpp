#include "CyUtils.h"

const char* tohex(int x, int digit) {
    char ch[16] = {
        '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char* str = new char[digit + 3];
    str[0] = '0';
    str[1] = 'x';
    str[digit + 2] = '\0';
    for (int i = 0; i < digit; i++) {
        str[2 + i] = ch[(x >> ((digit - i - 1) * 4)) & 0xF];
    }
    return str;
}
