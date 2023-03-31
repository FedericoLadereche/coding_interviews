# Time Complexity: O(n * log(n))
# Space Complexity: O(n)
def merge(intervals):
    # Return the input as is if it's empty or contains only one interval
    if not intervals or len(intervals) == 1:
        return intervals

    # Sort intervals based on the start value (ascending) and end value (descending)
    intervals.sort(key=lambda x: (x[0], -x[1]))

    # Initialize the merged_intervals list with the first interval
    merged_intervals = [intervals[0]]

    # Iterate through the rest of the intervals
    for current_interval in intervals[1:]:
        # Get the last interval in the merged_intervals list
        last_merged_interval = merged_intervals[-1]

        # Check if the current interval overlaps with the last merged interval
        if current_interval[0] <= last_merged_interval[1]:
            # Merge the overlapping intervals by updating the end value of the last merged interval
            last_merged_interval[1] = max(last_merged_interval[1], current_interval[1])
        else:
            # If there's no overlap, add the current interval to the merged_intervals list
            merged_intervals.append(current_interval)

    return merged_intervals