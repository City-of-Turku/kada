<?php
$I = new WebGuy($scenario);
$I->wantTo('Find content');
$I->maximizeWindow();

$I->amOnPage('/');

$I->click('Asuminen ja ympäristö', '#block-menu-block-2');

$I->amOnPage('/asuminen-ja-ymp%C3%A4rist%C3%B6');
$I->see('Asuminen ja ympäristö', 'h1');

$I->click('Asuminen', '.liftup-box-list');

$I->amOnPage('/asuminen-ja-ymp%C3%A4rist%C3%B6/asuminen');
$I->see('Asuminen', 'h1');

$I->click('Asunnon hankkiminen', '.liftup-box-list');

$I->amOnPage('/asuminen-ja-ymp%C3%A4rist%C3%B6/asuminen/asunnon-hankkiminen');
$I->see('Asunnon hankkiminen', 'h1');