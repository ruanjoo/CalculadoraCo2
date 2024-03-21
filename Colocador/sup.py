import pyautogui
import time

time.sleep(10)
# Obtém a posição atual do mouse
posicao = pyautogui.position()

# Imprime as coordenadas x e y
print("Posição do mouse - X:", posicao.x, "Y:", posicao.y)
