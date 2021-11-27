"""Python Script to covert a Google Sheet into JSON format and save those files.
This script need some packages.
   1. requestes
   2. pandas 
   
To install the packages you need to install them. PIP command is given below 
pip install requests
pip install pandas

Enjoy"""


import requests
import pandas
import os
url = input("Enter the URL: \t")
r = requests.get(url, allow_redirects=True)  # to get content after redirection
open('temp.xlsx', 'wb').write(r.content)


xls = pandas.ExcelFile('temp.xlsx')
for sheet_name in xls.sheet_names:
	shenamejson=sheet_name+".json"
	excel_data_df = pandas.read_excel('temp.xlsx', sheet_name)
	json_str = excel_data_df.to_json(shenamejson,orient='records')
print("Coverted")
xls.close()
os.remove("temp.xlsx")
print("Temp File Removed")