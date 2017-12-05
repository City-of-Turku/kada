<?php 
$I = new WebGuy($scenario);	
$I->wantTo("Confirm that the footer links exist");
$I->maximizeWindow();
$I->amOnPage('');
$I->seeInTitle("Pori.fi");

print "\nFind Logo.\n\n";
//Logo - This has old Turku information and not Pori information as expected. 
$I->seeElement('//*[@id="footer"]/div/div[1]/h2/a');

//Organisaatio
print "\nFind Organisaatio Elements.\n\n";
//Menu
$selector = '//*[@id="block-menu-block-8"]/div/ul/li[1]';
$I->see('Kaupungin johto', $selector);
$I->see('Toimialat', $selector);
$I->see('Konsernin yhtiöt ja yhteisöt', $selector);
$I->see('Liikelaitokset', $selector);

//Päätöksenteko
print "\nFind Päätöksenteko Elements\n\n";
//Menu
$selector = '//*[@id="block-menu-block-8"]/div/ul/li[2]';
$I->see('Esityslistat ja pöytäkirjat', $selector);
$I->see('Kaupunginvaltuusto', $selector);
$I->see('Kaupunginhallitus', $selector);
$I->see('Jaostot ja lautakunnat', $selector);
$I->see('Kuulutukset', $selector);
$I->see('Osallistu ja vaikuta', $selector);
$I->see('Vaalit', $selector);

//Talous ja Strategia
print "\nFind Talous ja Strategia Elements.\n\n";
//Menu
$selector = '//*[@id="block-menu-block-8"]/div/ul/li[3]';
$I->see('Strategiat ja ohjelmat', $selector);
$I->see('Talousarviot', $selector);
$I->see('Tilinpäätös ja seurantaraportit', $selector);
$I->see('Avustukset', $selector);

//Ota Yhteyttä
print "\nFind Ota Yhteyttä Elements\n\n";
//Menu
$selector = '//*[@id="block-menu-block-8"]/div/ul/li[4]';
$I->see('Anna palautetta', $selector);
$I->see('Asioi verkossa (eKunta)', $selector);
$I->see('Laskutus ja maksaminen', $selector);
$I->see('Neuvonta', $selector);
$I->see('Vuokrattavat tilat', $selector);
$I->see('Yhteystiedot', $selector);
$I->see('Viestintä', $selector);

//Pori-Tieto
print "\nFind Pori-tieto Elements\n\n";
//Menu
$selector = '//*[@id="block-menu-block-8"]/div/ul/li[5]';
$I->see('Pori-info', $selector);
$I->see('Kartat ja paikkatieto', $selector);
$I->see('Palvelukartta', $selector);
$I->see('Tietosuoja', $selector);
$I->see('Tilastot', $selector);

$I->makeScreenshot('Footer Elements');

?>