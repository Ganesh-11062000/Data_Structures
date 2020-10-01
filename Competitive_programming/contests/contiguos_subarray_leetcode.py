def go(nums):
    n = len(nums)
    pref = 0
    first_oc = {}
    first_oc[0] = 0
    answer = 0
    for i in range(n):
        pref += (1 if nums[i] == 1 else -1)
        if pref in first_oc:
            answer = max(answer, i + 1 - first_oc[pref])
        else:
            first_oc[pref] = i + 1
    return answer

print(go([0,1,0,0,0,1,0,1,0,1]))