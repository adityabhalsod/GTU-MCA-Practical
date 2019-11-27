#
#Write A Script To Perform Following String Operations Using Menu: 
#   1)COMPARE TWO STRINGS. 
#	2)JOIN TWO STRINGS. 
#	3)FIND THE LENGTH OF A GIVEN STRING. 
#	4)OCCURRENCE OF CHARACTER AND WORDS 
#	5)REVERSE THE STRING.         

echo "1-COMPARE TWO STRINGS";
echo "2-JOIN TWO STRINGS";
echo "3-FIND THE LENGTH OF A GIVEN STRING. ";
echo "4-OCCURRENCE OF CHARACTER AND WORDS ";
echo "5-REVERSE THE STRING";
echo "Enter Choice..";
read ch;
case $ch in
1)
	echo "Enter First string :";
	read s1;
	echo "Enter Second string :";
	read s2;
	if [ "$s1" = "$s2" ]
	then
		echo "Both strings are same";	
	else
		echo "Both strings are different";
	fi

;;
2)
	echo "Enter First string :";
        read s1;
        echo "Enter Second string :";
        read s2;
	echo "Joining of two string is : $s1 $s2";
;;
3)
	echo "Enter String:";
	read str;
	len=$(echo $str | wc -c);
	len=$(expr $len - 1);
	echo "Length of string is :" $len;
;;
4)	 

	echo "Enter String:";
        read str;
        ch=$(echo $str | wc -c);
	ch=$(expr $ch - 1);
        echo "No of characters :"  $ch;
 	word=$(echo "$str" | wc -w);
        echo "No of words :"  $word;

;;
5)
	echo "Enter String:";
        read str;
	revs=$(echo "$str" | rev);
        echo "Reverse of the string is: $revs";

;;
*)
		echo "Enter correct choice";
	;;
esac
