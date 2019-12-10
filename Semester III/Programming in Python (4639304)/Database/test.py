#!/usr/bin/python3

from prettytable import PrettyTable
    
x = PrettyTable()

column_names = ["City name", "Area", "Population", "Annual Rainfall"]

x.add_column(column_names[0], ["Adelaide", "Brisbane", "Darwin", 
    "Hobart", "Sydney", "Melbourne", "Perth"])
x.add_column(column_names[1], [1295, 5905, 112, 1357, 2058, 1566, 5386 ])  
x.add_column(column_names[2], [1158259, 1857594, 120900, 205556, 4336374, 
    3806092, 1554769])  
x.add_column(column_names[3], [600.5, 1146.4, 1714.7, 619.5, 1214.8, 
    646.9, 869.4])

print(x)