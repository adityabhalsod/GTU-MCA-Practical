echo "1-Current Dir";
echo "2-List Dir";
echo "3-Make Dir";
echo "4-Change Dir";
echo "5-Copy a file";
echo "6-Rename";
echo "7-Delete";
echo "8-Edit a file";
echo "Enter Ch..";
read ch;
if [ $ch -eq 1 ]
then
	echo "YOUR CHOICE IS TO DISPLAY CURRENT DIRECTORY";
	echo `pwd`;
elif [ $ch -eq 2 ]
then
	echo "YOUR CHOICE IS TO LIST THE FILE IN DIRECTORY";
	echo "FILE AND DIRECTORIES IN CURRENT DIRECTORY ARE ";
	echo `ls`;
elif [ $ch -eq 3 ]
then
	echo "YOUR CHOICE IS TO CREATE DIRECTORY";	
	echo "Enter Dir Name";
	read dir;
	`mkdir $dir`
	echo "Directory Created successfully";
elif [ $ch -eq 4 ]
then
	echo "YOUR CHOICE IS TO CHANGE DIRECTORY";
	echo "ENTER DIRECTORY TO CHANGE";        
	echo "Enter Dir Name";
        read dir;
        cd $dir;
	echo "CHANGED SUCCESS "`pwd`;
elif [ $ch -eq 5 ]
then
 echo "Enter file to COPY";
 read file;
 echo "Enter Directory to which file is to be copied";
 read dir;
 cp $file $dir;
elif [ $ch -eq 6 ]
then
 echo "YOUR CHOICE IS TO RENAME A FILE";
 echo "ENTER FILE TO RENAME";
 read file;
 echo "ENTER NEW NAME";
 read name;
 mv $file $name;
elif [ $ch -eq 7 ]
then
 echo "YOUR CHOICE IS TO DELETE A FILE";
 echo "ENTER FILE TO DELETE";
 read file;
 rm -i $file;
elif [ $ch -eq 8 ]
then
 echo "YOUR CHOICE IS TO EDIT A FILE"
 echo "ENTER FILENAME TO EDIT ";
 read file;
 echo "ENTER NEW DATA TO WRITE";
 read newdata;
 echo $newdata > $file;
else
 echo "ENTER CORRECT OPTION";

fi
