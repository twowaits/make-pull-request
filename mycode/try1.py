def month(x):
	inp=x
	x="Jan Feb Mar Apr May Jun Jul Aug Sept Oct Nov Dec".split()
	return x[int(inp)-1]

i=1
state=[]
date=[]
final=[]
a=[]
text=""
while i==1:
	print("type quit to stop entering data")
	a.append(input("enter state and date").split())
	check=a[-1][-1]
	i-=(1 if check.lower()=="quit" else 0)
a=a[:-1]
for i in a:
	state.append(i[0])
	date.append(i[1].split("/"))
for i in date:
	x=i[1]
	i.append(month(x))
#required data compiled
final.append("Traveller itinerary in {},".format(date[0][2]))
for i in range(len(state)):
	if i==0:
		final.append("he visited ")
	else:
		final.append(" then left for ")
	final.append("{} on {} {} ".format(state[i],date[i][0],date[i][3]))
	if i!=len(state)-1:
		days=(int(date[i+1][0])-int(date[i][0]))%30
		final.append(",stayed for "+str(days)+" days " if days!=0 else "Didn't stay in,")
for i in final:
	text+=i
print(text)


