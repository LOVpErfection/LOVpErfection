Temas: tipos de datos, bool, (If, else if, else), switch, operador ternario

### Proyecto: 

**Descripción general:** Crea un programa que simule un "detective" investigando emociones ocultas. El usuario (como "detective") ingresará datos sobre "pistas" (como curiosidad, evidencia y luces encendidas/apagadas), y el programa evaluará si se resuelve el misterio emocional, generando un veredicto final. Debe ser interactivo, pidiendo inputs al usuario y mostrando outputs claros.

**Requisitos específicos:**

- **Entradas del usuario:**
    - Pide al usuario un nivel de curiosidad (un entero entre 1 y 10).
    - Pide si hay evidencia oculta (un bool: true si sí, false si no).
    - Pide el estado de las luces (una string: "on" o "off").
    - Pide un tipo de emoción sospechada (un char: 'A' para alegría, 'T' para tristeza, 'M' para misterio, o 'O' para otro).
- **Procesos y operaciones a implementar:**
    - Usa tipos de datos básicos: int para el nivel de curiosidad, bool para la evidencia, string para el estado de luces, y char para el tipo de emoción.
    - Evalúa con operadores lógicos: Por ejemplo, verifica si el misterio se resuelve solo si (curiosidad > 5 && evidencia == true) || (luces == "on" && curiosidad >= 3). Almacena el resultado en una variable bool llamada "resuelto".
    - Usa if/else if/else: Basado en el valor de "resuelto", muestra mensajes como: si resuelto es true, "¡Has descubierto la emoción oculta!"; else if curiosidad es baja (menor a 3), "Necesitas más curiosidad para avanzar."; else, "Sigue recolectando pistas."
    - Incorpora un switch: Usa switch en el char de emoción para describir la "revelación": case 'A': "La emoción es alegría brillante."; case 'T': "La emoción es tristeza en la oscuridad."; case 'M': "¡Misterio resuelto como en una novela!"; default: "Emoción desconocida, investiga más."
    - Aplica el operador ternario: Para un mensaje final, usa algo como: string mensajeFinal = (resuelto) ? "Caso cerrado con éxito." : "El misterio continúa..."; y muéstralo al final.

**Entregables:**

- El programa debe compilar sin errores y correr en consola.
- Asegúrate de que maneje inputs inválidos mínimamente (por ejemplo, si curiosidad no está en 1-10, asume un valor por defecto con if).
- Prueba con diferentes combinaciones: alta curiosidad con luces off, baja con evidencia true, etc., para ver cómo responden las lógicas.
- No uses bucles ni funciones avanzadas; mantenlo lineal y simple.
  
  (Ejercicios creados con IA, son retos personales con temas que son de mi interés)