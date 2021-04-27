declare -l NAME="lista" || NAME="lista"
clear

cd assets

gcc -c ./lib/$NAME.c -o $NAME.o

gcc main.c $NAME.o -o main

./main && echo

echo 
echo " -- PAUSE -- "
read pause

rm ./lib/$NAME.o
rm main


clear
