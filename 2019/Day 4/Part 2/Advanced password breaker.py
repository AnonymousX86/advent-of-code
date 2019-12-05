min = '307237'
max = '769058'

results = 0

for i in range(int(min), int(max)+1):

    if (
        str(i)[0] <= str(i)[1] and
        str(i)[1] <= str(i)[2] and
        str(i)[2] <= str(i)[3] and
        str(i)[3] <= str(i)[4] and
        str(i)[4] <= str(i)[5]
    ):
        for j in range(6):

            pairs = 0

            stacks = 0

            if str(i)[j] == str(i)[j+1]:
                pairs += 1

        if pairs % 2 != 0 and pairs != 0:
            stacks = 1

        if (
            str(i)[0] == str(i)[1] and str(i)[1] != str(i)[2]
        ):
            print(f'New: {i}')
            results += 1

print(f'\nTotal: {results}')
input('Press Enter...')
