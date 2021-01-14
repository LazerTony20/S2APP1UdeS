#!/bin/bash
echo test
git add -A
read -p 'Commit name:' commitname
read -p 'Commit Description:' commitdescription
git commit -m $commitname $commitdescription
