#!/bin/bash

while true; do
    read -p "Enter something (or type 'exit' to quit): " input

    if [[ "$input" == "exit" ]]; then
        echo "Goodbye!"
        break
    fi

    # Look for a number
    if [[ "$input" =~ ([0-9]+) ]]; then
        number="${BASH_REMATCH[1]}"
        incremented=$((number + 1))

        # Replace the first occurrence of the number with the incremented value
        updated="${input/$number/$incremented}"

        echo "Updated string: $updated"
    else
        echo "No number found in input"
    fi
done
