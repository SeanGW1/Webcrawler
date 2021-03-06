#ifndef language_fr_h
#define language_fr_h
/*
 * language_fr.h
 * Localization support for HTML Tidy.
 *
 *
 * This file is a localization file for HTML Tidy. It will have been machine
 * generated or created and/or edited by hand. Both are valid options, but
 * please help keep our localization efforts simple to maintain by maintaining
 * the structure of this file, and changing the check box below if you make
 * changes (so others know the file origin):
 *
 * [X] THIS FILE IS MACHINE GENERATED. It is a localization file for the
 *     language (and maybe region) "fr". The source of
 *     these strings is a gettext PO file in Tidy's source, probably called 
 *     "language_fr.po".
 *
 * [ ] THIS FILE WAS HAND MODIFIED. Translators, please feel to edit this file
 *     directly (and check this box). If you prefer to edit PO files then use
 *     `poconvert.rb msgunfmt language_fr.h` (our own
 *     conversion tool) to generate a fresh PO from this file first!
 *
 * (c) 2015-2017 HTACG
 * See tidy.h and access.h for the copyright notice.
 *
 * Template Created by Jim Derry on 01/14/2016.
 *
 * Orginating PO file metadata:
 *   PO_LAST_TRANSLATOR=jderry
 *   PO_REVISION_DATE=2017-10-05 15:13:40
 */

#ifdef _MSC_VER
#pragma execution_character_set("utf-8")
#endif


/**
 *  This language-specific function returns the correct pluralForm
 *  to use given n items, and is used as a member of each language
 *  definition.
 */
static uint whichPluralForm_fr(uint n) {
    /* Plural-Forms: nplurals=2; */
    return (n > 1);
}


/**
 *  This structure specifies all of the strings needed by Tidy for a
 *  single language. Static definition in a header file makes it
 *  easy to include and exclude languages without tinkering with
 *  the build system.
 */
