# Independent ReactOS RegEdit

This is `"Independent ReactOS RegEdit"` from [ReactOS](https://reactos.org/).

It's a free and open source software for Windows XP and later.

- Donate ReactOS: https://reactos.org/donate/
- Follow ReactOS: https://twitter.com/reactos

## Main code contributors

- Copyright 1999 Sylvain St-Germain
- Copyright 2002 Andriy Palamarchuk
- Copyright 2002 Robert Dickenson (robd@reactos.org)
- Copyright 2003 Dimitrie O. Paun
- Copyright 2004-2006 Thomas Weidenmueller (w3seek@reactos.com)
- Copyright 2008 Alexander N. Sørnes (alex@thehandofagony.com)
- Copyright 2010 Adam Kachwalla (geekdundee@gmail.com)
- Copyright 2012 Edijs Kolesnikovics (terminedijs@yahoo.com)
- Copyright 2012 Gr�gori Mac�rio Harbs (mysoft64bits at gmail dot com)
- Copyright 2012 Hermès Bélusca - Maïto (hermes.belusca@sfr.fr)
- Copyright 2023 Katayama Hirofumi MZ (katayama.hirofumi.mz@gmail.com)
- and more!

## Translators

- Copyright 2007 Zhang Bing (e_zb@21cn.com) (ezb@mail.gywb.cn)
- Copyright 2007-2011 Caemyr - Olaf Siejka
- Copyright 2007-2013 Paolo Devoti (devotip@tiscali.it)
- Copyright 2011 Caemyr
- Copyright 2011 Saibamen - Adam Stachowicz (saibamenppl@gmail.com)
- Copyright 2011 wojo664
- Copyright 2011-2018 Ștefan Fulea (stefan.fulea@mail.com)
- Copyright 2013 Ivan Di Francesco (oswetto) (ivan.difrancesco@yahoo.it)
- Copyright 2013-2015 Erdem Ersoy (eersoy93) (erdemersoy [at] erdemersoy [dot] net)
- Copyright 2014 Ismael Ferreras Morezuelas
- Copyright 2014-2016 Henry Tang Ih (henrytang2@hotmail.com)
- Copyright 2018 Li Keqing (forucial@icloud.com)
- Copyright 2018 Luke Luo (njlyf2011@hotmail.com)
- Copyright 2021 Chan Chilung (eason066@gmail.com)
- Copyright 2021 Wu Haotian (rigoligo03@gmail.com)
- Copyright 2023 Andrei Miloiu (miloiuandrei@gmail.com)
- Copyright Ardit Dani (Ard1t) (ardit.dani@gmail.com)
- Copyright Artem Reznikov, Igor Paliychuk
- Copyright Mário Kačmár /Mario Kacmar/ aka Kario (kario@szm.sk)
- Copyright Seungju Kim (manatails007)
- Copyright Sumath Aowsakulsutthi
- and more!

## How to build?

Please use ReactOS Build Environment (RosBE).

	git clone https://github.com/katahiromz/RRegEdit
	cd RRegEdit
	cmake -G Ninja -DCMAKE_BUILD_TYPE=Release .
	ninja
	strip regedit.exe

Tested on RosBE.

## License

- LGPL 2.1 and later
