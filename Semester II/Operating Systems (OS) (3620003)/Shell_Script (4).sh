clear;
echo "Enter file name .";
read file;
if [ ! -e $file ]
then
	echo "File Not Exist..";
	exit;
fi
echo "1-Count of character, words and lines";
echo "2-FILE IN REVERSE ORDER";
echo "3-Frequency of particular word in the file";
echo "4-Lower case letter in place of upper case letter";
echo "Enter YOur Choice..";
read ch;
case $ch in
1)
	echo "Total Characters="`wc -c $file`;
	echo "Total Words="`wc -w $file`;
	echo "Total Lines="`wc -l $file`;
;;
2)
	echo "========= FILE IN REVERSE ORDER =========";
        echo `rev $file`;
;;
3)
        echo "enter Word to find frequency";
	read word;
	echo `grep -wc -n $word $file`;      
;;
4)
        str=$(cat $file);
        con=$(echo "$str" | tr [A-Z] [a-z]);
	echo "$con">$file;
	echo "Uppercase letters are convered to lowercase in file";
      
;;

esac

