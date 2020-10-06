echo "working directory:"

read dir

if [ $dir ]
then
	cd $dir

	if [ $? -ne 0 ]
	then
		echo "error! cannot change directory"
	fi

fi

for i in *
do
	if [ -f $i ]
	then
		mv $i `echo $i | tr '[A-Z][a-z]' '[a-z][A-z]'`
	fi
done
