#! /bin/sh
######################## Functions #########################
make_mainfile() {
	sed "s|Myclass|$1|g" $2 >> main$1.cpp || \
		echo "Missing skeleton mainMyclass.c"

}

make_makefile() {
	sed "s|Myclass|$1|g" $2 >> makefile$1 || \
		echo "Missing skeleton makefileMyclass"
}

make_class_cpp() {
	sed "s|Myclass|$1|g" $2 >> $1.cpp || \
		echo "Missing skeleton Myclass.cpp"
}

make_class_hpp() {
	sed "s|Myclass|$1|g" $2 >> $1.hpp || \
		echo "Missing skeleton Myclass.hpp"
}
############################################################
if [ "$#" != 2 ]; then
	echo "Usage: $0 ClassName Skeletons_Directory"; exit 1
fi
#
if [ ! -d $2 ]; then
	echo "$2 is not a directory"; exit 1
fi
#
make_mainfile $1 $2/mainMyclass.cpp
make_makefile $1 $2/makefileMyclass
make_class_cpp $1 $2/Myclass.cpp
make_class_hpp $1 $2/Myclass.hpp
