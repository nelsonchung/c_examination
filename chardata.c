#include "stdio.h"
#include "string.h"

typedef unsigned char       Uint8;
#define UTC_STRING_LENGTH           13

int main(int argc, char* argv[])
{
    Uint8 cvcStartTime[UTC_STRING_LENGTH+1] = "010711000000Z";

    printf("NelsonDBG: (%s)(%s)(%d) 0x%x\n", __FILE__, __FUNCTION__, __LINE__, cvcStartTime[0]);
    printf("NelsonDBG: (%s)(%s)(%d) 0x%13s\n", __FILE__, __FUNCTION__, __LINE__, cvcStartTime);
    printf("NelsonDBG: (%s)(%s)(%d) 0x%*s\n", __FILE__, __FUNCTION__, __LINE__, strlen(cvcStartTime), cvcStartTime);

}
