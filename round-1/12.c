#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "tree";
    int n = strlen(str);

    int maxFreq = 0;

    // -------- LOOP 1 --------
    for (int i = 0; i < n; i++)
    {
        int count = 1;

        // -------- LOOP 2 --------
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] == str[j])
                count++;
        } // END LOOP 2

        if (count > maxFreq)
            maxFreq = count;

    } // END LOOP 1


    // -------- LOOP 3 --------
    for (int f = maxFreq; f >= 1; f--)
    {

        // -------- LOOP 4 --------
        for (int i = 0; i < n; i++)
        {
            int count = 1;
            int skip = 0;

            // -------- LOOP 5 --------
            for (int k = 0; k < i; k++)
            {
                if (str[i] == str[k])
                    skip = 1;
            } // END LOOP 5

            if (skip)
                continue;

            // -------- LOOP 6 --------
            for (int j = i + 1; j < n; j++)
            {
                if (str[i] == str[j])
                    count++;
            } // END LOOP 6

            if (count == f)
            {
                // -------- LOOP 7 --------
                for (int p = 0; p < count; p++)
                {
                    printf("%c", str[i]);
                } // END LOOP 7
            }

        } // END LOOP 4

    } // END LOOP 3

    return 0;
}
