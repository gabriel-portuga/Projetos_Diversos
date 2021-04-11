from selenium import webdriver
from selenium.webdriver.chrome.options import Options
import time


class WhatsappBot:
    def __init__(self):
        # Parte 1 - A mensagem que você quer enviar
        self.mensagem = "Testando o bot que eu criei\nSigam e compartilhem:\n" \
                        "https://www.instagram.com/noriodecaboarabo/"
        # Parte 2 - Nome dos grupos ou pessoas a quem você deseja enviar a mensagem
        self.grupos_ou_pessoas = ["Cacau Marapodi", "Fotos trilhas e afins", "Comunicação Interna"]
        options = webdriver.ChromeOptions()
        options.add_argument('lang=pt-br')
        self.driver = webdriver.Chrome(
            executable_path=r'./chromedriver.exe', chrome_options=options)

    def EnviarMensagens(self):
            self.driver.get('https://web.whatsapp.com')
            time.sleep(30)
            for grupo_ou_pessoa in self.grupos_ou_pessoas:
                campo_grupo = self.driver.find_element_by_xpath(
                    f"//span[@title='{grupo_ou_pessoa}']")
                time.sleep(3)
                campo_grupo.click()
                chat_box = self.driver.find_element_by_class_name('_2A8P4')
                time.sleep(3)
                chat_box.click()
                chat_box.send_keys(self.mensagem)
                botao_enviar = self.driver.find_element_by_xpath(
                    "//span[@data-icon='send']")
                time.sleep(3)
                botao_enviar.click()
                time.sleep(5)


bot = WhatsappBot()
bot.EnviarMensagens()

# <span dir="auto" title="Comunicação Interna" class="_35k-1 _1adfa _3-8er">Comunicação Interna</span>
# <div tabindex="-1" class="_2A8P4">
# <span data-testid="send" data-icon="send" class="">
