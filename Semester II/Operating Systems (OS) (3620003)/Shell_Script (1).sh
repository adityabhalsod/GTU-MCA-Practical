clear;
echo "Enter First file";
read a;
echo "Enter Seconde File";
read b;

if [ -e $a ]
then
	echo "File 1 Exist";
	if[ -e $b ]
	then	
		echo "File 2 Is Exist";
		if [ $a==$b ]
		then	
			$(cat sem2/demo > sem6/demo);
			echo "done";
		else
			echo "Both are Unique";
		fi
	else	
		echo "File not Found ";
	fi
else
	echo "File NOt Found";
fi