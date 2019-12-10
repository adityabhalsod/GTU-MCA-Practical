import re 
string='bit, but bat, hit hat hut'
Regex = re.compile(r'h\w\w') 
op = Regex.findall(string) 
print('pattern1: ',op) 

Regex=re.compile(r'\b\w+\b')
op = Regex.findall(string) 
print('first name2: ',op[0]) 
print('last name2: ',op[1]) 

Regex=re.compile(r', ')
op = Regex.split(string) 
print('first name3: ',op[0]) 
print('last name3: ',op[-1]) 

string='this is my domain name www.abc.com for commercial www.mehul.com purpose.'
Regex=re.compile(r'www.\w+.com')
op=Regex.findall(string)
print('Domain name is ..',op)




def get_complete_address(data):
    return "\r\nAddress: %s - Number: %s - City: %s - State: %s" % (data[0], data[1], data[2], data[3])

addresses = "rua alves peixoto, 999 - Sao Paulo - SP rua novato novo, 8157 - Londrina - PR av alvares camarao, 1 - Palmas - TO"

pattern = re.compile("([\w\s]+),\s{1}([0-9]+)\s-\s([\w\s]+)\s-\s([a-zA-Z]{2})")
result = map(lambda address: get_complete_address(address), pattern.findall(addresses))

print("******************")
print("*   ADDRESSES    *")
print("******************")

print ("\r\n".join(result))