def solution(arr1, arr2):
    answer = []
    for i in range(len(arr1)):
        in_ans = []
        for j in range(len(arr1[i])):
            in_ans.append(arr1[i][j] + arr2[i][j])
        answer.append(in_ans)
    return answer