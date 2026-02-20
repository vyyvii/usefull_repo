#! /bin/bash

success=0
fail=0
try=0

# HELP
((try++))
if diff <(./functional_tests -h) "tests/answers/help" > /dev/null; then
    echo "Help message : OK"
    ((success++))
else
    echo "Help message : KO"
    ((fail++))
fi

((try++))
./functional_tests -h
if [ $? -eq 0 ]; then
    echo "Help exit code : OK"
    ((success++))
else
    echo "Help exit code : KO"
    ((fail++))
fi

# ERRORS
# BASICS
# SCORE
score=$(( success * 100 / $try))
echo "Try: $try ; successs: $success/$try ; Fails: $fail/$try ; Percent: $score%"
