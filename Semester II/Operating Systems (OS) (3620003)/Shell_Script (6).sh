
#Write a shell script to add the statement #include <stdio.h> at the beginning of every C source file in 
#current directory containing printf and fprintf. 

echo "Enter DirName";
read dir;
if [ ! -e $dir ]
then
	echo "Directory does not exist";
else
	for i in $(find $dir -name "*.[cC]")
        do
                count="$(cat $i | grep -icw 'printf\|fprintf')";
                if [ $count -gt 0 ]
                then
                        echo "$(sed '1i\#include<stdio.h>\' $i)" > $i;
                fi
                echo $i;
        done
fi

