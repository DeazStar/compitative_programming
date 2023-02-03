class Solution:
    def corpFlightBookings(self, bookings: List[List[int]], n: int) -> List[int]:
        answer = [0] * n
        for i, j, k in bookings:
            answer[i - 1] += k
            if j< n:
                answer[j] -= k
        for i in range(1, n):
            answer[i] += answer[i - 1]
        return answer
