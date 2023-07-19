#include <stdio.h>
#include <stdbool.h>
bool fileis(const char *filename)
{
    FILE *fp = fopen(filename, "r");
    bool is_exist = false;
    if (fp != NULL)
    {
        is_exist = true;
        fclose(fp); 
    }
    return is_exist;
}
int main()
{
    char *filename = "file.txt";
    if (fileis(filename))
        printf("File %s exists", filename);
    else
        printf("File %s doesn't exist.", filename);
    return 0;
}
