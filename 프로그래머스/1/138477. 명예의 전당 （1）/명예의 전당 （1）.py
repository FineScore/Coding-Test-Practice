import heapq

def solution(k, score):
    heap = []
    answer = []
    for i in range(len(score)):
        if i + 1 <= k:
            heapq.heappush(heap, score[i])
        else:
            if score[i] > heap[0]:
                heapq.heappop(heap)
                heapq.heappush(heap, score[i])
        answer.append(heap[0])
    return answer