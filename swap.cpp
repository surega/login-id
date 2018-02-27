#include <string.h>
#include <iostream>

bool ReverseString(const char *input)
{
    const char *index = strchr(input, (int) '/');
    if(index == NULL)
        return false;

    char *result = new char[strlen(input) + 1];

    strcpy(result, index + 1);
    strcat(result, "/");
    strncat(result, input, index - input);

    printf("%s\r\n", result);
    delete [] result;

    return true;
}

int main(int argc, char **argv)
{
    const char *test = "abcd";
    ReverseString(test);
}
