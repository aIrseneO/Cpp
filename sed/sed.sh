#! /bin/sh
if [ "$#" -ne 3 ]; then
    echo "Usage: $0 String1 String2 Filename" >&2
    exit 1
fi
if [ ! -f "$3" ]; then
    echo "Tests should be done with an existing file" >&2
    exit 1
fi
if [ "$1" = "" ]; then
    echo "First string can't be empty (sed)" >&2
    exit 1
fi
/bin/sed "s|$1|$2|g" $3 > _test_org_
if [ $? != 0 ]; then
    echo "`sed` system failed"
    cat _test_org_
    rm -rf _test_org_
    exit 1
fi
./sed  "$1" "$2" $3 > _test_cpy_
if [ $? != 0 ]; then
    echo "`./sed` failed"
    cat _test_cpy_
    rm -rf _test_org_ _test_cpy_
    exit 1
fi
diff _test_org_ _test_cpy_ > /dev/null 2>&1
if [ $? -eq 0 ]; then
    echo OK
else
    echo Failed
fi
rm -rf _test_org_ _test_cpy_
exit 0