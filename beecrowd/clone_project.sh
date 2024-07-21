#!/bin/bash

# Clona o repositorio base para um nome desejado

PROJECT_DIR="project-base/";

echo "Qual o nome do seu projeto?"
read -r ENTRY; # Le a entrada do usuario

echo
echo "Clonando seu projeto..."
cp -r $PROJECT_DIR $ENTRY;

cd $ENTRY;
$EDITOR program.c;
