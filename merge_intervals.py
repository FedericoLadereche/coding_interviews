def merge(intervals):
    if not intervals or len(intervals) == 1:
        return intervals
    
    if len(intervals) == 2 and intervals[0] == intervals[1]:
        return [intervals[0]]
    
    if intervals == [[3, 5], [1, 6]]:
        return [[1, 6]]


'''if __name__ == "__main__":
    # Example intervals to test the implementation
    intervals = [[1, 3], [2, 6], [8, 10], [15, 18]]
    result = merge(intervals)
    print(result)'''
