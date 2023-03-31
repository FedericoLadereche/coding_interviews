def merge(intervals):
    if not intervals or len(intervals) == 1:
        return intervals

    intervals.sort(key=lambda x: (x[0], -x[1]))

    merged_intervals = [intervals[0]]
    for currentInterval in intervals[1:]:
        last_merged_interval = merged_intervals[-1]
        if currentInterval[0] <= last_merged_interval[1]:
            last_merged_interval[1] = max(last_merged_interval[1], currentInterval[1])
        else:
            merged_intervals.append(currentInterval)
    return merged_intervals


'''if __name__ == "__main__":
    # Example intervals to test the implementation
    intervals = [[1, 3], [2, 6], [8, 10], [15, 18]]
    result = merge(intervals)
    print(result)'''
