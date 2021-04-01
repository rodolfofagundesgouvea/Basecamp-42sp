#!/bin/sh
# git_ignore - É um script que lista os arquivos ocultos no diretório do meu repositório.
git status --ignored -s | grep '!!' | cut -c 4- 
