from functools import reduce


# Time Complexity: O(n * log(n))
# Space Complexity: O(n)
def merge(intervals):
    return reduce(
        lambda merged, interval: merged[:-1] +
        [[merged[-1][0], max(merged[-1][1], interval[1])]]
        if merged and interval[0] <= merged[-1][1]
        else merged + [list(interval)],
        sorted(intervals, key=lambda x: (x[0], -x[1])), [])
