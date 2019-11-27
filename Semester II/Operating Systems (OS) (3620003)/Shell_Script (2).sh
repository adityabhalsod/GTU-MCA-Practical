#
# Write a script to copy the file system from two directories to a new directory in such a way that only the 
# latest file is copied in case there are common files in both the directories. 
#
echo -n "Enter name of the first directory --->"
read d1

echo -n "Enter name of the second directory --->"
read d2

if [ ! -d $d1 ]
then
        echo "Please enter proper first directory"
    exit;
elif [ ! -d $d2  ]
then
        echo "Please enter proper second directory"
	exit;
fi

echo -n "Enter name of the destination directory ---> "
read dest

if [ -d $dest  ]
then
        echo "Destination directory is already exist"
else
        mkdir $dest
        echo "Destination directory is created"
fi

#write filenames in text file

`ls $d1 > dirfile1.txt`
`ls $d2 > dirfile2.txt`

for i in `comm -23 dirfile1.txt dirfile2.txt`
do
        `cp $d1/$i $dest`
done
echo "Unique file of first directory is copied to destination"

for i in `comm -13 dirfile1.txt dirfile2.txt`
do
        `cp $d2/$i $dest`
done
echo "Unique file of second directory is copied to destination"

#copying latest common files to destination

for i in `comm -12 dirfile1.txt dirfile2.txt`
do
        cp `ls -lt $d1/$i $d2/$i | tr -s " " | cut -d " " -f10 | head -n1` $dest

done
