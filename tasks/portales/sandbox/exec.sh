#!/bin/bash

problem_name=portales
sandbox=$(dirname "$0")

"${sandbox}/${problem_name}.exe" "$@"
