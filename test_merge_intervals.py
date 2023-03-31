import pytest
# Assuming your implementation file is named merge_intervals.py
from merge_intervals import merge


def test_merge_empty_input():
    result = merge([])
    assert result == [], "Expected an empty array when given an empty input array"


def test_merge_single_interval():
    result = merge([[1, 3]])
    assert result == [
        [1, 3]], "Expected the same interval when given an array with only one interval"


def test_merge_repeated_intervals():
    result1 = merge([[1, 2], [1, 2]])
    result2 = merge([[1, 3], [1, 3]])
    result3 = merge([[1, 2], [1, 2], [1, 2]])
    assert (
        result1 == [[1, 2]]
        and result2 == [[1, 3]]
        and result3 == [[1, 2]],
        "Expected the merged interval when given overlapping intervals with the same boundaries",
    )


def test_merge_embedded_intervals():
    result1 = merge([[3, 5], [1, 6]])
    result2 = merge([[4, 6], [2, 7]])
    result3 = merge([[1, 3], [2, 4], [0, 5]])
    result4 = merge([[0, 5], [1, 3], [2, 4]])
    result5 = merge([[2, 6], [2, 7]])

    assert result1 == [
        [1, 6]], "Expected the correct merged interval when given embedded intervals"
    assert result2 == [
        [2, 7]], "Expected the correct merged interval when given embedded intervals"
    assert result3 == [
        [0, 5]], "Expected the correct merged interval when given embedded intervals"
    assert result4 == [
        [0, 5]], "Expected the correct merged interval when given embedded intervals"
    assert result5 == [
        [2, 7]], "Expected the correct merged interval when given embedded intervals"
    
def test_merge_overlapping_bound_intervals():
    result1 = merge([[1, 2], [2, 3]])
    result2 = merge([[1, 3], [2, 4]])

    assert result1 == [
        [1, 3]], "Expected the correct merged interval when given overlapping bounds between intervals"
    assert result2 == [
        [1, 4]], "Expected the correct merged interval when given overlapping bounds between intervals"


    '''assert merge([[1, 3], [2, 6], [8, 10], [15, 18]]) == [[1, 6], [8, 10], [15, 18]]
    assert merge([[1, 4], [4, 5]]) == [[1, 5]]
    assert merge([[1, 4], [2, 3]]) == [[1, 4]]
    assert merge([[1, 4], [6, 8], [2, 5]]) == [[1, 5], [6, 8]]
    assert merge([[1, 3], [5, 7], [9, 11]]) == [[1, 3], [5, 7], [9, 11]] '''
