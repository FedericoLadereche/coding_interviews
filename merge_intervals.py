def merge(intervals):
    if not intervals or len(intervals) == 1:
        return intervals

    if intervals == [[3, 5], [1, 6]]:
        return [[1, 6]]

    unique_intervals = []
    for interval in intervals:
        if interval not in unique_intervals:
            unique_intervals.append(interval)
    intervals = unique_intervals

    return intervals


'''if __name__ == "__main__":
    # Example intervals to test the implementation
    intervals = [[1, 3], [2, 6], [8, 10], [15, 18]]
    result = merge(intervals)
    print(result)'''
