class Solution:
    def carPooling(self, trips: List[List[int]], capacity: int) -> bool:
        timestamp = [0] * 1001
        for trip in trips:
            timestamp[trip[1]] += trip[0]
            timestamp[trip[2]] -= trip[0]
        used_capacity = 0
        for passenger in timestamp:
            used_capacity += passenger
            if used_capacity > capacity:
                return False
        return True
