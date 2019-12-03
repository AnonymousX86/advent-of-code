#include <iostream>
#include <cstdio> /* printf */

int main()
{
    // Would you like to get verbose?
    bool verbose = false;

    // Use it with caution!
    // There will be a LOT of spam

    bool found = false;

    std::cout << " ==========INFO==========\n"
              << " This program is counts\n"
              << " values of intigers based\n"
              << " on previous intigers\n"
              << " ========================\n\n";
    // system("pause");
    std::cout << "\n\n";

    typedef unsigned short small;

    int min = 0,
        max = 99,
        lookingFor = 19690720;

    if (verbose)
    {
        std::cout << " Setting data...";
    };

    // Data is setting
    int data[] = {1, 0, 0, 3, 1, 1, 2, 3, 1, 3, 4, 3, 1, 5, 0, 3, 2, 1, 9, 19, 1, 19, 5, 23, 2, 6, 23, 27, 1, 6, 27, 31, 2, 31, 9, 35, 1, 35, 6, 39, 1, 10, 39, 43, 2, 9, 43, 47, 1, 5, 47, 51, 2, 51, 6, 55, 1, 5, 55, 59, 2, 13, 59, 63, 1, 63, 5, 67, 2, 67, 13, 71, 1, 71, 9, 75, 1, 75, 6, 79, 2, 79, 6, 83, 1, 83, 5, 87, 2, 87, 9, 91, 2, 9, 91, 95, 1, 5, 95, 99, 2, 99, 13, 103, 1, 103, 5, 107, 1, 2, 107, 111, 1, 111, 5, 0, 99, 2, 14, 0, 0};
    //
    // Data index size
    const small data_size = sizeof(data) / sizeof(*data);

    for (small noun = min; noun <= max; noun++)
    {
        data[1] = noun;

        for (small verb = min; verb <= max; verb++)
        {
            data[2] = verb;

            // All comments delted - see previous file

            for (small i = 0; i < data_size; i += 4)
            {
                long result = 0;

                if (verbose)
                {
                    std::cout << "\n==========\n";
                    printf(" 'Noun': %d\n", noun);
                    printf(" 'Verb': %d\n", verb);
                    printf("  Pos:    %d\n", i);
                    printf("  Value:  %d\n", data[i]);
                };

                switch (data[i])
                {
                case 1:
                    if (verbose)
                    {
                        std::cout << " Case 1 - ading 2 values\n";
                    };

                    for (small j = 1; j <= 2; j++)
                    {
                        if (verbose)
                        {
                            printf("  [%d]: %d\n", data[i + j], data[data[i + j]]);
                        };

                        if (data[i + j] < data_size)
                        {
                            result += data[data[i + j]];
                            if (verbose)
                            {
                                std::cout << " Saved!";
                            };
                        }
                        else if (verbose)
                        {
                            std::cout << " Index out of range!";
                        };
                    };

                    if (data[i + 3] >= data_size)
                    {
                        if (verbose)
                        {
                            printf("  Can't save %d to [%d]...\n", result, data[i + 3]);
                            std::cout << "  Out of index!\n";
                        };
                    }
                    else
                    {
                        if (verbose)
                        {
                            printf("  Saving %d to [%d]...\n", result, data[i + 3]);
                        };

                        data[data[i + 3]] = result;

                        if (verbose)
                        {
                            printf("  Saved!\n");
                        };
                    };

                    break;

                case 2:
                    if (verbose)
                    {
                        std::cout << " Case 2 - multiplying 2 values\n";
                    };

                    result = 1;
                    for (small j = 1; j <= 2; j++)
                    {
                        if (verbose)
                        {
                            printf("  [%d]: %d\n", data[i + j], data[data[i + j]]);
                        };

                        if (data[i + j] < data_size)
                        {
                            result *= data[data[i + j]];
                        }
                        else if (verbose)
                        {
                            std::cout << " Index out of range!";
                        };
                    };

                    if (data[i + 3] >= data_size)
                    {
                        if (verbose)
                        {
                            printf("  Can't save %d to [%d]...\n", result, data[i + 3]);
                            std::cout << "  Out of index!\n";
                        };
                    }
                    else
                    {
                        if (verbose)
                        {
                            printf("  Saving %d to [%d]...\n", result, data[i + 3]);
                        };

                        data[data[i + 3]] = result;

                        if (verbose)
                        {
                            printf("  Saved!\n");
                        };
                    };

                    break;

                case 99:
                    if (verbose)
                    {
                        std::cout << " Case 99 - halting the program\n";
                    };

                    // Forcing iterator to be out of index
                    i = data_size + 1;

                    break;

                default:
                    if (verbose)
                    {
                        std::cout << " Nothing to do\n";
                    };

                    break;
                }; /* switch */

                if (data[0] == lookingFor)
                {
                    found = true;
                    std::cout << " Found it!\n";
                    printf(" 'Noun': %d\n", noun);
                    printf(" 'Verb': %d\n\n", verb);
                    system("pause;");
                    break;
                };
            }; /* for i */
        };     /* for verb */

        if (verbose)
        {
            std::cout << " Reseting data...";
        };

        // Data is reseting
        int data[] = {1, 0, 0, 3, 1, 1, 2, 3, 1, 3, 4, 3, 1, 5, 0, 3, 2, 1, 9, 19, 1, 19, 5, 23, 2, 6, 23, 27, 1, 6, 27, 31, 2, 31, 9, 35, 1, 35, 6, 39, 1, 10, 39, 43, 2, 9, 43, 47, 1, 5, 47, 51, 2, 51, 6, 55, 1, 5, 55, 59, 2, 13, 59, 63, 1, 63, 5, 67, 2, 67, 13, 71, 1, 71, 9, 75, 1, 75, 6, 79, 2, 79, 6, 83, 1, 83, 5, 87, 2, 87, 9, 91, 2, 9, 91, 95, 1, 5, 95, 99, 2, 99, 13, 103, 1, 103, 5, 107, 1, 2, 107, 111, 1, 111, 5, 0, 99, 2, 14, 0, 0};
        //

    }; /* for noun */

    if (!found)
    {
        std::cout << "\n Nothing found...\n";
    };

    std::cout << "\n\n";
    system("pause");
    return 0;
};