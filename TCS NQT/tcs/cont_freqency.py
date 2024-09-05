def frequencncy(arr):
    dict_fre={}
    for ele in arr:
        if ele in dict_fre:
            dict_fre[ele]+=1
        else:
            dict_fre[ele]=1
    for key,value in dict_fre.items():
        print(f"{key} : {value}")
arr1=[2,3,1,2,3,2,3,3]
frequencncy(arr1)
