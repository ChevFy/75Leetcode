#!/usr/bin/env bash
# Usage: ./compile.sh <problem-number>
# Finds the .cpp file whose name starts with that number, compiles, runs.

set -e

if [ -z "$1" ]; then
	echo "Usage: $0 <problem-number>"
	exit 1
fi

num="$1"
root="$(cd "$(dirname "$0")" && pwd)"

src="$(find "$root" -type f -name "${num}_*.cpp" | head -n 1)"

if [ -z "$src" ]; then
	echo "No .cpp file found for problem $num"
	exit 1
fi

out="$(mktemp -t leet_${num})"

echo ">> Compiling: $src"
g++ -std=c++17 "$src" -o "$out"

echo ">> Running:"
echo "------------------------"
"$out"
echo
echo "------------------------"

rm -f "$out"
