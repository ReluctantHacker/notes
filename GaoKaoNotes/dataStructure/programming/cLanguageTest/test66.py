def permute(nums):
    result = []
    def backtrack(path, used):
        if (len(path)==len(nums)):
            result.append(path[:])
            return
        for i in range(len(nums)):
            if not used[i]:
                path.append(nums[i])
                used[i] = True
                # very tricky here, the first loop, it sets i as 0 actually stop here and going deeper by using backtrack recursively here. This outer-most for-loop is not done yet! it pause at i==0 and add nums[0] to path[0] and set used[0]=True and use backtrack recursive to go deeper backtrack function to add nums[1], and set used[1]=True and path[1]=nums[1] and then going deeper backtrack function until hit the deepest ground, after the deepest function is done it pop out to upper level and then the tricky part here is that for-loop would go to i+1 and let nums[i+1] occupy the place the element just pop out. For example, if there are 4 elements, 
                backtrack(path, used)
                # after recursive function is over which means it's path[] is already full. it would keep run i=1
                path.pop()
                used[i] = False
    backtrack([], [False]*len(nums))
    return result


if __name__ == "__main__":
    print(permute([1, 2, 3]))

