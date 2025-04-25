view_statement() {
  cd tasks/$1/statement || exit

  URL="http://127.0.0.1:8000/index.html"

  if command -v xdg-open > /dev/null; then
    xdg-open "$URL"
  elif command -v open > /dev/null; then
    open "$URL"
  elif command -v start > /dev/null; then
    start "$URL"
  else
    echo "❌ No se pudo abrir el navegador. Abre manualmente: $URL"
  fi

  http-server . -p 8000
}

view_statement $1
