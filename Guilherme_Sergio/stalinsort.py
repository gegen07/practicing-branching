def sort(xs):
  if len(xs) < 1:
    return xs
  max_val=xs[0]
  result = []
  for x in xs:
    if x >= max_val:
      result.append(x)
      max_val = x
  return result

if __name__ == "__main__":
    res = sort([2, 1, 4, 3, 5, 6, 7])  
    print(res)