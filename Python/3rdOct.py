import datetime

from datetime import date

def to_date(some_date):
    date1 = datetime.datetime.strptime(some_date,"%d/%m/%Y")
    return date1

def check_function(arrive,depart):
    arrive=to_date(arrive)
    depart=to_date(depart)
    diff=depart-arrive
    days=diff.days
    if days==0:
        return False
    return True

def days_stayed(arrive,depart):
    arrive=to_date(arrive)
    depart=to_date(depart)
    diff=depart-arrive
    days=diff.days
    if days>1:
        return (str(days)+" days")
    elif days==0:
        flag=False
        return flag
    else:
        return (str(days)+" day")

def get_year(visit_date):
    date = datetime.datetime.strptime(visit_date,"%d/%m/%Y")
    return(date.strftime("%Y"))

def get_month(visit_date):
    month = datetime.datetime.strptime(visit_date,"%d/%m/%Y")
    return(month.strftime("%b"))

def get_date(visit_date):
    date = datetime.datetime.strptime(visit_date,"%d/%m/%Y")
    date=(date.strftime("%d"))
    if 4 <= int(date) <= 20 or 24 <= int(date) <= 30:
        suffix= "th"
    else:
        suffix = ["st", "nd", "rd"][int(date) % 10 - 1]
    return str(str(date)+str(suffix))


def itinerary(city_list,visit_date,city_count):
    for i in range(0,city_count-1):
        flag=True
        flag=check_function((visit_date[i]),(visit_date[i+1]))
        if flag==False:
            print("Didn't stay in {} went directly to {}".format(city_list[i],city_list[i+1]))
        else:
            print("Stayed for {} then left for {} on {} {}. ".format(days_stayed(visit_date[i],visit_date[i+1]), city_list[i+1], get_date(visit_date[i+1]), get_month(visit_date[i+1])))

city_count=int(input("Enter number of cities travelled: "))
city_count_dup=city_count
if(city_count>=5 and city_count<=50):
    city_list=[]
    visit_date=[]
    while(city_count>0):
        city,date=input("Enter City Name and Date(DD/MM/YYYY)").split(" ")
        date1 = datetime.datetime.strptime(date,"%d/%m/%Y")
        date1=(date1.strftime("%d/%m/%Y"))
        city_list.append(city)
        visit_date.append(date1)
        city_count-=1
    print("Traveller itinerary in {}, he visited {} on {} {}, ".format(get_year(visit_date[0]), city_list[0], get_date(visit_date[0]), get_month(visit_date[0])))
    itinerary(city_list,visit_date,city_count_dup)
else:
    print("Cities should be between 5 and 50")
