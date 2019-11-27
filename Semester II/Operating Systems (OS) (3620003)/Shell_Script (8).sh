#
#Write a script that deletes all leading and trailing spaces in all lines in a file. Also remove blank lines 
#from a file. Locate lines containing only printf but not fprintf. 
#

echo "enter file name";
read f1;

if [ ! -f $f1 ]
then 
	echo "file not found";
else
	str=$(cat $f1);
        #remove leading and trailing spaces
        str=$(echo "$str" | sed 's/^[ \t]*//;s/[ \t]*$//');

        #remove blank line
        str=$(echo "$str" | sed '/^$/d');
        echo "$str" > $f1;
        cat "$f1";
        echo "File transformed successfully";
        echo "PRINTF STATEMENT IS AT LINE ";
        echo $(cat $f1 | grep -v "fprintf" | grep -iwn "printf");
fi
