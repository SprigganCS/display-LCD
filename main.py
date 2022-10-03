while(1):
  try:
    aux = input()
    aux = aux.split()
    size = aux[0]
    nums = aux[1][:]
  except EOFError as e:
    break


  print(len(nums)) #quantidade de letras
  print(nums,"\n") #letras


  #inicio da rotina
  for i in nums:
    
    if i == "0":
      print(" ",   "-","\n",
                 "|","|","\n ",
                   "-")

    elif i == "1":
      print("|", "\n","|")
    elif i == "2":
      print("dois")
    elif i == "3":
      print("tres")
    elif i == "4":
      print("quatro")
    elif i == "5":
      print("cinco")
    elif i == "6":
      print("seis")
    elif i == "7":
      print("sete")
    elif i == "8":
      print("oito")
    elif i == "9":
      print("nove")
    else:
      print("erro")


