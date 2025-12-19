#! /bin/bash

success=0
fail=0
try=1

# HELP
if diff <(./unit_tests_sh -h) "tests/answers/help" > /dev/null; then
    echo "Help message : OK"
    ((success++))
else
    echo "Help message : KO"
    ((fail++))
fi

# ERRORS

# BASICS

# SCORE
score=$(( success * 100 / $try))
echo "Try: $try/$try ; successs: $success/$try ; Fails: $fail/$try ; Percent: $score%"
