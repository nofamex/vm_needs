#!/bin/bash
# REV00 Fri 12 Mar 18:49:46 WIB 2021
# START Thu 11 Mar 17:37:18 WIB 2021
# ==================================

# Read tlpi-dist/README
# Read tlpi-dist/BUILDING
RESULT="W03-FUSE.txt"
TOKEN="OS211W03"
DIR="fuse-tutorial-2018-02-04"

# Delete Old File
rm -f $RESULT

# Go Inside
cd $DIR/
pwd

# configure
./configure    

# compile all
make clean
make

# .bash_alises
source ~/.bash_aliases

# make a token with OS211W04
chktoken $TOKEN                       >  $RESULT
echo "==="                             >> $RESULT

# date
date                                   >> $RESULT
echo "==="                             >> $RESULT
sleep 1

# Do FUSE
cd example

ls -al                                 >> ../$RESULT
echo "ls -al rootdir ==="              >> ../$RESULT
ls -al rootdir                         >> ../$RESULT
echo "ls -al mountdir ==="             >> ../$RESULT
ls -al mountdir                        >> ../$RESULT
echo "df ==="                          >> ../$RESULT
df                                     >> ../$RESULT
echo "bbfs rootdir/ mountdir/"         >> ../$RESULT
../src/bbfs rootdir/ mountdir/         >> ../$RESULT
echo "df ==="                          >> ../$RESULT
df                                     >> ../$RESULT
echo "cp Makefile mountdir/"           >> ../$RESULT
cp Makefile mountdir/                  >> ../$RESULT
echo "touch mountdir/touch-a-file.txt" >> ../$RESULT
touch mountdir/touch-a-file.txt        >> ../$RESULT
echo "ls -al mountdir ==="             >> ../$RESULT
ls -al mountdir/                       >> ../$RESULT
echo "df ==="                          >> ../$RESULT
df                                     >> ../$RESULT
echo "fusermount -u mountdir"          >> ../$RESULT
fusermount -u mountdir                 >> ../$RESULT
echo "df ==="                          >> ../$RESULT
df                                     >> ../$RESULT
echo "ls -al mountdir ==="             >> ../$RESULT
ls -al mountdir/                       >> ../$RESULT
echo "ls -al rootdir ==="              >> ../$RESULT
ls -al rootdir/                        >> ../$RESULT

# list the whole directory
cd ..
echo "==="                             >> $RESULT
ls -alR                                >> $RESULT
echo "==="                             >> $RESULT

# move $RESULT
mv                                     $RESULT ../

# clean all
make clean

# Go Up
cd ..

echo "Done"
exit
