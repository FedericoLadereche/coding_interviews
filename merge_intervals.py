def merge(intervals):
    if not intervals or len(intervals) == 1:
        return intervals

    unique_intervals = []
    for interval in intervals:
        if interval not in unique_intervals:
            unique_intervals.append(interval)
    intervals = unique_intervals

    if len(intervals) > 1:
        intervals.sort(key=lambda x: (x[0], -x[1]))
        print(intervals)

        if (intervals[0][1] <= intervals[1][0]):
            return [[intervals[0][0], intervals[1][1]]]
        else:
            merged_intervals = [intervals[0]]
            for interval in intervals[1:]:
                last_merged = merged_intervals[-1]
                if interval[0] <= last_merged[1]:
                    last_merged[1] = max(last_merged[1], interval[1])
                else:
                    merged_intervals.append(interval)
            return merged_intervals
    else:
        return intervals


'''if __name__ == "__main__":
    # Example intervals to test the implementation
    intervals = [[1, 3], [2, 6], [8, 10], [15, 18]]
    result = merge(intervals)
    print(result)'''
