#!/bin/bash

version=2.5.6~git20140801
debversion=0
ppaversion=1

for d in precise saucy trusty
do
    # Saucy package can be build from 'experimental' branch, with DXF support
    if [ $d = "saucy" ] || [ $d = "trusty" ]
    then
        git checkout experimental
    fi

    git branch $d
    git checkout $d
    sed -i -e 's/archeos/'${d}'/g' -e 's/theodoric/'${d}'/g' debian/changelog
    
    # Precise do not support libfreenect-dev
    if [ $d = "precise" ]
    then
      sed -i 's/, libfreenect-dev//g' debian/control;
      sed -i -e '/\-DLIBFREENECT_INCLUDE_DIR=\"\/usr\/include\" \\/d' -e '/\-DLIBFREENECT_LIBRARY_FILE=\"\-lfreenect\" \\/d' -e '/\-DINSTALL_QKINECT_PLUGIN=ON \\/d'  debian/rules;
    fi
    
    git commit -am "Release"
    git-buildpackage -S --git-debian-branch=$d
    dput cloudcompare-$d "../release/cloudcompare_"${version}"-"${debversion}${d}${ppaversion}"_source.changes"
    git checkout master
    git branch -D $d;
done
rm -rf ../release/cloudcompare*
