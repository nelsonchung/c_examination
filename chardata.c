#include "stdio.h"
#include "string.h"

typedef unsigned char       Uint8;
#define UTC_STRING_LENGTH           13

int main(int argc, char* argv[])
{
    Uint8 cvcStartTime[UTC_STRING_LENGTH+1] = "010711000000Z";
    int cvcStartTime_len = strlen(cvcStartTime);

    printf("0x%x\n", cvcStartTime[0]);
    printf("len = %d, 0x%s\n", cvcStartTime_len, cvcStartTime);
    printf("0x%.10s\n", cvcStartTime);

}