static languageDefinition language_fr = { whichPluralForm_fr, {
    /***************************************
     ** This MUST be present and first. 
     ** Specify the code for this language.
     ***************************************/
    {/* Specify the ll or ll_cc language code here. */
      TIDY_LANGUAGE,                                 0, "fr"
    },
    { TidyAccessibilityCheckLevel,                   0,        
        "Cette option pr??cise le niveau de contr??le d'accessibilit?? que Tidy doit ??ventuellement ex??cuter. "
        "Le <br/>niveau <var>0 (Tidy Classic)</var> est ??quivalent au contr??le d'accessibilit?? de Tidy "
        "Classic. <br/>Pour plus d'informations sur le contr??le d'accessibilit?? de Tidy, consultez <a href="
        "\"http://www.html-tidy.org/accessibility/\"> la page d'accessibilit?? de Tidy</a>. "
    },
    { TidyAltText,                                   0,        
        "Cette option pr??cise la valeur par d??faut du texte <code>alt=</code> qu'utilise Tidy pour les "
        "attributs <code>&lt;img&gt;</code> lorsque l'attribut <code>alt=</code> est absent. <br/> Utiliser "
        "avec toute l'attention n??cessaire, il est en effet de votre responsabilit?? de rendre vos documents "
        "accessibles aux personnes qui ne peuvent pas voir les images."
    },
    { TidyAnchorAsName,                              0,        
        "Cette option contr??le la suppression ou l'ajout de l'attribut <code>name</code> pour les ??l??ments "
        "qui peuvent servir d'ancre. <br/>Si la valeur de l'attribut <code>name</code> est <var>yes</var>, "
        "et qu'il n'existe pas d??j??, il est ajout?? ?? la suite d'un attribut <code>id</code> existant, si la "
        "DTD le permet. <br/>Si sa valeur est <var>no</var>, tout attribut <code>name</code> existant est "
        "supprim??, si un attribut <code>id</code> existe ou a ??t?? ajout??. "
    },
    { TidyAsciiChars,                                0,        
        "Peut ??tre utilis?? pour modifier le comportement de l'option <code>clean</code> si sa valeur est "
        "<var>yes</var>. <br/> Lorsque la valeur de <code>clean</code> vaut <var>yes</var>, <code>&amp;"
        "emdash;</code>, <code>&amp;rdquo;</code>, et d'autres entit??s nomm??es sont d??class??es vers leurs "
        "plus proches ??quivalents ASCII."
    },
    { TidyBlockTags,                                 0,        
        "Cette option d??finit de nouvelles balises de type bloc. Elle prend une liste de noms de balises "
        "s??par??s par un espace ou une virgule. <br/>?? moins que vous ne d??clariez de nouvelles balises, Tidy "
        "refusera de produire une sortie si l'entr??e introduit pr??alablement des balises inconnues. <br/"
        ">Notez qu'il est impossible de modifier le mod??le de contenu pour des ??l??ments comme <code>&lt;"
        "table&gt;</code>, <code>&lt;ul&gt;</code>, <code>&lt;ol&gt;</code> et <code>&lt;dl&gt;</code>. <br/"
        ">Cette option est ignor??e avec le mode XML. "
    },
    { TidyBodyOnly,                                  0,        
        "Cette option pr??cise si Tidy doit seulement afficher les contenus de la balise <code>&lt;body&gt;</"
        "code> en tant que fragment HTML. <br/>Si sa valeur est <var>auto</var>, ceci est effectu?? seulement "
        "si la balise <code>&lt;body&gt;</code> a ??t?? d??duite. <br/>L'int??r??t est de pouvoir incorporer "
        "enti??rement des pages existantes en tant que partie d'une autre page. <br/>Cette option n'a pas "
        "d'effet si la sortie XML a ??t?? demand??e. "
    },
    { TidyBreakBeforeBR,                             0,        
        "Cette option pr??cise si Tidy doit ajouter un saut de ligne avant chaque ??l??ment <code>&lt;br&gt;</"
        "code>."
    },
    { TidyCharEncoding,                              0,        
        "Cette option permet de pr??ciser l'encodage des caract??res qui sera utilis?? par Tidy pour l'entr??e "
        "et la sortie. <br/>Pour l'<var>ascii</var> Tidy acceptera les valeurs de caract??re Latin-1 "
        "(ISO-8859-1), mais utilisera les entit??s pour tous les caract??res de valeur &gt;127. <br/>Pour la "
        "valeur <var>raw</var>, Tidy produira des valeurs au dessus de 127, sans les traduires en entit??s. "
        "<br/>Pour <var>latin1</var>, les caract??res au dessus de 255 seront ??crits en entit??s. <br/>Pour "
        "<var>utf8</var>, Tidy suppose qu'aussi bien l'entr??e que la sortie sont encod??s en UTF-8. <br/>Vous "
        "pouvez utiliser <var>iso2022</var> pour les fichiers utilisant la famille d'encodage ISO-2022, par "
        "exemple ISO-2022-JP. <br/>Pour <var>mac</var> et <var>win1252</var>, Tidy acceptera les valeurs de "
        "caract??res sp??cifiques de l'??diteur, mais utilisera les entit??s pour tous les caract??res de valeur "
        "&gt;127. <br/>Pour les encodages non support??s, utilisez un utilitaire tiers pour convertir depuis "
        "et vers l'UTF-8. "
    },
    { TidyCoerceEndTags,                             0,        
        "Cette option pr??cise si Tidy doit forcer la fermeture d'une balise d'ouverture, dans les cas o?? il "
        "semble qu'une balise de fin soit attendue; Dans cet exemple,<br/><code>&lt;span&gt;foo &lt;b&gt;"
        "bar&lt;b&gt; baz&lt;/span&gt;</code> <br/>Tidy va produire <br/><code>&lt;span&gt;foo &lt;b&gt;"
        "bar&lt;/b&gt; baz&lt;/span&gt;</code> "
    },
    { TidyCSSPrefix,                                 0,        
        "Cette option pr??cise le pr??fixe que Tidy utilise pour les r??gles de styles. <br/> Par d??faut, "
        "<var>c</var> sera utilis??."
    },
    { TidyDecorateInferredUL,                        0,        
        "Cette option pr??cise si Tidy doit d??corer le code d??duit des ??l??ments <code>&lt;ul&gt;</code> avec "
        "du balisage CSS pour ??viter un d??calage d'indentation vers la droite. "
    },
    { TidyDoctype,                                   0,        
        "Cette option sp??cifie la d??claration DOCTYPE g??n??r??e par Tidy. <br/> Si <var>omit</var>, la sortie "
        "ne contiendra pas de d??claration DOCTYPE. Notez que cela implique aussi que <code>numeric-entities</"
        "code> soit r??gl?? sur <var>yes</var>. <br/> Si <code>html5</code>, la d??claration DOCTYPE est r??gl??e "
        "sur <code>&lt;! DOCTYPE html&gt;</code>. <br/> Si <var>auto</var> (par d??faut), Tidy tentera de "
        "d??duire la d??claration DOCTYPE ?? partir du contenu du document. <br/> Si elle est d??finie "
        "<var>strict</var>, Tidy utilisera la d??claration DOCTYPE HTML4 ou XHTML 1 DTD strict. <br/> Si "
        "<var>loose</var>, la d??claration DOCTYPE est r??gl??e sur HTML4 ou XHTML1 loose (transitional) DTD. "
        "<br/> En alternative, vous pouvez fournir une cha??ne pour l'identificateur public formel (FPI).<br/"
        "> Par exemple: <br/> <code>doctype: \"- // ACME // DTD HTML. 3,14159 //EN\"</code> <br/> Si vous "
        "sp??cifiez le FPI pour un document XHTML, Tidy ??tablira l'identifiant syst??me ?? une cha??ne vide. "
        "Pour un document HTML, Tidy ajoute un identifiant syst??me seulement s'il ??tait d??j?? pr??sent, dans "
        "le but de pr??server le mode de rendu de certains navigateurs. Tidy ne tient pas compte de la "
        "d??claration DOCTYPE pour les documents XML g??n??riques inchang??s. <br/> Cette option ne permet pas "
        "une validation de la conformit?? du document."
    },
    { TidyDropEmptyElems,                            0, "Cette option pr??cise si Tidy doit rejeter les ??l??ments vides."                                          },
    { TidyDropEmptyParas,                            0, "Cette option pr??cise si Tidy doit rejeter les paragraphes vides."                                       },
    { TidyDropPropAttrs,                             0,        
        "Cette option pr??cise si Tidy doit enlever les attributs propri??taires, comme les attributs de "
        "liaison de donn??es Microsoft. Les attributs suppl??mentaires qui ne sont pas autoris??s dans la "
        "version HTML en sortie, seront supprim??s avec l'utilisation conjointe de l'option <code>strict-tags-"
        "attributes</code>."
    },
    { TidyDuplicateAttrs,                            0,        
        "Cette option pr??cise quel attribut, du premier ou du dernier, Tidy doit garder s'il est r??p??t??, par "
        "exemple dans le cas de deux attributs <code>align</code>."
    },
    { TidyEmacs,                                     0,        
        "Cette option pr??cise si Tidy doit adopter un format de rapports d'erreurs et d'avertissements plus "
        "facilement exploitable par GNU Emacs."
    },
    { TidyEmptyTags,                                 0,        
        "Cette option pr??cise les nouvelles balises inline. Cette option prend une liste de noms de balises "
        "s??par??s par un espace ou une virgule. <br/>Tant que vous n'avez pas d??clar?? de nouvelles balises, "
        "Tidy refusera de g??n??rer un fichier nettoy?? si l'entr??e contient des balises inconnues. <br/> "
        "pensez aussi ?? d??clarer les balises vides, soit inline, soit bloc. <br/>Cette option est ignor??e "
        "par le mode XML."
    },
    { TidyEncloseBlockText,                          0,        
        "Cette option pr??cise si Tidy doit ins??rer un ??l??ment <code>&lt;p&gt;</code> pour encadrer un "
        "quelconque texte trouv??, dans n'importe quel ??l??ment qui permet de m??langer du contenu pour "
        "<var>HTML transitional</var> mais pas HTML strict. "
    },
    { TidyEncloseBodyText,                           0,        
        "Cette option pr??cise si Tidy doit encadrer les textes trouv??s dans l'??l??ment <code>body</code>, par "
        "un ??l??ment <code>&lt;p&gt;</code>. <br/>Elle peut ??tre utile lorsque vous voulez modifier du HTML "
        "existant au moyen d'une feuille de style. "
    },
    { TidyErrFile,                                   0,        
        "Cette option pr??cise le fichier d'erreur que Tidy utilise pour les erreurs et avertissements. En "
        "principe les erreurs et avertissements sont envoy??s vers la sortie <code>stderr</code>."
    },
    { TidyEscapeCdata,                               0,        
        "Cette option pr??cise si Tidy doit convertir les sections <code>&lt;![CDATA[]]&gt;</code> en texte "
        "normal. "
    },
    { TidyEscapeScripts,                             0,        
        "Cette option entra??ne l'??chappement des items qui semblent ??tre des balises de fermeture, ainsi "
        "<code>&lt;/g</code> sera ??chapp??e en <code>&lt;\\/g</code>. Positionner cette option ?? <var>no</"
        "var> si vous ne voulez pas cette fonctionnalit??."
    },
    { TidyFixBackslash,                              0,        
        "Cette option pr??cise si Tidy doit remplacer les caract??res de barre oblique invers??e (anti-slash, "
        "<code>\\</code>) dans les URLs avec des barres obliques (slash, <code>/</code>). "
    },
    { TidyFixComments,                               0,        
        "Cette option pr??cise si Tidy doit remplacer les traits d'unions par le caract??re <code>=</code> "
        "s'il rencontre des traits-d'unions adjacents. <br/>La valeur par d??faut est <var>yes</var>. <br/"
        ">Cette option est fourni pour les utilisateurs de ColdFusion qui utilisent la syntaxe de "
        "commentaire: <code>&lt;!--- ---&gt;</code>. "
    },
    { TidyFixUri,                                    0,        
        "Cette option pr??cise si Tidy doit v??rifier les valeurs d'attributs qui comportent des caract??res "
        "interdits pour les URI, et auquel cas les ??chapper selon les recommandations HTML 4."
    },
    { TidyForceOutput,                               0,        
        "Cette option pr??cise si Tidy doit produire une sortie, m??me si des erreurs ont ??t?? rencontr??es. <br/"
        ">Utilisez cette option avec attention; si Tidy affiche une erreur, cela implique que Tidy n'a pas "
        "??t?? en mesure (ou n'est pas s??r) de pouvoir corriger cette erreur; en cons??quence le r??sultat en "
        "sortie pourrait ne pas ??tre conforme ?? vos attentes. "
    },
    { TidyGDocClean,                                 0,        
        "Cette option pr??cise si Tidy doit activer un comportement sp??cifique pour le nettoyage du HTML "
        "export?? ?? partir de Google Docs."
    },
    { TidyHideComments,                              0, "Cette option pr??cise si Tidy doit afficher en sortie les commentaires."                                 },
    { TidyHtmlOut,                                   0, "Cette option pr??cise si Tidy doit embellir les sorties, lorsqu'il produit du HTML."                     },
    { TidyInCharEncoding,                            0,        
        "Cette option pr??cise l'encodage de caract??re que Tidy utilise pour l'entr??e. Voir <code>char-"
        "encoding</code> pour plus d'informations."
    },
    { TidyIndentAttributes,                          0, "Cette option pr??cise si Tidy doit placer chaque attribut sur une nouvelle ligne."                       },
    { TidyIndentCdata,                               0, "Cette option pr??cise si Tidy doit indenter les sections <code>&lt;![CDATA[]]&gt;</code>."               },
    { TidyIndentContent,                             0,        
        "Cette option pr??cise si Tidy doit indenter les balises de port??e bloc. <br/>Si la valeur est "
        "<var>auto</var> Tidy d??cidera d'indenter ou pas le contenu des balises comme <code>&lt;title&gt;</"
        "code>, <code>&lt;h1&gt;</code>-<code>&lt;h6&gt;</code>, <code>&lt;li&gt;</code>, <code>&lt;td&gt;</"
        "code>, or <code>&lt;p&gt;</code> en s'appuyant sur le contenu incluant un ??l??ment de bloc. <br/"
        ">Positionner <code>indent</code> ?? <var>yes</var> peut engendrer des bugs de structure pour "
        "certains navigateurs. <br/>Utiliser l'option <code>indent-spaces</code> pour contr??ler le nombre "
        "d'espaces ou de tabulations en sortie par niveau d'indentation, et <code>indent-with-tabs</code> "
        "pour pr??ciser si les espaces ou tabulations sont utilis??es. "
    },
    { TidyIndentSpaces,                              0,        
        "Cette option pr??cise le nombre d'espaces ou de tabulations que Tidy utilise pour indenter le "
        "contenu lorsque <code>indent</code> est activ??. <br/>Notez que la valeur par d??faut pour cette "
        "option d??pend de la valeur de <code>indent-with-tabs</code> (voir aussi cette option). "
    },
    { TidyInlineTags,                                0,        
        "Cette option porte sur les nouvelles balises inline non vides. Elle prend en valeur une liste de "
        "noms de balises, s??par??s par un espace ou une virgule. <br/>Sans d??claration de nouvelles balises, "
        "Tidy refusera de g??n??rer un fichier de sortie, si l'entr??e comporte des balises inconnues. <br/"
        ">Cette option est ignor??e avec le mode XML. "
    },
    { TidyJoinClasses,                               0,        
        "Cette option pr??cise si Tidy doit combiner les noms de classe pour produire un nouveau nom de "
        "classe unique, lorsque plusieurs affectations de classes sont d??tect??es sur un ??l??ment."
    },
    { TidyJoinStyles,                                0,        
        "Cette option indique si Tidy doit combiner les styles pour produire un nouveau style unique, "
        "lorsque plusieurs styles sont d??tect??s sur un ??l??ment."
    },
    { TidyKeepFileTimes,                             0,        
        "Cette option pr??cise si Tidy doit pr??server la date de modification des fichiers sur lesquels il "
        "travaille directement. <br/>Mettre cette option ?? <var>yes</var> vous autorise ?? nettoyer les "
        "fichiers sans changer la date de modification, ce qui peut avoir une utilit?? avec certains outils "
        "qui utilisent la date de modification pour des traitements comme le d??ploiement automatique.<br/"
        ">Notez que cette fonctionnalit?? n'est pas support??e par toutes les plateformes. "
    },
    { TidyLiteralAttribs,                            0,        
        "Cette option pr??cise le comportement de Tidy avec les caract??res d'espacement pour les valeurs "
        "d'attributs. <br/>Si la valeur de l'option est <var>no</var>, Tidy normalise les valeurs "
        "d'attributs en rempla??ant n'importe quel nouveau saut de ligne ou tabulation par un espace unique, "
        "et ensuite en rempla??ant n'importe quel espace contigu par un espace unique. <br/>Pour forcer Tidy "
        "?? pr??server les valeurs initiales, les valeurs litt??rales de tous les attributs, et assurer que les "
        "espacements dans les valeurs d'attributs soient inchang??s, passer cette option ?? <var>yes</var>. "
    },
    { TidyLogicalEmphasis,                           0,        
        "Cette option pr??cise si Tidy doit remplacer les occurrences de <code>&lt;i&gt;</code> par <code>&lt;"
        "em&gt;</code> et les occurrences de <code>&lt;b&gt;</code> par <code>&lt;strong&gt;</code>. Les "
        "attributs sont pr??serv??s et inchang??s. <br/>Cette option peut ??tre indiqu??e ind??pendamment de "
        "l'option <code>clean</code>. "
    },
    { TidyLowerLiterals,                             0,        
        "Cette option pr??cise si Tidy doit convertir en minuscules la valeur d'un attribut qui prend une "
        "liste de valeur pr??d??finies. <br/>Ceci est requis pour les documents XHTML. "
    },
    { TidyMakeBare,                                  0,        
        "Cette option pr??cise si Tidy doit supprimer des documents Word 2000, le HTML sp??cifique de "
        "Microsoft, et afficher des espaces en sortie plut??t que des espaces ins??cables, lorsque ceux-ci "
        "sont pr??sents en entr??e."
    },
    { TidyMakeClean,                                 0,        
        "Cette option pr??cise si Tidy doit effectuer le nettoyage de certaines balises historiques de "
        "pr??sentation (actuellement <code>&lt; i&gt;</code>, <code>&lt;b&gt;</code>, <code>&lt;center&gt;</"
        "code> lorsque plac?? entre les balises inline appropri??es, ainsi que <code>&lt; font&gt;</code>). Si "
        "la valeur est <var>yes</var>, les balises historiques seront remplac??es par des balises CSS "
        "<code>&lt;style&gt;</code> et par une structure de balisage appropri??e."
    },
    { TidyMark,                                      0,        
        "Cette option pr??cise si Tidy doit ajouter un ??l??ment <code>meta</code> dans l'ent??te de document, "
        "pour indiquer que le document a ??t?? nettoy?? par Tidy. <br/>Tidy n'ajoutera pas cet ??l??ment "
        "<code>meta</code> s'il existe d??j??. "
    },
    { TidyMergeDivs,                                 0,        
        "Cette option peut ??tre utilis??e pour modifier le comportement de l'option <code>clean</code>, "
        "lorsqu'elle vaut <var>yes</var>. <br/>Cette option pr??cise si Tidy doit concat??ner les ??l??ments "
        "<code>&lt;div&gt;</code> imbriqu??s, comme <code>&lt;div&gt;&lt;div&gt;...&lt;/div&gt;&lt;/div&gt;</"
        "code>. <br/>Si la valeur vaut <var>auto</var>, les attributs internes du <code>&lt;div&gt;</code> "
        "sont d??plac??s vers son div externe. Les <code>&lt;div&gt;</code> imbriqu??s avec des attributs "
        "<code>id</code> ne sont <em>pas</em> concat??n??s. <br/>Si la valeur vaut <var>yes</var>, les "
        "attributs du <code>&lt;div&gt;</code> interne ne sont pas pris en compte, ?? l'exception de "
        "<code>class</code> et de <code>style</code>. "
    },
    { TidyMergeEmphasis,                             0,        
        "Cette option pr??cise si Tidy doit concat??ner les ??l??ments <code>&lt;b&gt;</code> et <code>&lt;i&gt;"
        "</code>; par exemple, pour le cas <br/><code>&lt;b class=\"rtop-2\"&gt;foo &lt;b class=\"r2-2\"&gt;"
        "bar&lt;/b&gt; baz&lt;/b&gt;</code>, <br/>Tidy produira la sortie <code>&lt;b class=\"rtop-2\"&gt;"
        "foo bar baz&lt;/b&gt;</code>. "
    },
    { TidyMergeSpans,                                0,        
        "Cette option peut ??tre utlis??e pour modifier le comportement de <code>clean</code>, si elle vaut "
        "<var>yes</var>.<br/>Cette option pr??cise si Tidy doit concat??ner les <code>&lt;span&gt;</code> "
        "imbriqu??s, comme suit : <code>&lt;span&gt;&lt;span&gt;...&lt;/span&gt;&lt;/span&gt;</code>. <br/"
        ">L'algorithme est le m??me que celui de <code>merge-divs</code>. "
    },
    { TidyNCR,                                       0, "Cette option pr??cise si Tidy doit autoriser les r??f??rences num??riques de caract??res. "                  },
    { TidyNewline,                                   0,        
        "La valeur par d??faut est appropri??e ?? la plateforme d'ex??cution de Tidy. <br/>G??n??ralement "
        "<var>CRLF</var> sur PC-DOS, Windows et OS/2; <var>CR</var> sur Classic Mac OS; et <var>LF</var> "
        "partout ailleurs (Linux, Mac OS X, et Unix). "
    },
    { TidyNumEntities,                               0,        
        "Cette option pr??cise si Tidy doit afficher les entit??s autres que les entit??s HTML int??gr??es "
        "(<code>&amp;amp;</code>, <code>&amp;lt;</code>, <code>&amp;gt;</code>, et <code>&amp;quot;</code>) "
        "dans la forme num??rique plut??t que dans la forme nomm??e. <br/>Seules les entit??s compatibles avec "
        "la d??claration DOCTYPE g??n??r??e sont utilis??es. <br/>Les entit??s qui peuvent ??tre repr??sent??es dans "
        "l'encodage de sortie sont traduites avec leur correspondance. "
    },
    { TidyOmitOptionalTags,                          0,        
        "Cette option pr??cise si Tidy doit omettre les balises optionnelles ouvrantes et fermantes, "
        "lorsqu'il produit une sortie. <br/>Activer cette option entra??ne l'omission en sortie de toutes les "
        "balises correspondantes aux ??l??ments <code>&lt;html&gt;</code>, <code>&lt;head&gt;</code>, and "
        "<code>&lt;body&gt;</code>, de m??me que les balises de fermeture comme <code>&lt;/p&gt;</code>, "
        "<code>&lt;/li&gt;</code>, <code>&lt;/dt&gt;</code>, <code>&lt;/dd&gt;</code>, <code>&lt;/option&gt;"
        "</code>, <code>&lt;/tr&gt;</code>, <code>&lt;/td&gt;</code>, et <code>&lt;/th&gt;</code>. <br/"
        ">Cette option est ignor??e pour la sortie XML. "
    },
    { TidyOutCharEncoding,                           0,        
        "Cette option pr??cise l'encodage de caract??re utilis?? par Tidy pour la sortie. <br/>Notez que cela "
        "peut ??tre diff??rent de <code>input-encoding</code> seulement pour les encodages latins (<var>ascii</"
        "var>, <var>latin0</var>, <var>latin1</var>, <var>mac</var>, <var>win1252</var>, <var>ibm858</var>)."
        "<br/>Voir <code>char-encoding</code> pour plus d'informations."
    },
    { TidyOutFile,                                   0,        
        "Cette option pr??cise le fichier de sortie que Tidy utilise pour la structure de balises. En "
        "principe la structure est ??crite vers <code>stdout</code>. "
    },
    { TidyOutputBOM,                                 0,        
        "Cette option pr??cise si Tidy doit ??crire un caract??re indicateur d'ordre des octets (Unicode Byte "
        "Order Mark ou BOM; connu aussi sous Zero Width No-Break Space; a la valeur de U+FEFF) au d??but de "
        "la sortie, ce qui ne s'applique qu'aux sorties encod??es en UTF-8 et UTF-16. <br/>Si l'option vaut "
        "<var>auto</var>, Tidy ??crira un BOM vers la sortie seulement si un BOM ??tait pr??sent au d??but de "
        "l'entr??e. <br/>Un BOM est toujours ??crit pour la sortie XML/XHTML des sorties encod??es en UTF-16. "
    },
    { TidyPPrintTabs,                                0,        
        "Cette option pr??cise si tidy doit indenter avec des tabulations plut??t que des espaces, en "
        "supposant que <code>indent</code> vaut <var>yes</var>. <br/>D??finir cette option ?? <var>yes</var> "
        "indente avec des tabulations plut??t que des espaces, valeur par d??faut. <br />Utilisez l'option "
        "<code>indent-spaces</code> pour red??finir le nombre de tabulations en sortie par niveau "
        "d'indentation. Notez que lorsque <code>indent-with-tabs</code> est activ??, la valeur par d??faut de "
        "<code>indent-spaces</code> est r??initialis??e ?? <var>1</var>. <br/>Notez que <code>tab-size</code> "
        "contr??le la conversion des tabulations d'entr??e en des espaces de sortie. D??finissez-la ?? z??ro pour "
        "conserver les tabulations en entr??e."
    },
    { TidyPreserveEntities,                          0, "Cette option pr??cise si Tidy doit pr??server les entit??s bien form??es telles que trouv??es en entr??e. "   },
    { TidyPreTags,                                   0,        
        "Cette option pr??cise les nouvelles balises qui doivent ??tre trait??es exactement de la m??me fa??on "
        "que l'??l??ment HTML <code>&lt;pre&gt;</code>. Cette option prend une liste de nom de balises "
        "s??par??es par un espace ou une virgule. <br/>Sauf si vous d??clarez de nouvelles balises, Tidy "
        "refusera de g??n??rer un fichier Tidy en sortie si l'entr??e inclut pr??alablement des balises "
        "inconnues. <br/>Notez que vous ne pouvez encore ajouter de nouveaux ??l??ments CDATA. <br/>Cette "
        "option est ignor??e avec le mode XML. "
    },
    { TidyPunctWrap,                                 0,        
        "Cette option pr??cise si Tidy doit passer ?? la ligne apr??s certains caract??res de ponctuation "
        "Unicode ou chinois."
    },
    { TidyQuiet,                                     0,        
        "Cette option pr??cise si Tidy doit afficher le r??sum?? du nombre des erreurs et avertissements, ou "
        "les messages de bienvenue et d'information."
    },
    { TidyQuoteAmpersand,                            0,        
        "Cette option pr??cise si Tidy doit afficher en sortie les caract??res <code>&amp;</code> en les "
        "??crivant <code>&amp;amp;</code>. "
    },
    { TidyQuoteMarks,                                0,        
        "Cette option pr??cise si Tidy doit afficher les caract??res <code>&quot;</code> comme <code>&amp;quot;"
        "</code> comme pr??f??r?? par certains environnements d'??dition. <br/>Le caract??re apostrophe <code>'</"
        "code> est ??crit <code>&amp;#39;</code> car de nombreux navigateurs webs ne supportent pas encore "
        "l'??criture <code>&amp;apos;</code>. "
    },
    { TidyQuoteNbsp,                                 0,        
        "Cette option pr??cise si Tidy doit afficher les espaces ins??cables en tant qu'entit??s, plut??t qu'en "
        "utilisant la valeur de caract??re unicode 160 (d??cimale). "
    },
    { TidyReplaceColor,                              0,        
        "Cette option pr??cise si Tidy doit remplacer les valeurs num??riques dans les attributs de couleur "
        "par les noms de couleurs HTML/XHTML lorsque d??finies, par exemple en rempla??ant <code>#ffffff</"
        "code> par <code>white</code>. "
    },
    { TidyShowErrors,                                0,        
        "Cette option pr??cise le nombre utilis?? par Tidy pour d??terminer si les erreurs suivantes doivent "
        "??tre montr??es. Si la valeur est <var>0</var>, aucune erreur n'est affich??e. "
    },
    { TidyShowInfo,                                  0, "Cette option pr??cise si Tidy doit afficher les messages de niveau info-level."                          },
    { TidyShowMarkup,                                0,        
        "Cette option pr??cise si Tidy doit g??n??rer un affichage embelli de la structure de balises. Notez "
        "que Tidy ne g??n??rera pas un affichage embelli s'il trouve des erreurs significatives (voir "
        "<code>force-output</code>). "
    },
    { TidyShowWarnings,                              0,        
        "Cette option pr??cise si Tidy doit supprimer les avertissements. Cela peut ??tre utile lorsque "
        "quelques erreurs sont cach??es dans une masse d'avertissements. "
    },
    { TidySkipNested,                                0,        
        "Cette option pr??cise que Tidy doit ignorer les balises imbriqu??es lors de l'analyse des donn??es de "
        "script et de style."
    },
    { TidySortAttributes,                            0,        
        "Cette option pr??cise que Tidy doit classer les attributs d'un ??l??ment en utilisant un algorithme de "
        "classement. Si la valeur est <var>alpha</var>, l'algorithme est un classement alphab??tique "
        "ascendant. "
    },
    { TidyStrictTagsAttr,                            0,        
        "Ces options garantissent que les balises et attributs sont valides pour la version HTML en sortie "
        "de Tidy. Si la valeur est <var>yes</var> (par d??faut) et que le type de document en sortie est une "
        "d??claration doctype stricte, alors Tidy rapportera les erreurs. Si le type de document en sortie "
        "est une d??claration doctype loose ou transitional, alors Tidy rapportera les avertissements. <br/"
        ">En compl??ment, si l'option <code>drop-proprietary-attributes</code> est activ??e, alors les "
        "attributs non valables seront aussi supprim??s. <br/>Si la valeur est <var>no</var>, ces contr??les "
        "ne sont pas effectu??s. "
    },
    { TidyTabSize,                                   0,        
        "Cette option pr??cise le nombre de colonnes que Tidy utilise entre deux tabulations successives. "
        "Ceci est utilis?? pour lier les tabulations aux espaces pendant la lecture de l'entr??e."
    },
    { TidyUpperCaseAttrs,                            0,        
        "Cette option pr??cise si Tidy doit afficher les noms d'attributs en majuscules. <br/>La valeur par "
        "d??faut est <var>no</var>, ce qui produit un affichage des attributs en minuscules, except?? pour une "
        "entr??e XML, pour laquelle la casse originale est pr??serv??e. "
    },
    { TidyUpperCaseTags,                             0,        
        "Cette option pr??cise si Tidy doit afficher les noms de balises en majuscules. <br/>La valeur par "
        "d??faut est <var>no</var>, ce qui produit un affichage des balises en minuscules, except?? pour une "
        "entr??e XML, pour laquelle la casse originale est pr??serv??e. "
    },
    { TidyUseCustomTags,                             0,        
        "Cette option active dans Tidy l'utilisation de balises pour les ??l??ments personnalis??s autonomes, "
        "par exemple &lt;flag-icon&gt;. Les balises personnalis??es sont d??sactiv??es si cette valeur est "
        "<var>no</var>. Autres configurations - <var>blocklevel</var>, <var>empty</var>, <var>inline</var>, "
        "et <var>pre</var> seront <em>all</em> trait??s en cons??quence comme des balises personnalis??es "
        "d??tect??es. <br/>L'usage de <code>new-blocklevel-tags</code>, <code>new-empty-tags</code>, <code>new-"
        "inline-tags</code>, ou <code>new-pre-tags</code> surchargera le traitement des balises "
        "personnalis??es par cette option de configuration. Ceci peut ??tre utile si vous avez diff??rents "
        "types de balises personnalis??es. <br/>Lorsque l'option est activ??e, ces balises sont d??termin??es "
        "pendant la phase de traitement de votre document, par la balise d'ouverture; les balises de "
        "fermeture correspondantes seront reconnues en cons??quence, et les balises de fermeture inconnues "
        "seront ignor??es. "
    },
    { TidyVertSpace,                                 0,        
        "Cette option pr??cise si Tidy doit ajouter quelques lignes vides suppl??mentaires pour la lisibilit??. "
        "<br/>La valeur par d??faut est <var>no</var>. <br/>Si la valeur est <var>auto</var> Tidy ??liminera "
        "presque tous les caract??res de nouvelle ligne."
    },
    { TidyWarnPropAttrs,                             0, "Cette option pr??cise si Tidy doit avertir des attributs propri??taires."                                 },
    { TidyWord2000,                                  0,        
        "Cette option pr??cise si Tidy doit se donner du mal pour supprimer tous les surplus que Microsoft "
        "Word 2000 ajoute lorsque vous enregistrez des documents Word comme des \"pages Web\". Il ne prend "
        "pas en charge les images embarqu??es ou le VML. <br/>Vous devriez songer ?? utiliser la "
        "fonctionnalit?? de Word \"Enregistrer Sous: Page Web, Filtr??e\". "
    },
    { TidyWrapAsp,                                   0,        
        "Cette option pr??cise si Tidy doit ajouter un saut de ligne au texte contenu dans les pseudos-"
        "??l??ments ASP, qui ressemblent ?? <code>&lt;% ... %&gt;</code>. "
    },
    { TidyWrapAttVals,                               0,        
        "Cette option pr??cise si Tidy doit ajouter des sauts de ligne aux valeurs d'attributs, ce qui "
        "signifie que si la valeur d'un attribut entra??ne le d??passement de la largeur pr??cis??e par "
        "<code>wrap</code>, Tidy ajoutera un ou plusieurs sauts de lignes ?? la valeur, ce qui implique son "
        "d??coupage en plusieurs lignes. <br/>Notez que cette option peut ??tre pr??cis??e ind??pendamment de "
        "<code>wrap-script-literals</code>. Par d??faut, Tidy remplace n'importe quelle nouvelle ligne ou "
        "tabulation par un espace simple et remplace n'importe quelle s??quence d'espacement par un espace "
        "simple. <br/>Pour forcer Tidy ?? pr??server les valeurs litt??rales initiales de tous les attributs, "
        "et garantir que les caract??res d'espacement dans les valeurs d'attributs sont maintenus inchang??s, "
        "pr??ciser la valeur de <code>literal-attributes</code> ?? <var>yes</var>. "
    },
    { TidyWrapJste,                                  0,        
        "Cette option pr??cise si Tidy doit ajouter un saut de ligne au texte contenu dans les pseudos-"
        "??l??ments JSTE, qui ressemblent ?? <code>&lt;# ... #&gt;</code>. "
    },
    { TidyWrapLen,                                   0,        
        "Cette option pr??cise ?? Tidy la marge de droite ?? utiliser pour le saut de ligne. <br/> Tidy tente "
        "de couper les lignes de fa??on ?? ce qu'elles ne d??passent pas cette longueur. <br/>Passer la valeur "
        "de <code>wrap</code> ?? <var>0</var>(z??ro) d??sactive l'ajout de saut de ligne. "
    },
    { TidyWrapPhp,                                   0,        
        "Cette option pr??cise si Tidy doit ajouter un saut de ligne au texte contenu dans les pseudos-"
        "??l??ments PHP, qui ressemblent ??: <code>&lt;?php ... ?&gt;</code>. "
    },
    { TidyWrapScriptlets,                            0,        
        "Cette option pr??cise si Tidy doit ajouter des sauts de lignes aux cha??nes litt??rales dans les "
        "attributs de script. <br/>Tidy prend en charge la c??sure des longues cha??nes litt??rales de scripts "
        "en ajoutant un caract??re de barre oblique arri??re (backslash) avant le saut de ligne. "
    },
    { TidyWrapSection,                               0,        
        "Cette option pr??cise si Tidy doit ajouter des sauts de ligne pour le texte compris dans des balises "
        "de section <code>&lt;![ ... ]&gt;</code> section tags. "
    },
    { TidyWriteBack,                                 0,        
        "Cette option pr??cise si Tidy doit r????crire la structure de balise qu'il a produit vers le m??me "
        "fichier ?? partir duquel il l'a lu. <br/> Il est conseill?? de garder une copie des fichiers "
        "importants avant de les faire modifier par Tidy, car dans de rares occasions le r??sultat peut ??tre "
        "inattendu. "
    },
    { TidyXhtmlOut,                                  0,        
        "Cette option pr??cise si Tidy doit afficher une sortie embellie, en l'??crivant avec HTML ??tendu. <br/"
        "> Avec cette option activ??e, Tidy d??finit la d??claration DOCTYPE et l'espace de nom par d??faut "
        "appropri?? pour du XHTML, et utilisera la valeur corrig??e en sortie ind??pendamment des autres "
        "sources. <br/>Pour le XHTML, les entit??s seront ??crites en entit??s nomm??es ou num??riques "
        "conform??ment ?? la valeur de configuration de <code>numeric-entities</code>. <br/>La casse originale "
        "des balises et attributs sera pr??serv??e, ind??pendamment des autres options. "
    },
    { TidyXmlDecl,                                   0,        
        "Cette option pr??cise si Tidy doit ajouter la d??claration XML lors de la sortie XML ou XHTML. <br/> "
        "Notez que si l'entr??e comprend d??j?? une d??claration <code>&lt;?xml ... ?&gt;</code>, alors cette "
        "option sera ignor??e. <br/>Si l'encodage pour la sortie est diff??rent de <var>ascii</var>, de l'un "
        "des encodages <var>utf*</var> ou <var>raw</var>, alors la d??claration est toujours ajout??e, comme "
        "indiqu?? dans le standard XML."
    },
    { TidyXmlOut,                                    0,        
        "Cette option pr??cise si Tidy doit afficher une sortie embellie, en l'??crivant avec du XML bien "
        "structur??. <br/> Toutes les entit??s non d??finies en XML 1.0 seront r????crites en entit??s num??riques "
        "pour leur permettre d'??tre parcourues par un analyseur XML. <br/>La casse originale des balises et "
        "attributs sera pr??serv??e, ind??pendamment des autres options. "
    },
    { TidyXmlPIs,                                    0,        
        "Cette option pr??cise si Tidy doit modifier l'analyse syntaxique des instructions de traitement pour "
        "exiger <code>?&gt;</code> comme terminaison plut??t que <code>&gt;</code>. <br/> Cette option est "
        "automatiquement activ??e si l'entr??e est en XML."
    },
    { TidyXmlSpace,                                  0,        
        "Cette option pr??cise si tidy doit ajouter <code>xml:space=\"preserve\"</code> pour des ??l??ments "
        "tels que <code>&lt;pre&gt;</code>, <code>&lt;style&gt;</code> and <code>&lt;script&gt;</code> lors "
        "de la production de XML. <br />Ceci est n??cessaire si l'espace blanc dans de tels ??l??ments doit "
        "??tre analys?? convenablement sans avoir acc??s ?? la DTD."
    },
    { TidyXmlTags,                                   0,        
        "Cette option pr??cise si Tidy doit utiliser l'analyseur XML plut??t que l'analyseur de correction "
        "d'erreur HTML."
    },
    { TidyInfo,                                      0, "Info:"                                                                                                  },
    { TidyWarning,                                   0, "Avertissement:"                                                                                         },
    { TidyConfig,                                    0, "Config:"                                                                                                },
    { TidyAccess,                                    0, "Acc??s:"                                                                                                 },
    { TidyError,                                     0, "Erreur:"                                                                                                },
    { TidyBadDocument,                               0, "Document:"                                                                                              },
    { TidyFatal,                                     0, "Panique:"                                                                                               },
    { TidyDialogueSummary,                           0, "R??sum??:"                                                                                                },
    { TidyDialogueInfo,                              0, "Informations: "                                                                                         },
    { TidyDialogueFootnote,                          0, "Remarque:"                                                                                              },
    { LINE_COLUMN_STRING,                            0, "Ligne: %d Col: %d - "                                                                                   },
    { STRING_DISCARDING,                             0, "rejet"                                                                                                  },
    { STRING_ERROR_COUNT_ERROR,                      0, "erreur"                                                                                                 },
    { STRING_ERROR_COUNT_ERROR,                      1, "erreurs"                                                                                                },
    { STRING_ERROR_COUNT_WARNING,                    0, "avertissement"                                                                                          },
    { STRING_ERROR_COUNT_WARNING,                    1, "avertissements"                                                                                         },
    { STRING_HELLO_ACCESS,                           0,        
        "\n"
        "Contr??les d'accessibilit??:\n"
    },
    { STRING_HTML_PROPRIETARY,                       0, "HTML Propri??taire"                                                                                      },
    { STRING_XML_DECLARATION,                        0, "d??claration XML"                                                                                        },
    { STRING_PLAIN_TEXT,                             0, "texte brut"                                                                                             },
    { STRING_REPLACING,                              0, "remplacement"                                                                                           },
    { STRING_SPECIFIED,                              0, "pr??cis??"                                                                                                },
    { TIDYCUSTOMNO_STRING,                           0, "aucune"                                                                                                 },
    { TIDYCUSTOMBLOCKLEVEL_STRING,                   0, "??l??ment de bloc"                                                                                        },
    { TIDYCUSTOMEMPTY_STRING,                        0, "vide"                                                                                                   },
    { TEXT_HTML_T_ALGORITHM,                         0,        
        "\n"
        "       - D'abord, cherchez depuis la gauche de la position de la cellule \n"
        "         pour trouver la rang??e des cellules d'ent??te de lignes. \n"
        "???????????? - Puis rechercher vers le haut pour trouver les cellules d'ent??te \n"
        "         de colonne.\n"
        "???????????? - La recherche dans une direction donn??e s'arr??te lorsque le bout \n"
        "         du tableau est atteint ou lorsque la cellule de donn??es est \n"
        "         trouv??e apr??s une cellule d'en-t??te.\n"
        "???????????? - Les ent??tes de ligne sont ins??r??s dans la liste, dans l'ordre dans \n"
        "         lequel ils apparaissent dans le tableau.\n"
        "???????????? - Pour les tableaux de gauche ?? droite, les ent??tes sont ins??r??s de \n"
        "         gauche ?? droite.\n"
        "???????????? - Les ent??tes de colonnes sont ins??r??s apr??s les ent??tes de ligne,\n"
        "         dans l'ordre dans lequel ils apparaissent dans le tableau, de haut \n"
        "         en bas.\n"
        "???????????? - Si une cellule d'ent??te a ses ent??tes d'attributs compl??t??s, alors \n"
        "         les ent??tes r??f??renc??s par cet attribut sont ins??r??s dans la \n"
        "???????????????? liste et la recherche s'arr??te pour la direction courante.\n"
        "???????????????? Les cellules TD qui fixent l'attribut de l'axe sont ??galement \n"
        "         trait??es comme des cellules d'ent??te.\n"
    },
    { TEXT_VENDOR_CHARS,                             0,        
        "Il est peu probable que des encodages sp??cifiques ?? un ??diteur,\n"
        "d??pendants d'un syst??me, fonctionnent suffisamment largement\n"
        "pour le World Wide Web; vous devriez ??viter d'utiliser l'encodage\n"
        "de caract??re %s, et utiliser plut??t des entit??s nomm??es,\n"
        "par exemple &trade;.\n"
    },
    { TEXT_SGML_CHARS,                               0,        
        "Les codes de caract??res 128 ?? 159 (U + 0080 ?? U + 009F) ne sont pas \n"
        "autoris??s en HTML; m??me si ils l'??taient, il seraient probablement non \n"
        "imprimables comme des caract??res de contr??le .\n"
        "Tidy a suppos?? que vous vouliez faire r??f??rence ?? un caract??re avec la \n"
        "m??me valeur d'encodage d'octet %s et a remplac?? cette r??f??rence par \n"
        "son ??quivalent Unicode.\n"
    },
    { TEXT_INVALID_UTF8,                             0,        
        "Les codes de caract??res UTF-8 doivent ??tre dans l'intervalle : U+0000 ?? U+10FFFF.\n"
        "La d??finition de l'UTF-8 ?? l'annexe D de la norme ISO/CEI 10646-1: 2000 permet \n"
        "??galement l'utilisation de s??quences de cinq et six octets pour coder des caract??res \n"
        "qui sont en dehors de l'intervalle des caract??res Unicode;\n"
        "ces s??quences de cinq et six octets sont inappropri??es pour l'utilisation de l'UTF-8 \n"
        "dans l'objectif de transformation de caract??res Unicode. ISO/IEC 10646 \n"
        "ne permet pas la liaison des substituts non appair??s, ni U+FFFE ni U+FFFF \n"
        "(mais il permet d'autres non-caract??res). Pour plus d'informations veuillez-vous\n"
        "r??f??rer ?? http://www.unicode.org/ et http://www.cl.cam.ac.uk/~mgk25/unicode.html\n"
    },
    { TEXT_INVALID_UTF16,                            0,        
        "Les codes de caract??res pour UTF-16 doivent ??tre dans l'intervalle: U+0000 ?? U+10FFFF.\n"
        "La d??finition de UTF-16 dans l'annexe C de l'ISO/IEC 10646-1:2000 n'autorise pas la \n"
        "liaison de substituts non appair??s. Pour plus d'informations, veuillez vous r??f??rer\n"
        "?? http://www.unicode.org/ et http://www.cl.cam.ac.uk/~mgk25/unicode.html\n"
    },
    { TEXT_INVALID_URI,                              0,        
        "Les URIs doivent ??tre correctement prot??g??s, ils ne doivent pas contenir \n"
        "les caract??res non-??chapp??s ci-apr??s U+0021, y-compris le caract??re \n"
        "d'espacement et non plus le U+007E. Tidy ??chappe l'URI pour vous \n"
        "comme recommand?? par HTML 4.01 section B.2.1 et XML 1.0 \n"
        "section 4.2.2. Certains user-agents utilisent un autre algorithme pour \n"
        "??chapper ces URI et quelques scripts c??t?? serveur d??pendent de ceci. \n"
        "Si vous voulez d??pendre de ceci, vous devez ??chapper l'URI de votre \n"
        "c??t??. Pour plus d'informations, veuillez vous r??f??rer ??\n"
        "http://www.w3.org/International/O-URL-and-ident.html\n"
    },
    { TEXT_BAD_FORM,                                 0,        
        "Vous devrez peut-??tre d??placer une, ou les deux, balises <form>et</form>. \n"
        "Les ??l??ments HTML doivent ??tre correctement imbriqu??es et les ??l??ments \n"
        "de formulaire ne font pas exception. Par exemple, vous ne devez pas placer \n"
        "<form>dans une cellule et </form>dans une autre. Si <form>est plac?? devant \n"
        "un tableau, </form> ne peut pas ??tre plac?? ?? l'int??rieur du tableau !\n"
        "Notez qu'un form ne peut pas ??tre imbriqu?? dans un autre !\n"
    },
    { TEXT_BAD_MAIN,                                 0,        
        "Un seul ??l??ment <main> est permis dans un document.\n"
        "Les ??l??ments <main> suivants ont ??t?? rejet??s, ce qui peut rendre \n"
        "le document non valide.\n"
    },
    { TEXT_M_SUMMARY,                                0,        
        "L'attribut summary du tableau devrait servir ?? d??crire la structure\n"
        "du tableau. Il est tr??s utile pour les personnes utilisant des \n"
        "navigateurs non visuels. Les attributs de port??e et ent??tes \n"
        "pour les cellules d'un tableau sont utiles pour pr??ciser les ent??tes \n"
        "s'appliquant ?? chaque cellule du tableau, permettant aux navigateurs \n"
        "non visuels de fournir un contexte significatif pour chaque cellule.\n"
        "\n"
    },
    { TEXT_M_IMAGE_ALT,                              0,        
        "L'attribut alt devrait servir ?? donner une br??ve description d'une\n"
        "image ; Il faudrait aussi des descriptions plus longues avec l'attribut\n"
        "longdesc qui prend une URL li??e ?? la description. Ces mesures sont\n"
        "n??cessaires pour les personnes utilisant des navigateurs textuels.\n"
        "\n"
    },
    { TEXT_M_IMAGE_MAP,                              0,        
        "Utiliser des images interactives c??t?? client est pr??f??rable ?? celles c??t?? \n"
        "serveur, ces derni??res sont inaccessibles aux personnes utilisant des \n"
        "navigateurs non-graphiques. En outre, les cartes c??t?? client sont plus \n"
        "faciles ?? mettre en place et fournissent une interactivit?? imm??diate \n"
        "aux utilisateurs.\n"
        "\n"
    },
    { TEXT_M_LINK_ALT,                               0,        
        "Pour les liens hypertextes d??finis ?? l'aide d'une image interactive \n"
        "c??t?? client, vous devez utiliser l'attribut alt pour fournir une \n"
        "description textuelle du lien, pour les personnes utilisant des \n"
        "\n"
    },
    { TEXT_USING_FRAMES,                             0,        
        "Les pages con??ues ?? l'aide de cadres posent des probl??mes aux \n"
        "personnes malvoyantes ou ?? celles qui utilisent un navigateur ne \n"
        "supportant pas les frames. Une structure de page bas??e sur des \n"
        "cadres doit toujours inclure une structure alternative ?? l'int??rieur \n"
        "d'un ??l??ment NOFRAMES.\n"
        "\n"
    },
    { TEXT_ACCESS_ADVICE1,                           0,        
        "Pour plus d'informations sur la fa??on de rendre vos pages\n"
        "accessibles, voir http://www.w3.org/WAI/GL"
    },
    { TEXT_ACCESS_ADVICE2,                           0,        
        "Pour plus d'informations sur la fa??on de rendre vos pages \n"
        "accessibles, voir http://www.w3.org/WAI/GL et \n"
        "http://www.html-tidy.org/Accessibility/"
    },
    { TEXT_USING_LAYER,                              0,        
        "Le m??canisme de positionnement au moyen des feuilles de style \n"
        "en cascade (CSS) est pr??f??rable ?? l'??l??ment propri??taire <LAYER>, \n"
        "en raison du support limit?? des ??diteurs pour LAYER.\n"
    },
    { TEXT_USING_SPACER,                             0,        
        "Il est recommand?? d'utiliser les CSS pour contr??ler les espacements \n"
        "(par exemple pour le retrait, les marges et les interlignes).\n"
        "L'??l??ment propri??taire <SPACER> a un soutien limit?? des ??diteurs.\n"
        "\n"
    },
    { TEXT_USING_FONT,                               0,        
        "Il est recommand?? d'utiliser les CSS pour pr??ciser la police et les \n"
        "propri??t??s telles que la taille et la couleur. Cela permettra de r??duire \n"
        "la taille des fichiers HTML et de les rendre plus faciles ?? entretenir \n"
        "\n"
    },
    { TEXT_USING_NOBR,                               0,        
        "Il est recommand?? d'utiliser les CSS pour contr??ler les sauts de ligne.\n"
        "Utilisez \"white-space: nowrap\" pour inhiber les sauts de ligne plut??t que \n"
        "d'ins??rer <NOBR> ... </ NOBR> dans la structure de balises.\n"
        "\n"
    },
    { TEXT_USING_BODY,                               0,        
        "Il est recommand?? d'utiliser les CSS pour pr??ciser les couleurs \n"
        "de la page et des liens"
    },
    { STRING_CONTENT_LOOKS,                          0, "Le contenu du document ressemble ?? %s"                                                                  },
    { STRING_DOCTYPE_GIVEN,                          0, "DOCTYPE donn??e est ??%s??"                                                                                },
    { STRING_ERROR_COUNT,                            0, "Tidy a trouv?? %u %s et %u %s!\n"                                                                        },
    { STRING_NEEDS_INTERVENTION,                     0,        
        "Ce document contient des erreurs qui doivent d'abord ??tre r??solues\n"
        "en utilisant HTML Tidy pour produire une version nettoy??e.\n"
    },
    { STRING_NO_ERRORS,                              0, "Aucun avertissement ou erreur trouv??e.\n"                                                               },
    { STRING_NO_SYSID,                               0, "Aucun identifiant syst??me dans le doctype soumis"                                                       },
    { STRING_NOT_ALL_SHOWN,                          0, "Tidy a trouv?? %u %s et %u %s! Tous les avertissements et erreurs n'ont pas ??t?? affich??s.\n"             },
    { TEXT_GENERAL_INFO,                             0,        
        "?? propos de HTML Tidy: https://github.com/htacg/tidy-html5\n"
        "Rapports de bugs et commentaires: https://github.com/htacg/tidy-html5/issues\n"
        "Liste officielle de diffusion: https://lists.w3.org/Archives/Public/public-htacg/\n"
        "Derni??re sp??cification HTML: http://dev.w3.org/html5/spec-author-view/\n"
        "Validez vos documents HTML: http://validator.w3.org/nu/\n"
        "Encouragez votre entreprise ?? rejoindre le W3C: http://www.w3.org/Consortium\n"
        "\n"
    },
    { TEXT_GENERAL_INFO_PLEA,                        0,        
        "Parlez-vous une autre langue que le fran??ais, ou une variante du fran??ais?\n"
        "Merci de nous aider ?? traduire HTML Tidy. Pour plus d'informations, consultez \n"
        "https://github.com/htacg/tidy-html5/blob/master/README/LOCALIZE.md"
    },
    { ANCHOR_NOT_UNIQUE,                             0, "%s ancre \"%s\" d??j?? d??fini"                                                                            },
    { APOS_UNDEFINED,                                0, "l'entit?? nomm??e &apos; est d??fini seulement en XML/XHTML"                                               },
    { ATTR_VALUE_NOT_LCASE,                          0, "valeur d'attribut de %s ?? %s ?? doit ??tre en minuscule pour XHTML"                                       },
    { ATTRIBUTE_IS_NOT_ALLOWED,                      0, "L'attribut %s n'\"est\" pas autoris?? pour les balises personnalis??es autonomes."                        },
    { BACKSLASH_IN_URI,                              0, "La r??f??rence d'URI %s contient des anti-slash. Faute de frappe ?"                                       },
    { BAD_ATTRIBUTE_VALUE_REPLACED,                  0, "%s l'attribut ?? %s ?? a une valeur non valide ?? %s ?? et a ??t?? remplac??"                                  },
    { BAD_ATTRIBUTE_VALUE,                           0, "%s l'attribut \"%s\" a une valeur non valide \"%s\""                                                    },
    { BAD_CDATA_CONTENT,                             0, "'<' + '/' + lettres non permises ici"                                                                   },
    { BAD_SUMMARY_HTML5,                             0, "L'attribut summary sur l'??l??ment %s est obsol??te avec HTML5"                                            },
    { BAD_SURROGATE_LEAD,                            0,        
        "Paire de substitution U+%04X de terminaison (Bas), sans entit?? principale (Haut), remplac??e par U"
        "+FFFD."
    },
    { BAD_SURROGATE_PAIR,                            0, "Pr??sence d'une paire de substitution hors intervalle U+%04X:U+%04X, remplac??e par la valeur U+FFFD."    },
    { BAD_SURROGATE_TAIL,                            0,        
        "Paire de substitution principale (Haute) U+%04X, sans entit?? de terminaison (Haut), remplac??e par U"
        "+FFFD."
    },
    { CANT_BE_NESTED,                                0, "%s ne peut pas ??tre imbriqu??"                                                                           },
    { COERCE_TO_ENDTAG,                              0, "<%s> est probablement souhait?? pour </%s>"                                                              },
    { CONTENT_AFTER_BODY,                            0, "contenu trouv?? apr??s la fin de body"                                                                    },
    { CUSTOM_TAG_DETECTED,                           0, "balise personnalis??e autonome d??tect??e %s; sera trait??e comme %s"                                       },
    { DISCARDING_UNEXPECTED,                         0, "inhibition de valeur inattendue %s"                                                                     },
    { DOCTYPE_AFTER_TAGS,                            0, "<!DOCTYPE> n'est pas autoris??e apr??s les ??l??ments"                                                      },
    { DUPLICATE_FRAMESET,                            0, "??l??ment r??p??t?? FRAMESET"                                                                                },
    { ELEMENT_NOT_EMPTY,                             0, "%s ??l??ment non vide ou non ferm??"                                                                       },
    { ELEMENT_VERS_MISMATCH_ERROR,                   0, "%s ??l??ment non disponible dans %s"                                                                      },
    { ELEMENT_VERS_MISMATCH_WARN,                    0, "%s ??l??ment non disponible dans %s"                                                                      },
    { ENCODING_MISMATCH,                             0, "l'encodage de caract??re pr??cis?? en entr??e (%s) ne correspond pas ?? l'encodage r??ellement entr?? (%s)"    },
    { ESCAPED_ILLEGAL_URI,                           0, "%s ??chappement de la r??f??rence d''URI mal form??e"                                                       },
    { FILE_CANT_OPEN,                                0, "Impossible d'ouvrir ?? %s ??\n"                                                                           },
    { FILE_NOT_FILE,                                 0, "\"%s\" n'est pas un fichier!\n"                                                                         },
    { FIXED_BACKSLASH,                               0, "%s conversion des antislash vers slash dans l'URI "                                                     },
    { ID_NAME_MISMATCH,                              0, "%s discordance entre id et valeur de nom d'attribut"                                                    },
    { ILLEGAL_NESTING,                               0, "%s ne doit pas ??tre imbriqu??"                                                                           },
    { ILLEGAL_URI_CODEPOINT,                         0, "%s caract??res interdits trouv??s dans l'URI"                                                             },
    { ILLEGAL_URI_REFERENCE,                         0, "%s mal ??chapp?? dans la r??f??rence d'URI"                                                                 },
    { INSERTING_AUTO_ATTRIBUTE,                      0, "%s insertion de l'attribut ?? %s ??, en utilisant la valeur ?? %s ??"                                       },
    { INSERTING_TAG,                                 0, "insertion implicite de <%s>"                                                                            },
    { INVALID_ATTRIBUTE,                             0, "%s nom d'attribut ?? %s ?? (valeur=?? %s ??) n'est pas valide"                                              },
    { INVALID_NCR,                                   0, "%s r??f??rence de caract??re num??rique non valide %s"                                                      },
    { INVALID_SGML_CHARS,                            0, "%s code de caract??re non valide %s"                                                                     },
    { INVALID_UTF8,                                  0, "%s octets UTF-8 non valides (code de caract. %s)"                                                       },
    { INVALID_UTF16,                                 0, "%s paire de substitution UFT-16 non valide (code de caract. %s)"                                        },
    { INVALID_XML_ID,                                0, "%s impossible de copier le nom attribut vers id"                                                        },
    { JOINING_ATTRIBUTE,                             0, "%s regroupement des valeurs r??p??t??es de l'attribut ?? %s ??"                                              },
    { MALFORMED_COMMENT,                             0, "tirets adjacents dans un commentaire"                                                                   },
    { MALFORMED_DOCTYPE,                             0, "inhibition de la <!DOCTYPE> mal form??e"                                                                 },
    { MISMATCHED_ATTRIBUTE_ERROR,                    0, "%s attribut \"%s\" non permis pour %s"                                                                  },
    { MISMATCHED_ATTRIBUTE_WARN,                     0, "%s attribut \"%s\" non permis pour %s"                                                                  },
    { MISSING_ATTR_VALUE,                            0, "%s attribut \"%s\" n'a pas de valeur"                                                                   },
    { MISSING_ATTRIBUTE,                             0, "%s absence d'attribut \"%s\""                                                                           },
    { MISSING_DOCTYPE,                               0, "d??claration <!DOCTYPE> manquante"                                                                       },
    { MISSING_ENDTAG_BEFORE,                         0, "absence de </%s> avant %s"                                                                              },
    { MISSING_ENDTAG_FOR,                            0, "absence de </%s>"                                                                                       },
    { MISSING_IMAGEMAP,                              0, "%s doivent utiliser une image-map c??t?? client"                                                          },
    { MISSING_QUOTEMARK,                             0, "%s attribut avec apostrophe de fin manquante"                                                           },
    { MISSING_SEMICOLON_NCR,                         0, "La r??f??rence de caract??re num??rique ?? %s ?? ne se termine pas par ?? ; ??"                                 },
    { MISSING_SEMICOLON,                             0, "l'entit?? ?? %s ?? ne se termine pas par ?? ; ??"                                                            },
    { MISSING_STARTTAG,                              0, "absence de <%s>"                                                                                        },
    { MISSING_TITLE_ELEMENT,                         0, "ajout d'un ??l??ment 'title' manquant"                                                                    },
    { NESTED_EMPHASIS,                               0, "accentuation imbriqu??e %s"                                                                              },
    { NESTED_QUOTATION,                              0, "??l??ments \"q\" imbriqu??s, erreur typographique possible"                                                },
    { NEWLINE_IN_URI,                                0, "%s inhibition des nouvelles lignes dans la r??f??rence d'URI"                                             },
    { NOFRAMES_CONTENT,                              0, "%s non positionn?? dans l'??l??ment 'noframes'"                                                            },
    { NON_MATCHING_ENDTAG,                           0, "remplacement des %s inattendus par </%s>"                                                               },
    { OBSOLETE_ELEMENT,                              0, "remplacement de l'??l??ment obsol??te %s par %s"                                                           },
    { PREVIOUS_LOCATION,                             0, "<%s> pr??c??demment mentionn??s"                                                                           },
    { PROPRIETARY_ATTR_VALUE,                        0, "%s valeur d'attribut propri??taire ?? %s ??"                                                               },
    { PROPRIETARY_ATTRIBUTE,                         0, "%s attribut propri??taire \"%s\""                                                                        },
    { PROPRIETARY_ELEMENT,                           0, "%s n'est pas approuv?? par le W3C"                                                                       },
    { REMOVED_HTML5,                                 0, "??l??ment %s retir?? de HTML5"                                                                             },
    { REPEATED_ATTRIBUTE,                            0, "%s abandon de la valeur ?? %s ?? pour l'attribut r??p??t?? ?? %s ??"                                           },
    { REPLACING_ELEMENT,                             0, "remplacement de %s par %s"                                                                              },
    { REPLACING_UNEX_ELEMENT,                        0, "remplacement des %s inattendus par %s"                                                                  },
    { SPACE_PRECEDING_XMLDECL,                       0, "suppression de l'espace pr??c??dant la d??claration XML"                                                   },
    { STRING_MISSING_MALFORMED,                      0, "argument manquant ou incorrect pour l'option: %s"                                                       },
    { STRING_UNKNOWN_OPTION,                         0, "option inconnue: %s"                                                                                    },
    { SUSPECTED_MISSING_QUOTE,                       0, "absence de guillemet pour la valeur d'attribut"                                                         },
    { TAG_NOT_ALLOWED_IN,                            0, "%s n'est pas permis dans les ??l??ments <%s>"                                                             },
    { TOO_MANY_ELEMENTS_IN,                          0, "trop d'??l??ments %s dans <%s>"                                                                           },
    { TOO_MANY_ELEMENTS,                             0, "trop d'??l??ments %s"                                                                                     },
    { TRIM_EMPTY_ELEMENT,                            0, "r??duction des %s vides"                                                                                 },
    { UNESCAPED_AMPERSAND,                           0, "symbole & non ??chapp?? qui devrait ??tre ??crit &amp;"                                                     },
    { UNEXPECTED_END_OF_FILE_ATTR,                   0, "%s fin de fichier lors de l'analyse des attributs"                                                      },
    { UNEXPECTED_END_OF_FILE,                        0, "fin de fichier inattendue %s"                                                                           },
    { UNEXPECTED_ENDTAG_ERR,                         0, "</%s> inattendu"                                                                                        },
    { UNEXPECTED_ENDTAG_IN,                          0, "</%s> inattendu dans <%s>"                                                                              },
    { UNEXPECTED_ENDTAG,                             0, "</%s> inattendu"                                                                                        },
    { UNEXPECTED_EQUALSIGN,                          0, "%s symbole impr??vu '=', nom d'attribut attendu"                                                         },
    { UNEXPECTED_GT,                                 0, "%s symbole '>' manquant pour la fin de balise"                                                          },
    { UNEXPECTED_QUOTEMARK,                          0, "%s guillemet double inattendu ou dupliqu??"                                                              },
    { UNKNOWN_ELEMENT_LOOKS_CUSTOM,                  0, "%s n'est pas reconnue! Vouliez-vous activer l'option custom-tags?"                                      },
    { UNKNOWN_ELEMENT,                               0, "%s n'est pas reconnue!"                                                                                 },
    { UNKNOWN_ENTITY,                                0, "symbole & non ??chapp?? ou entit?? inconnue ?? %s ??"                                                        },
    { USING_BR_INPLACE_OF,                           0, "utilisation de <br> ?? la place de %s"                                                                   },
    { VENDOR_SPECIFIC_CHARS,                         0, "%s code de caract??re non valide %s"                                                                     },
    { WHITE_IN_URI,                                  0, "%s rejet des espaces dans la r??f??rence URI"                                                             },
    { XML_DECLARATION_DETECTED,                      0, "Une d??claration XML a ??t?? d??tect??e. Voulez-vous utiliser l'option input-xml?"                           },
    { XML_ID_SYNTAX,                                 0, "%s ID ?? %s ?? utilise la syntaxe XML ID"                                                                 },
    { IMG_MISSING_ALT,                               0, "[1.1.1.1]: <img> texte manquant 'alt'."                                                                 },
    { IMG_ALT_SUSPICIOUS_FILENAME,                   0, "[1.1.1.2]: texte 'alt' suspect (nom de fichier)."                                                       },
    { IMG_ALT_SUSPICIOUS_FILE_SIZE,                  0, "[1.1.1.3]: texte 'alt' suspect (taille de fichier)."                                                    },
    { IMG_ALT_SUSPICIOUS_PLACEHOLDER,                0, "[1.1.1.4]: texte 'alt' suspect (espace r??serv??)."                                                       },
    { IMG_ALT_SUSPICIOUS_TOO_LONG,                   0, "[1.1.1.10]: texte 'alt' suspect (trop long)."                                                           },
    { IMG_MISSING_LONGDESC_DLINK,                    0, "[1.1.2.1]: <img> absence de 'longdesc' et d-link."                                                      },
    { IMG_MISSING_DLINK,                             0, "[1.1.2.2]: <img> absence de d-link."                                                                    },
    { IMG_MISSING_LONGDESC,                          0, "[1.1.2.3]: <img> absence de 'longdesc'."                                                                },
    { IMG_BUTTON_MISSING_ALT,                        0, "[1.1.3.1]: <img> (bouton) absence de texte 'alt'."                                                      },
    { APPLET_MISSING_ALT,                            0, "[1.1.4.1]: <applet> absence de contenu alternatif."                                                     },
    { OBJECT_MISSING_ALT,                            0, "[1.1.5.1]: <object> absence de contenu alternatif."                                                     },
    { AUDIO_MISSING_TEXT_WAV,                        0, "[1.1.6.1]: texte de transcription audio manquant (wav)."                                                },
    { AUDIO_MISSING_TEXT_AU,                         0, "[1.1.6.2]: texte de transcription audio manquant (au)."                                                 },
    { AUDIO_MISSING_TEXT_AIFF,                       0, "[1.1.6.3]: texte de transcription audio manquant (aiff)."                                               },
    { AUDIO_MISSING_TEXT_SND,                        0, "[1.1.6.4]: texte de transcription audio manquant (snd)."                                                },
    { AUDIO_MISSING_TEXT_RA,                         0, "[1.1.6.5]: texte de transcription audio manquant (ra)."                                                 },
    { AUDIO_MISSING_TEXT_RM,                         0, "[1.1.6.6]: texte de transcription audio manquant (rm)."                                                 },
    { FRAME_MISSING_LONGDESC,                        0, "[1.1.8.1]: <frame> peut n??cessiter 'longdesc'."                                                         },
    { AREA_MISSING_ALT,                              0, "[1.1.9.1]: <area> absence de texte 'alt'."                                                              },
    { SCRIPT_MISSING_NOSCRIPT,                       0, "[1.1.10.1]: <script> section <noscript> manquante."                                                     },
    { ASCII_REQUIRES_DESCRIPTION,                    0, "[1.1.12.1]: ascii art n??cessite une description."                                                       },
    { IMG_MAP_SERVER_REQUIRES_TEXT_LINKS,            0, "[1.2.1.1]: image map (c??t?? serveur) n??cessite des liens textes."                                        },
    { MULTIMEDIA_REQUIRES_TEXT,                      0, "[1.4.1.1]: le multim??dia n??cessite une ??quivalence de textes correspondants."                           },
    { IMG_MAP_CLIENT_MISSING_TEXT_LINKS,             0, "[1.5.1.1]: image map (c??t?? client) liens textes manquants."                                             },
    { INFORMATION_NOT_CONVEYED_IMAGE,                0, "[2.1.1.1]: V??rifiez que l'information n'est pas transmise uniquement par la couleur (image)."           },
    { INFORMATION_NOT_CONVEYED_APPLET,               0, "[2.1.1.2]: V??rifiez que l'information n'est pas transmise uniquement par la couleur (applet)."          },
    { INFORMATION_NOT_CONVEYED_OBJECT,               0, "[2.1.1.3]: V??rifiez que l'information n'est pas transmise uniquement par la couleur (object)."          },
    { INFORMATION_NOT_CONVEYED_SCRIPT,               0, "[2.1.1.4]: V??rifiez que l'information n'est pas transmise uniquement par la couleur (script)."          },
    { INFORMATION_NOT_CONVEYED_INPUT,                0,        
        "[2.1.1.5]: V??rifiez que l'information n'est pas transmise uniquement par la couleur (champs de "
        "formulaire)."
    },
    { COLOR_CONTRAST_TEXT,                           0, "[2.2.1.1]: contraste couleur faible (texte)."                                                           },
    { COLOR_CONTRAST_LINK,                           0, "2.2.1.2]: contraste couleur faible (lien)."                                                             },
    { COLOR_CONTRAST_ACTIVE_LINK,                    0, "2.2.1.3]: contraste couleur faible (lien actif)."                                                       },
    { COLOR_CONTRAST_VISITED_LINK,                   0, "2.2.1.4]: contraste couleur faible (lien visit??)."                                                      },
    { DOCTYPE_MISSING,                               0, "[3.2.1.1]: d??claration <doctype> manquante."                                                            },
    { STYLE_SHEET_CONTROL_PRESENTATION,              0, "[3.3.1.1]: Utiliser les feuilles de style pour contr??ler la pr??sentation."                              },
    { HEADERS_IMPROPERLY_NESTED,                     0, "[3.5.1.1]: ent??tes imbriqu??s incorrectement."                                                           },
    { POTENTIAL_HEADER_BOLD,                         0, "[3.5.2.1]: ent??te potentiel (gras)."                                                                    },
    { POTENTIAL_HEADER_ITALICS,                      0, "[3.5.2.2]: ent??te potentiel (italique)."                                                                },
    { POTENTIAL_HEADER_UNDERLINE,                    0, "[3.5.2.3]: ent??te potentiel (soulignement)."                                                            },
    { HEADER_USED_FORMAT_TEXT,                       0, "[3.5.3.1]: ent??te utilis?? pour formater du texte."                                                      },
    { LIST_USAGE_INVALID_UL,                         0, "[3.6.1.1]: Usage non valide de liste <ul>."                                                             },
    { LIST_USAGE_INVALID_OL,                         0, "[3.6.1.2]: usage non valide de liste <ol>."                                                             },
    { LIST_USAGE_INVALID_LI,                         0, "[3.6.1.4]: usage non valide de liste <li>."                                                             },
    { LANGUAGE_NOT_IDENTIFIED,                       0, "[4.3.1.1]: langage non identifi??."                                                                      },
    { LANGUAGE_INVALID,                              0, "[4.3.1.2]: attribut de langage non valide."                                                             },
    { DATA_TABLE_MISSING_HEADERS,                    0, "[5.1.2.1]: data <table> absence d'ent??tes rang??e/colonne (tous)."                                       },
    { DATA_TABLE_MISSING_HEADERS_COLUMN,             0, "[5.1.2.2]: data <table> absence d'ent??tes rang/colonne (1 col)."                                        },
    { DATA_TABLE_MISSING_HEADERS_ROW,                0, "[5.1.2.3]: data <table> absence d'ent??tes rang/colonne (1 rang)."                                       },
    { DATA_TABLE_REQUIRE_MARKUP_COLUMN_HEADERS,      0, "[5.2.1.1]: data <table> peut n??cessiter une structure de balises (ent??tes de colonne)."                 },
    { DATA_TABLE_REQUIRE_MARKUP_ROW_HEADERS,         0, "[5.2.1.1]: data <table> peut n??cessiter une structure de balises (ent??tes de rang??e)."                  },
    { LAYOUT_TABLES_LINEARIZE_PROPERLY,              0, "[5.3.1.1]: v??rifie que la structure des tableaux est correctement s??rialis??e."                          },
    { LAYOUT_TABLE_INVALID_MARKUP,                   0, "[5.4.1.1]: structure de balises incorrecte dans l'agencement de <table>."                               },
    { TABLE_MISSING_SUMMARY,                         0, "[5.5.1.1]: <table> absence de r??sum??."                                                                  },
    { TABLE_SUMMARY_INVALID_NULL,                    0, "[5.5.1.2]: <table> r??sum?? non valide (null)."                                                           },
    { TABLE_SUMMARY_INVALID_SPACES,                  0, "[5.5.1.3]: <table> r??sum?? non valide (espaces)."                                                        },
    { TABLE_SUMMARY_INVALID_PLACEHOLDER,             0, "[5.5.1.6]: <table> r??sum?? non valide (texte de l'emplacement r??serv??)."                                 },
    { TABLE_MISSING_CAPTION,                         0, "[5.5.2.1]: <table> absence de l??gende (<caption>)."                                                     },
    { TABLE_MAY_REQUIRE_HEADER_ABBR,                 0, "[5.6.1.1]: <table> peut n??cessiter des abr??viations d'ent??te."                                          },
    { TABLE_MAY_REQUIRE_HEADER_ABBR_NULL,            0, "[5.6.1.2]: <table> abr??viations d'ent??te non valide (null)."                                            },
    { TABLE_MAY_REQUIRE_HEADER_ABBR_SPACES,          0, "[5.6.1.3]: <table> abr??viations d'ent??te non valide (espaces)."                                         },
    { STYLESHEETS_REQUIRE_TESTING_LINK,              0, "[6.1.1.1]: les feuilles de style n??cessitent un examen (link)."                                         },
    { STYLESHEETS_REQUIRE_TESTING_STYLE_ELEMENT,     0, "[6.1.1.2]: les feuilles de style n??cessitent un examen (??l??ment style)."                                },
    { STYLESHEETS_REQUIRE_TESTING_STYLE_ATTR,        0, "[6.1.1.3]: les feuilles de style n??cessitent un examen (attribut style)."                               },
    { FRAME_SRC_INVALID,                             0, "[6.2.1.1]: <frame> source non valide."                                                                  },
    { TEXT_EQUIVALENTS_REQUIRE_UPDATING_APPLET,      0, "[6.2.2.1]: les ??quivalences de texte n??cessitent une mise ?? jour (applet)."                             },
    { TEXT_EQUIVALENTS_REQUIRE_UPDATING_SCRIPT,      0, "[6.2.2.2]: les ??quivalences de texte n??cessitent une mise ?? jour (script)."                             },
    { TEXT_EQUIVALENTS_REQUIRE_UPDATING_OBJECT,      0, "[6.2.2.3]: les ??quivalences de texte n??cessitent une mise ?? jour (object)."                             },
    { PROGRAMMATIC_OBJECTS_REQUIRE_TESTING_SCRIPT,   0, "[6.3.1.1]: les objets programmatiques n??cessitent un examen (script)."                                  },
    { PROGRAMMATIC_OBJECTS_REQUIRE_TESTING_OBJECT,   0, "[6.3.1.2]: les objets programmatiques n??cessitent un examen (object)."                                  },
    { PROGRAMMATIC_OBJECTS_REQUIRE_TESTING_EMBED,    0, "[6.3.1.3]: les objets programmatiques n??cessitent un examen (embed)."                                   },
    { PROGRAMMATIC_OBJECTS_REQUIRE_TESTING_APPLET,   0, "[6.3.1.4]: les objets programmatiques n??cessitent un examen (applet)."                                  },
    { FRAME_MISSING_NOFRAMES,                        0, "[6.5.1.1]: <frameset> section <noframes> manquante."                                                    },
    { NOFRAMES_INVALID_NO_VALUE,                     0, "[6.5.1.2]: <noframes> section non valide (pas de valeur)."                                              },
    { NOFRAMES_INVALID_CONTENT,                      0, "[6.5.1.3]: <noframes> section non valide (contenu)."                                                    },
    { NOFRAMES_INVALID_LINK,                         0, "[6.5.1.4]: <noframes> section non valide (lien)."                                                       },
    { REMOVE_FLICKER_SCRIPT,                         0, "[7.1.1.1]: suppression de scintillement (script)."                                                      },
    { REMOVE_FLICKER_OBJECT,                         0, "[7.1.1.2]: suppression de scintillement (object)."                                                      },
    { REMOVE_FLICKER_EMBED,                          0, "[7.1.1.1]: suppression de scintillement (embed)."                                                       },
    { REMOVE_FLICKER_APPLET,                         0, "[7.1.1.1]: suppression de scintillement (applet)."                                                      },
    { REMOVE_FLICKER_ANIMATED_GIF,                   0, "[7.1.1.1]: suppression de scintillement (gif anim??)."                                                   },
    { REMOVE_BLINK_MARQUEE,                          0, "[7.2.1.1]: suppression de blink/marquee."                                                               },
    { REMOVE_AUTO_REFRESH,                           0, "[7.4.1.1]: suppression de auto-refresh."                                                                },
    { REMOVE_AUTO_REDIRECT,                          0, "[7.5.1.1]: suppression de auto-redirect."                                                               },
    { ENSURE_PROGRAMMATIC_OBJECTS_ACCESSIBLE_SCRIPT, 0, "[8.1.1.1]: garantir que les objets programmatiques sont accessibles (script)."                          },
    { ENSURE_PROGRAMMATIC_OBJECTS_ACCESSIBLE_OBJECT, 0, "[8.1.1.2]: garantir que les objets programmatiques sont accessibles (object)."                          },
    { ENSURE_PROGRAMMATIC_OBJECTS_ACCESSIBLE_APPLET, 0, "[8.1.1.3]: garantir que les objets programmatiques sont accessibles (applet)."                          },
    { ENSURE_PROGRAMMATIC_OBJECTS_ACCESSIBLE_EMBED,  0, "[8.1.1.4]: garantir que les objets programmatiques sont accessibles (embed)."                           },
    { IMAGE_MAP_SERVER_SIDE_REQUIRES_CONVERSION,     0, "[9.1.1.1]: image map (c??t?? serveur) n??cessite une conversion."                                          },
    { SCRIPT_NOT_KEYBOARD_ACCESSIBLE_ON_MOUSE_DOWN,  0, "[9.3.1.1]: <script> non accessible par le clavier (onMouseDown)."                                       },
    { SCRIPT_NOT_KEYBOARD_ACCESSIBLE_ON_MOUSE_UP,    0, "[9.3.1.2]: <script> non accessible par le clavier (onMouseUp)."                                         },
    { SCRIPT_NOT_KEYBOARD_ACCESSIBLE_ON_CLICK,       0, "[9.3.1.3]: <script> non accessible par le clavier (onClick)."                                           },
    { SCRIPT_NOT_KEYBOARD_ACCESSIBLE_ON_MOUSE_OVER,  0, "[9.3.1.4]: <script> non accessible par le clavier (onMouseOver)."                                       },
    { SCRIPT_NOT_KEYBOARD_ACCESSIBLE_ON_MOUSE_OUT,   0, "[9.3.1.5]: <script> non accessible par le clavier (onMouseOut)."                                        },
    { SCRIPT_NOT_KEYBOARD_ACCESSIBLE_ON_MOUSE_MOVE,  0, "[9.3.1.6]: <script> non accessible par le clavier (onMouseMove)."                                       },
    { NEW_WINDOWS_REQUIRE_WARNING_NEW,               0, "[10.1.1.1]: les nouvelles fen??tres n??cessitent un avertissement (_new)."                                },
    { NEW_WINDOWS_REQUIRE_WARNING_BLANK,             0, "[10.1.1.2]: les nouvelles fen??tres n??cessitent un avertissement (_blank)."                              },
    { REPLACE_DEPRECATED_HTML_APPLET,                0, "[11.2.1.1]: remplacer l'??l??ment HTML d??pr??ci?? <applet>."                                                },
    { REPLACE_DEPRECATED_HTML_BASEFONT,              0, "[11.2.1.2]: remplacer l'??l??ment HTML d??pr??ci?? <basefont>."                                              },
    { REPLACE_DEPRECATED_HTML_CENTER,                0, "[11.2.1.3]: remplacer l'??l??ment HTML d??pr??ci?? <center>."                                                },
    { REPLACE_DEPRECATED_HTML_DIR,                   0, "[11.2.1.4]: remplacer l'??l??ment HTML d??pr??ci?? <dir>."                                                   },
    { REPLACE_DEPRECATED_HTML_FONT,                  0, "[11.2.1.5]: remplacer l'??l??ment HTML d??pr??ci?? <font>."                                                  },
    { REPLACE_DEPRECATED_HTML_ISINDEX,               0, "[11.2.1.6]: remplacer l'??l??ment HTML d??pr??ci?? <isindex>."                                               },
    { REPLACE_DEPRECATED_HTML_MENU,                  0, "[11.2.1.7]: remplacer l'??l??ment HTML d??pr??ci?? <menu>."                                                  },
    { REPLACE_DEPRECATED_HTML_S,                     0, "[11.2.1.8]: remplacer l'??l??ment HTML d??pr??ci?? <s>."                                                     },
    { REPLACE_DEPRECATED_HTML_STRIKE,                0, "[11.2.1.9]: remplacer l'??l??ment HTML d??pr??ci?? <strike>."                                                },
    { REPLACE_DEPRECATED_HTML_U,                     0, "[11.2.1.10]: remplacer l'??l??ment HTML d??pr??ci?? <u>."                                                    },
    { FRAME_MISSING_TITLE,                           0, "[12.1.1.1]: <frame> absence de titre."                                                                  },
    { FRAME_TITLE_INVALID_NULL,                      0, "[12.1.1.2]: <frame> titre non valide (null)."                                                           },
    { FRAME_TITLE_INVALID_SPACES,                    0, "[12.1.1.3]: <frame> titre non valide (espaces)."                                                        },
    { ASSOCIATE_LABELS_EXPLICITLY,                   0, "[12.4.1.1]: associer explicitement les ??tiquettes avec les contr??les de formulaire."                    },
    { ASSOCIATE_LABELS_EXPLICITLY_FOR,               0, "[12.4.1.2]: associer explicitement les ??tiquettes avec les contr??les de formulaire (for)."              },
    { ASSOCIATE_LABELS_EXPLICITLY_ID,                0, "[12.4.1.3]: associer explicitement les ??tiquettes avec les contr??les de formulaire (id)."               },
    { LINK_TEXT_NOT_MEANINGFUL,                      0, "[13.1.1.1]: texte du lien peu significatif."                                                            },
    { LINK_TEXT_MISSING,                             0, "[13.1.1.2]: texte du lien manquant."                                                                    },
    { LINK_TEXT_TOO_LONG,                            0, "[13.1.1.3]: texte du lien trop long."                                                                   },
    { LINK_TEXT_NOT_MEANINGFUL_CLICK_HERE,           0, "[13.1.1.4]: texte du lien peu significatif (click here)."                                               },
    { METADATA_MISSING,                              0, "[13.2.1.1]: M??tadonn??es manquantes."                                                                    },
    { METADATA_MISSING_REDIRECT_AUTOREFRESH,         0, "[13.2.1.3]: M??tadonn??es manquantes (redirect/auto-refresh)."                                            },
    { SKIPOVER_ASCII_ART,                            0, "[13.10.1.1]: ignore l'ascii art."                                                                       },

#if SUPPORT_CONSOLE_APP
    { TC_LABEL_COL,                                  0, "colonne"                                                                                                },
    { TC_LABEL_FILE,                                 0, "fichier"                                                                                                },
    { TC_LABEL_LANG,                                 0, "langue"                                                                                                 },
    { TC_LABEL_LEVL,                                 0, "niveau"                                                                                                 },
    { TC_LABEL_OPT,                                  0, "option"                                                                                                 },
    { TC_MAIN_ERROR_LOAD_CONFIG,                     0, "Le chargement du fichier de configuration \"%s\" a ??chou??, err = %d"                                    },
    { TC_OPT_ACCESS,                                 0,        
        "faire des v??rifications d'accessibilit?? suppl??mentaires (<niveau> = 0, 1, 2, 3). implicitement 0 si "
        "<niveau> est manquant."
    },
    { TC_OPT_ASCII,                                  0, "utilise ISO-8859-1 pour l'entr??e, US-ASCII pour la sortie"                                              },
    { TC_OPT_ASHTML,                                 0, "force le XHTML en HTML bien structur??"                                                                  },
    { TC_OPT_ASXML,                                  0, "converti le HTML en XHTML bien structur??"                                                               },
    { TC_OPT_BARE,                                   0, "enl??ve les guillemets ?? double chevron et les tirets longs."                                            },
    { TC_OPT_BIG5,                                   0, "utilise Big5 pour l'entr??e et la sortie"                                                                },
    { TC_OPT_CLEAN,                                  0, "remplace les balises FONT, NOBR et CENTER par du CSS"                                                   },
    { TC_OPT_CONFIG,                                 0, "d??termine les options de configuration ?? partir du <fichier> sp??cifi?? "                                 },
    { TC_OPT_ERRORS,                                 0, "affiche seulement les erreurs et avertissements"                                                        },
    { TC_OPT_FILE,                                   0, "??crit les erreurs et avertissements vers le <fichier> pr??cis?? "                                         },
    { TC_OPT_GDOC,                                   0, "produit une version nettoy??e du html export?? par Google Docs"                                           },
    { TC_OPT_HELP,                                   0, "liste toutes les options de ligne de commande"                                                          },
    { TC_OPT_HELPCFG,                                0, "liste toutes les options de configuration"                                                              },
    { TC_OPT_HELPOPT,                                0, "Affiche une description de l'<option>"                                                                  },
    { TC_OPT_IBM858,                                 0, "utilise IBM-858 (CP850+Euro) pour l'entr??e, US-ASCII pour la sortie"                                    },
    { TC_OPT_INDENT,                                 0, "indente le contenu d'un ??l??ment"                                                                        },
    { TC_OPT_ISO2022,                                0, "utilise ISO-2022 pour l'entr??e et la sortie"                                                            },
    { TC_OPT_LANGUAGE,                               0,        
        "Pr??cise le langage de sortie de Tidy pour <lang>. Ajouter '-language help' pour plus d'aide. "
        "Utiliser avant les arguments produisant des sorties pour garantir que le langage sera pris en "
        "compte, par exemple `tidy -lang fr -lang help`."
    },
    { TC_OPT_LATIN0,                                 0, "utilise ISO-8859-15 pour l'entr??e, US-ASCII pour la sortie"                                             },
    { TC_OPT_LATIN1,                                 0, "utilise ISO-8859-1 pour l'entr??e et la sortie"                                                          },
    { TC_OPT_MAC,                                    0, "utilise MacRoman pour l'entr??e, US-ASCII pour la sortie"                                                },
    { TC_OPT_MODIFY,                                 0, "modifie le fichier original en entr??e"                                                                  },
    { TC_OPT_NUMERIC,                                0, "sortie num??rique plut??t qu'entit??s nomm??es"                                                             },
    { TC_OPT_OMIT,                                   0, "Omettre les tags optionnels d'ouverture et de fermeture"                                                },
    { TC_OPT_OUTPUT,                                 0, "??crit la sortie vers le fichier <file>"                                                                 },
    { TC_OPT_QUIET,                                  0, "supprime les sorties non-essentielles"                                                                  },
    { TC_OPT_RAW,                                    0, "Valeurs de sortie sup??rieures ?? 127 sans conversion en entit??s"                                         },
    { TC_OPT_SHIFTJIS,                               0, "utilise Shift_JIS ?? la fois pour l'entr??e et la sortie"                                                 },
    { TC_OPT_SHOWCFG,                                0, "liste les options de configuration"                                                                     },
    { TC_OPT_UPPER,                                  0, "force les balises en lettres majuscules"                                                                },
    { TC_OPT_UTF16,                                  0, "utilise UTF-16 ?? la fois pour l'entr??e et la sortie"                                                    },
    { TC_OPT_UTF16BE,                                0, "utilise UTF-16BE ?? la fois pour l'entr??e et la sortie"                                                  },
    { TC_OPT_UTF16LE,                                0, "utilise UTF-16LE ?? la fois pour l'entr??e et la sortie"                                                  },
    { TC_OPT_UTF8,                                   0, "utilise UTF-8 ?? la fois pour l'entr??e et la sortie"                                                     },
    { TC_OPT_VERSION,                                0, "affiche la version de Tidy"                                                                             },
    { TC_OPT_WIN1252,                                0, "utilise Windows-1252 pour l'entr??e, US-ASCII pour la sortie"                                            },
    { TC_OPT_WRAP,                                   0,        
        "coupe le texte ?? la colonne <column>. 0 est suppos?? si <column> est manquante. Si cette option "
        "n'est pas pr??cis??e, la valeur par d??faut de l'option 'wrap' s'applique."
    },
    { TC_OPT_XML,                                    0, "pr??cise que l'entr??e est un XML bien structur??"                                                         },
    { TC_OPT_XMLCFG,                                 0, "liste toutes les options de configuration au format XML"                                                },
    { TC_OPT_XMLHELP,                                0, "liste les options de ligne de commande au format XML"                                                   },
    { TC_OPT_XMLSTRG,                                0, "sortie de toutes les cha??nes Tidy au format XML"                                                        },
    { TC_OPT_XMLERRS,                                0, "constantes et cha??nes de sortie d'erreur au format XML"                                                 },
    { TC_OPT_XMLOPTS,                                0, "descriptions des options de sortie au format XML"                                                       },
    { TC_STRING_CONF_HEADER,                         0, "Fichier de configuration:"                                                                              },
    { TC_STRING_CONF_NAME,                           0, "Nom"                                                                                                    },
    { TC_STRING_CONF_TYPE,                           0, "Type"                                                                                                   },
    { TC_STRING_CONF_VALUE,                          0, "Valeur courante"                                                                                        },
    { TC_STRING_OPT_NOT_DOCUMENTED,                  0, "Attention: l'option `%s' n'est pas document??e."                                                         },
    { TC_STRING_OUT_OF_MEMORY,                       0, "M??moire insuffisante. Abandon."                                                                         },
    { TC_STRING_FATAL_ERROR,                         0, "Erreur fatale: valeur impossible pour id='%d'."                                                         },
    { TC_STRING_FILE_MANIP,                          0, "Manipulation de fichier"                                                                                },
    { TC_STRING_PROCESS_DIRECTIVES,                  0, "Directives de traitement"                                                                               },
    { TC_STRING_CHAR_ENCODING,                       0, "Encodages de caract??re"                                                                                 },
    { TC_STRING_LANG_MUST_SPECIFY,                   0, "Une locale POSIX ou Windows doit ??tre pr??cis??e."                                                        },
    { TC_STRING_LANG_NOT_FOUND,                      0, "Tidy n'a pas la langue '%s', '%s' sera utilis?? ?? la place."                                             },
    { TC_STRING_MISC,                                0, "Divers"                                                                                                 },
    { TC_STRING_XML,                                 0, "XML"                                                                                                    },
    { TC_STRING_MUST_SPECIFY,                        0, "Un nom d'option doit ??tre pr??cis??."                                                                     },
    { TC_STRING_UNKNOWN_OPTION,                      0, "HTML Tidy: option inconnue: %c"                                                                         },
    { TC_STRING_UNKNOWN_OPTION_B,                    0, "HTML Tidy: option inconnue."                                                                            },
    { TC_STRING_VERS_A,                              0, "HTML Tidy pour %s version %s"                                                                           },
    { TC_STRING_VERS_B,                              0, "HTML Tidy version %s"                                                                                   },
    { TC_TXT_HELP_1,                                 0,        
        "\n"
        "%s [options...] [fichier...] [options...] [fichier...]\n"
        "Utilitaire pour nettoyer et embellir le HTML/XHTML/XML.\n"
        "\n"
        "Ceci est le HTML Tidy modernis?? version %s.\n"
        "\n"
    },
    { TC_TXT_HELP_2A,                                0, "Arguments en ligne de commande de HTML Tidy pour %s:"                                                   },
    { TC_TXT_HELP_2B,                                0, "Arguments en ligne de commande de HTML Tidy:"                                                           },
    { TC_TXT_HELP_3,                                 0,        
        "\n"
        "Options de configuration de Tidy\n"
        "==========================\n"
        "Utilisez les options de configuration de Tidy comme arguments de \n"
        "ligne de commande, sous la forme ??--option <valeur>\", par exemple \n"
        "\"--indent-with-tabs yes\"\n"
        "\n"
        "Pour une liste de toutes les options de configuration, utilisez \n"
        "\"-help-config\" ou consultez la page de manuel (si votre OS a la \n"
        "commande man).\n"
        "\n"
        "Si votre environnement a d??clar?? une variable $HTML_TIDY qui pointe \n"
        "vers un fichier de configuration, alors Tidy tentera de l'utiliser.\n"
        "\n"
        "Sur certaines plateformes, Tidy essaiera ??galement d'utiliser une \n"
        "configuration d??crite dans /etc/tidy.conf ou ~/.tidy.conf.\n"
        "\n"
        "Autre\n"
        "=====\n"
        "Pour l'entr??e/sortie par d??faut, utilisez stdin/stdout respectivement. \n"
        "\n"
        "Les options en lettre simple, en dehors de -f, peuvent ??tre combin??es \n"
        "comme dans: tidy -f errs.txt -imu foo.html\n"
        "\n"
        "Renseignements\n"
        "===========\n"
        "Pour plus d'informations ?? propos de HTML Tidy, voir\n"
        "????http://www.html-tidy.org/\n"
        "\n"
        "Pour plus d'informations sur le langage HTML, consultez les rubriques suivantes:\n"
        "\n"
        "????HTML: ??dition pour les auteurs Web (de la derni??re sp??cification HTML)\n"
        "????http://dev.w3.org/html5/spec-author-view\n"
        "\n"
    },
    { TC_TXT_HELP_CONFIG,                            0,        
        "\n"
        "Param??tres de configuration de HTML Tidy\n"
        "\n"
        "Dans un fichier, utilisez la forme:\n"
        "\n"
        "wrap: 72\n"
        "indent: no\n"
        "\n"
        "Quand il sont pr??cis??s en ligne de commande, utilisez la forme:\n"
        "\n"
        "--wrap 72 --indent no\n"
        "\n"
    },
    { TC_TXT_HELP_CONFIG_NAME,                       0, "Nom"                                                                                                    },
    { TC_TXT_HELP_CONFIG_TYPE,                       0, "Type"                                                                                                   },
    { TC_TXT_HELP_CONFIG_ALLW,                       0, "Valeurs possibles"                                                                                      },
    { TC_TXT_HELP_LANG_1,                            0,        
        "\n"
        "L'option -language (ou -lang) indique la langue que Tidy doit utiliser \n"
        "en sortie. Veuillez noter que ce n'est pas un service de traduction de \n"
        "documents, et que cela affecte uniquement les messages que Tidy \n"
        "renvoie.\n"
        "\n"
        "Lorsqu'il est utilis?? depuis la ligne de commande, l'argument -language \n"
        "doit ??tre utilis?? avant des arguments qui ont un impact sur la sortie, \n"
        "sinon Tidy va produire une sortie avant de conna??tre la langue ?? utiliser.\n"
        "\n"
        "En plus des codes de langue du standard POSIX, Tidy est capable de\n"
        "comprendre les codes de langue historiques de Windows. \n"
        "Veuillez noter que cette liste indique les codes que Tidy comprend, et \n"
        "ne signifie pas que la langue est pour autant install??e.\n"
        "\n"
        "La colonne de droite indique comment Tidy comprendra le nom \n"
        "Windows historique.\n"
        "\n"
    },
    { TC_TXT_HELP_LANG_2,                            0,        
        "\n"
        "Les langages suivants sont install??s pour le moment dans Tidy.\n"
        "Veuillez noter qu'il n'y a pas de garantie qu'ils soient complets ; \n"
        "Seul un d??veloppeur (ou plusieurs) a commenc?? ?? ajouter le \n"
        "langage indiqu??.\n"
        "\n"
    },
    { TC_TXT_HELP_LANG_3,                            0,        
        "\n"
        "Si Tidy est capable de d??terminer votre locale, Tidy utilisera alors la langue \n"
        "locale automatiquement. Par exemple, les syst??mes bas??s sur Unix utilisent \n"
        "une variable d'environnement $LANG et/ou $LC_ALL.\n"
        "Consultez la documentation de votre syst??me d'exploitation pour plus \n"
        "d'informations. \n"
        "\n"
        "Tidy utilise pour l'instant la locale %s. \n"
        "\n"
    },
#endif /* SUPPORT_CONSOLE_APP */

    {/* This MUST be present and last. */
      TIDY_MESSAGE_TYPE_LAST,                        0, NULL
    }

}};


#endif /* language_fr_h */

