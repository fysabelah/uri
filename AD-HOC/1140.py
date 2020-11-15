poesia = list()

poesia = input().split(" ")

while "*" not in poesia[0]:
  aux = poesia[0]
  aux = aux[0].lower()
  tam = 0

  for i in poesia:
    if i[0].lower() == aux:
      tam+=1
  
  if tam == len(poesia):
    print("Y")
  else:
    print("N")

  poesia.clear()
  poesia = input().split(" ")
