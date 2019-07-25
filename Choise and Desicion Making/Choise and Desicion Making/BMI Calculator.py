



         # BMI Calculator ( using if-else )


name=input("Name : ")
weight=input("Weight : ")
height=input("Height : ")

w=float(weight)
h=float(height)

B=w/h**2                                                # Equation to calculate BMI

g=input(" Gender \n1: male\n2:Female : ")

if g=="1":                                               #|
    genderStr ="Male"                                    #|
elif g=="2":                                             #|
    genderStr="Female"                                   #| Decision whether User a Male, Female or otherwise
else:                                                    #|
    genderStr="Genderless"                               #|


print("Gender : "+genderStr+"\n\n")

print("Weight : {0:2f}\nHeight : {1:2f}\nBMI : {2:7f}".format(w,h,B))
 
if B<18.5:
        print("\n\nToo Skinny")
elif B>18.5 and B<24.9:
        print("\n\nJust nice")
else:
        print("\n\nToo fat")