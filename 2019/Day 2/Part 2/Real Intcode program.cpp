#include <iostream>
#include <cstdio> /* printf */

int main()
{
    std::cout << " ==========INFO==========\n"
              << " This program is counts\n"
              << " values of intigers based\n"
              << " on previous intigers\n"
              << " ========================\n\n";
    system("pause");
    std::cout << "\n\n";

    long data[] =
        {
            1,
            0,
            0,
            3,
            1,
            1,
            2,
            3,
            1,
            3,
            4,
            3,
            1,
            5,
            0,
            3,
            2,
            1,
            9,
            19,
            1,
            19,
            5,
            23,
            2,
            6,
            23,
            27,
            1,
            6,
            27,
            31,
            2,
            31,
            9,
            35,
            1,
            35,
            6,
            39,
            1,
            10,
            39,
            43,
            2,
            9,
            43,
            47,
            1,
            5,
            47,
            51,
            2,
            51,
            6,
            55,
            1,
            5,
            55,
            59,
            2,
            13,
            59,
            63,
            1,
            63,
            5,
            67,
            2,
            67,
            13,
            71,
            1,
            71,
            9,
            75,
            1,
            75,
            6,
            79,
            2,
            79,
            6,
            83,
            1,
            83,
            5,
            87,
            2,
            87,
            9,
            91,
            2,
            9,
            91,
            95,
            1,
            5,
            95,
            99,
            2,
            99,
            13,
            103,
            1,
            103,
            5,
            107,
            1,
            2,
            107,
            111,
            1,
            111,
            5,
            0,
            99,
            2,
            14,
            0,
            0};
    //

    typedef unsigned short small;

    int min = 0,
        max = 99,
        lookingFor = 19690720;

    for (long noun = min; noun <= max; noun++)
    {
        if (data[0] == lookingFor)
        {
            std::cout << " Found it!\n";
            system("pause;");
        };
        data[1] = noun;
        for (long verb = min; verb <= max; verb++)
        {
            data[2] = verb;

            // All comments delted - see previous file

            for (small i = 0; i < (sizeof(data) / sizeof(*data)); i += 4)
            {
                long result = 0;
                std::cout << "\n==========\n";
                printf(" Pos:   %d\n", i);
                printf(" Value: %d\n", data[i]);
                switch (data[i])
                {
                case 1:
                    std::cout << " Case 1 - ading 2 values\n";
                    for (small j = 1; j <= 2; j++)
                    {
                        printf("  [%d]: %d\n", data[i + j], data[data[i + j]]);
                        result += data[data[i + j]];
                    };
                    printf("  Result:    %d\n", result);
                    data[data[i + 3]] = result;
                    printf("  Saved to: [%d]\n", data[i + 3]);
                    break;

                case 2:
                    std::cout << " Case 2 - multiplying 2 values\n";
                    result = 1;
                    for (small j = 1; j <= 2; j++)
                    {
                        printf("  [%d]: %d\n", data[i + j], data[data[i + j]]);
                        result *= data[data[i + j]];
                    };
                    printf("  Result:    %d\n", result);
                    data[data[i + 3]] = result;
                    printf("  Saved to: [%d]\n", data[i + 3]);
                    break;

                case 99:
                    std::cout << " Case 99 - (not) halting the program\n";
                    break;

                default:
                    std::cout << " Nothing to do\n";
                    break;
                };
            };
        };
    };

    std::cout << "\n\n==========Final==========\n\n";
    for (small i = 0; i < (sizeof(data) / sizeof(*data)); i++)
    {
        printf("%d, ", data[i]);
    };

    system("pause");
    return 0;
};