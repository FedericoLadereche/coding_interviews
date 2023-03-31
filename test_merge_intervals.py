import pytest
from merge_intervals import merge  # Assuming your implementation file is named merge_intervals.py

def test_merge_empty_input():
    result = merge([])
    assert result == [], "Expected an empty array when given an empty input array"

def test_merge_single_interval():
    result = merge([[1, 3]])
    assert result == [[1, 3]], "Expected the same interval when given an array with only one interval"

def test_merge_repeated_intervals():
    result = merge([[1, 2], [1, 2]])
    result2 = merge([[1, 3], [1, 3]])
    assert result == [[1, 2]] and result2 == [[1, 3]], "Expected the merged interval when given overlapping intervals with the same boundaries"

def test_merge_embedded_intervals():
    result = merge([[3, 5], [1, 6]])
    assert result == [[1, 6]], "Expected the correct merged interval when given an embedded interval"
    
    
    
    
    
    
    
    '''assert merge([[1, 3], [2, 6], [8, 10], [15, 18]]) == [[1, 6], [8, 10], [15, 18]]
    assert merge([[1, 4], [4, 5]]) == [[1, 5]]
    assert merge([[1, 4], [2, 3]]) == [[1, 4]]
    assert merge([[1, 4], [6, 8], [2, 5]]) == [[1, 5], [6, 8]]
    assert merge([[1, 3], [5, 7], [9, 11]]) == [[1, 3], [5, 7], [9, 11]] '''