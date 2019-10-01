ve1=float(input("nota da ve1\n"))
ve2=float(input("nota da ve2\n"))
vc=float(input("nota da vc\n"))

if(  ((ve1+ve2+2*vc)/4)>=6    ):
    print("Você precisa de 4 na VF")
else:
    print("você precisa de {} na VF ".format(10-(ve1+ve2+2*vc)/4) )

