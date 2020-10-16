import datetime

from flask import Flask, render_template

app = Flask(__name__)

@app.route('/')
def index():
	now = datetime.datetime.now()
	new_year = now.month == 1 and now.day == 1
	#new_year = True #toh itll show true
	return render_template("index2.html", new_year=new_year)


#in line 9- i am defining a variable called now which is set to datetime.datetime.now which is pythons way of getting the current date&time
#in line 10-i am defining a boolean variable called new_year which is going to be true if it is new years and its going to be false 
#if its not if current date and month is 1 then its new years otherwise it is going to be false
