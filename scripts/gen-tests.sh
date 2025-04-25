#!/bin/bash

if [ -z "$1" ]; then
  echo "Uso: $0 full_solution.cpp task"
  exit 1
fi

if [ -z "$2" ]; then
  echo "Uso: $0 full_solution.cpp task"
  exit 1
fi


SOURCE="$1"
TASK="$2"
EXE="program.out"
BASE=$(basename "$SOURCE" .cpp)

# Compilar
g++ -std=c++20 "$SOURCE" -o "$EXE"
if [ $? -ne 0 ]; then
  echo "❌ Error al compilar $SOURCE"
  exit 1
fi

# Ejecutar para cada archivo de entrada
for infile in $TASK/tests/*.in; do
  outfile="${infile%.in}.out"
  echo "▶ Ejecutando con $infile → $outfile"
  ./"$EXE" < "$infile" > "$outfile"
done

echo "✅ Finalizado."
