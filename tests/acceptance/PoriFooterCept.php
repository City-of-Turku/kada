<?php 
$I = new WebGuy($scenario);	
$I->wantTo("Confirm that the footer links exist");
$I->maximizeWindow();
$I->amOnPage('');
$I->seeInTitle("Beta.pori.fi");
$I->see('Uutinen');

print "\nFind Logo.\n\n";
//Logo - This has old Turku information and not Pori information as expected. 
$I->seeElement('//*[@id="footer"]/div/div[1]/h2/a');

//Organisaatio
print "\nFind Organisaatio Elements.\n\n";
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[1]/a');	
//Menu
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[1]/ul/li[1]/a');		//Kaupungin johto
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[1]/ul/li[2]/a');		//Konsernihallinto
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[1]/ul/li[3]/a');		//Toimialat
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[1]/ul/li[4]/a');		//Konserninyhtiöt ja yhteisöt
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[1]/ul/li[5]/a');		//Palvelkeskukset

//Päätöksenteko
print "\nFind Päätöksenteko Elements\n\n";
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[2]/a');	
//Menu	
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[2]/ul/li[1]/a');		//Esityslistat ja pöytäkirjat
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[2]/ul/li[2]/a');		//Kaupunginvaltuusto
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[2]/ul/li[3]/a');		//Kaupunginhallitus
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[2]/ul/li[4]/a');		//Lauta- ja johtokunnat
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[2]/ul/li[5]/a');		//Kuulutukset
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[2]/ul/li[6]/a');		//Osallistu ja vaikuta
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[2]/ul/li[7]/a');		//Vallit

//Talous ja Strategia
print "\nFind Talous ja Strategia Elements.\n\n";
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[3]/a');
//Menu
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[3]/ul/li[1]/a');		//Rahoitus ja sijoitus
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[3]/ul/li[2]/a');		//Strategiat ja ohjelmat
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[3]/ul/li[3]/a');		//Talousarviot
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[3]/ul/li[4]/a');		//Tilipäätös ja seurantaportit
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[3]/ul/li[5]/a');		//Avustukset

//Ota Yhteyttä
print "\nFind Ota Yhteyttä Elements\n\n";
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[4]/a');
//Menu
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[4]/ul/li[1]/a');		//Anna palautetta
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[4]/ul/li[2]/a');		//Asioi verkossa (eKunta)
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[4]/ul/li[3]/a');		//Laskutus ja maksaminen
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[4]/ul/li[4]/a');		//Neuvonta
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[4]/ul/li[5]/a');		//Palveluhakemisto
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[4]/ul/li[6]/a');		//Vuokrattavat tilat
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[4]/ul/li[7]/a');		//Yhteystieot
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[4]/ul/li[8]/a');		//Viestintä

//Pori-Tieto
print "\nFind Pori-tieto Elements\n\n";
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[5]/a');
//Menu
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[5]/ul/li[1]/a');		//Pori-info
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[5]/ul/li[2]/a');		//Kysymystori
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[5]/ul/li[3]/a');		//Kartat ja paikkatieto
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[5]/ul/li[4]/a');		//Palvelukartta
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[5]/ul/li[5]/a');		//Tietosuoja
$I->seeElement('//*[@id="block-menu-block-8"]/div/ul/li[5]/ul/li[6]/a');		//Tilastot

$I->makeScreenshot('Footer Elements');

?>