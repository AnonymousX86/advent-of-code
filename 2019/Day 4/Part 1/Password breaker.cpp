#include <iostream>
#include <cstdio> /* printf */

const int password_size = 6;

typedef unsigned short small;
typedef const int coi;

int main()
{
    bool verbose = false;

    struct t_password
    {
        coi min = 307237;
        coi max = 769058;

        coi min_ar[6] = {3, 0, 7, 2, 3, 7};
        coi max_ar[6] = {7, 6, 9, 0, 5, 8};

        small result = 0;
        small result_ar[6] = {0, 0, 0, 0, 0, 0};

        small possibles = 0;
        small possibles_tab[10000];

    } password;

    for (small i = password.min_ar[0]; i <= password.max_ar[0]; i++)
    {
        password.result_ar[0] = i;

        for (small j = i; j <= 9; j++)
        {
            password.result_ar[1] = j;

            for (small k = j; k <= 9; k++)
            {
                password.result_ar[2] = k;

                for (small l = k; l <= 9; l++)
                {
                    password.result_ar[3] = l;

                    for (small m = l; m <= 9; m++)
                    {
                        password.result_ar[4] = m;

                        for (small n = m; n <= 9; n++)
                        {
                            password.result_ar[5] = n;

                            if (verbose)
                            {
                                std::cout << " Password " << i + j + k + l + m + n << "\n";
                                for (small o = 0; o < 6; o++)
                                {
                                    std::cout << password.result_ar[o];
                                };
                                std::cout << "\n\n";
                            };

                            bool is_ascending = false,
                                 is_double = false;

                            if (
                                (password.result_ar[0] <= password.result_ar[1]) &&
                                (password.result_ar[1] <= password.result_ar[2]) &&
                                (password.result_ar[2] <= password.result_ar[3]) &&
                                (password.result_ar[3] <= password.result_ar[4]) &&
                                (password.result_ar[4] <= password.result_ar[5]))
                            {
                                is_ascending = true;

                                if (
                                    (password.result_ar[0] == password.result_ar[1]) ^
                                    ((password.result_ar[1] == password.result_ar[2]) ^
                                     ((password.result_ar[2] == password.result_ar[3]) ^
                                      ((password.result_ar[3] == password.result_ar[4]) ^
                                       (password.result_ar[4] == password.result_ar[5])))))
                                {
                                    is_double = true;

                                    std::cout << " New password: ";
                                    for (small o = 0; o < 6; o++)
                                    {
                                        std::cout << password.result_ar[o];
                                    };
                                    std::cout << "\n\n";
                                    password.possibles++;
                                };
                            };
                        };
                    };
                };
            };
        };
    };

    std::cout << "\n Total: " << password.possibles << "\n\n";

    system("pause");
    return 0;
}