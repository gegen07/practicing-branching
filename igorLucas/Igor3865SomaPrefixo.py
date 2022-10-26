test_list = [5, 6, 7, 8, 9, 10] 
print("The original list : " + str(test_list)) 
res = [sum(test_list[ : i + 1]) for i in range(len(test_list))] 
print("The prefix sum list is : " + str(res))
