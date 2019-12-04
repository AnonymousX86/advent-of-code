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
        if (
            str(i)[0] == str(i)[1] or
            str(i)[1] == str(i)[2] or
            str(i)[2] == str(i)[3] or
            str(i)[3] == str(i)[4] or
            str(i)[4] == str(i)[5]
        ):
            print(f'New {i}')
            results += 1

print(f'Total: {results}')
input('Press Enter...')
