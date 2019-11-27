arg=$#;
if [ $arg -eq 0 ]
then 
	for i in $(find -name "*.[Cc]")
	 do 
		echo "$(sed -n '1,10p' $i)";
		rm -i $i;
	done
else
	for i in $*
		do 
			if [ ! -f $i ]
			then 
			  echo "not found";
			else
			  echo "$(sed -n '1,10p' $i)";
			  rm -i $i;
			fi
		done
		 

fi
