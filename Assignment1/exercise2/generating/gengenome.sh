#!/bin/bash

declare -a GENOMES
file=$1
zero=0
one=1
two=2
three=3

if [ -e $file ]; then
	echo "File with same name exists."
	exit 1
else
	echo "Creating new file.."
fi

for i in {1..500}
do
	s=""
	for j in {1..100}
	do
		number=$[ ($RANDOM % 4) ]
		if [ $number -eq $zero ] ; then
			s+="A"
		else
			if [ $number -eq $one ]; then
				s+="G"
			else
				if [ $number -eq $two ]; then
					s+="T"
				else
					s+="C"
				fi
			fi
		fi
	done
	echo $s >> $file
done
