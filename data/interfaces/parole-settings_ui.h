/* automatically generated from parole-settings.ui */
#ifdef __SUNPRO_C
#pragma align 4 (parole_settings_ui)
#endif
#ifdef __GNUC__
static const char parole_settings_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char parole_settings_ui[] =
#endif
{
  "<?xml version=\"1.0\" encoding=\"UTF-8\"?><interface><requires lib=\"gt"
  "k+\" version=\"3.2\"/><requires lib=\"libxfce4ui\" version=\"4.11\"/><o"
  "bject class=\"GtkImage\" id=\"image2\"><property name=\"visible\">True<"
  "/property><property name=\"can_focus\">False</property><property name=\""
  "icon_name\">document-revert</property></object><object class=\"GtkListS"
  "tore\" id=\"liststore1\"><columns><column type=\"gchararray\"/></column"
  "s></object><object class=\"GtkListStore\" id=\"liststore2\"><columns><c"
  "olumn type=\"gchararray\"/><column type=\"gchararray\"/></columns><data"
  "><row><col id=\"0\">xvimagesink</col><col id=\"1\" translatable=\"yes\""
  ">X Window System (X11/XShm/Xv)</col></row><row><col id=\"0\">ximagesink"
  "</col><col id=\"1\" translatable=\"yes\">X Window System (No Xv)</col><"
  "/row></data></object><object class=\"XfceTitledDialog\" id=\"settings-d"
  "ialog\"><property name=\"can_focus\">False</property><property name=\"t"
  "itle\" translatable=\"yes\">Parole Settings</property><property name=\""
  "modal\">True</property><property name=\"icon_name\">parole</property><p"
  "roperty name=\"type_hint\">dialog</property><property name=\"subtitle\""
  " translatable=\"yes\">Configure your media player</property><signal nam"
  "e=\"response\" handler=\"parole_conf_dialog_response_cb\" swapped=\"no\""
  "/><child internal-child=\"vbox\"><object class=\"GtkBox\" id=\"dialog-v"
  "box1\"><property name=\"can_focus\">False</property><property name=\"or"
  "ientation\">vertical</property><property name=\"spacing\">2</property><"
  "child internal-child=\"action_area\"><object class=\"GtkButtonBox\" id="
  "\"dialog-action_area1\"><property name=\"can_focus\">False</property><p"
  "roperty name=\"margin_left\">1</property><property name=\"margin_right\""
  ">1</property><property name=\"margin_top\">5</property><property name=\""
  "margin_bottom\">1</property><property name=\"layout_style\">end</proper"
  "ty><child><object class=\"GtkButton\" id=\"close\"><property name=\"lab"
  "el\">gtk-close</property><property name=\"visible\">True</property><pro"
  "perty name=\"can_focus\">True</property><property name=\"receives_defau"
  "lt\">True</property><property name=\"use_stock\">True</property></objec"
  "t><packing><property name=\"expand\">False</property><property name=\"f"
  "ill\">True</property><property name=\"position\">0</property></packing>"
  "</child></object><packing><property name=\"expand\">False</property><pr"
  "operty name=\"fill\">True</property><property name=\"pack_type\">end</p"
  "roperty><property name=\"position\">0</property></packing></child><chil"
  "d><object class=\"GtkNotebook\" id=\"notebook1\"><property name=\"visib"
  "le\">True</property><property name=\"can_focus\">True</property><proper"
  "ty name=\"margin_left\">6</property><property name=\"margin_right\">6</"
  "property><property name=\"margin_top\">6</property><child><object class"
  "=\"GtkBox\" id=\"box1\"><property name=\"visible\">True</property><prop"
  "erty name=\"can_focus\">False</property><property name=\"margin_left\">"
  "12</property><property name=\"margin_right\">24</property><property nam"
  "e=\"margin_top\">12</property><property name=\"margin_bottom\">12</prop"
  "erty><property name=\"orientation\">vertical</property><property name=\""
  "spacing\">18</property><child><object class=\"GtkFrame\" id=\"frame1\">"
  "<property name=\"visible\">True</property><property name=\"can_focus\">"
  "False</property><property name=\"margin_bottom\">6</property><property "
  "name=\"label_xalign\">0</property><property name=\"shadow_type\">none</"
  "property><child><object class=\"GtkAlignment\" id=\"alignment1\"><prope"
  "rty name=\"visible\">True</property><property name=\"can_focus\">False<"
  "/property><property name=\"margin_top\">6</property><property name=\"le"
  "ft_padding\">12</property><child><object class=\"GtkBox\" id=\"box7\"><"
  "property name=\"visible\">True</property><property name=\"can_focus\">F"
  "alse</property><property name=\"spacing\">12</property><child><object c"
  "lass=\"GtkLabel\" id=\"reset-saver-label\"><property name=\"visible\">T"
  "rue</property><property name=\"can_focus\">False</property><property na"
  "me=\"xalign\">0</property><property name=\"label\" translatable=\"yes\""
  ">Disable screensaver when playing movies</property></object><packing><p"
  "roperty name=\"expand\">True</property><property name=\"fill\">True</pr"
  "operty><property name=\"position\">0</property></packing></child><child"
  "><object class=\"GtkSwitch\" id=\"reset-saver\"><property name=\"visibl"
  "e\">True</property><property name=\"can_focus\">True</property></object"
  "><packing><property name=\"expand\">False</property><property name=\"fi"
  "ll\">True</property><property name=\"position\">1</property></packing><"
  "/child></object></child></object></child><child type=\"label\"><object "
  "class=\"GtkLabel\" id=\"label5\"><property name=\"visible\">True</prope"
  "rty><property name=\"can_focus\">False</property><property name=\"label"
  "\" translatable=\"yes\">&lt;b&gt;Screensaver&lt;/b&gt;</property><prope"
  "rty name=\"use_markup\">True</property></object></child></object><packi"
  "ng><property name=\"expand\">False</property><property name=\"fill\">Tr"
  "ue</property><property name=\"position\">0</property></packing></child>"
  "<child><object class=\"GtkFrame\" id=\"frame2\"><property name=\"visibl"
  "e\">True</property><property name=\"can_focus\">False</property><proper"
  "ty name=\"margin_bottom\">6</property><property name=\"label_xalign\">0"
  "</property><property name=\"shadow_type\">none</property><child><object"
  " class=\"GtkAlignment\" id=\"alignment2\"><property name=\"visible\">Tr"
  "ue</property><property name=\"can_focus\">False</property><property nam"
  "e=\"left_padding\">12</property><child><object class=\"GtkBox\" id=\"bo"
  "x2\"><property name=\"visible\">True</property><property name=\"can_foc"
  "us\">False</property><property name=\"margin_top\">6</property><propert"
  "y name=\"margin_bottom\">6</property><property name=\"orientation\">ver"
  "tical</property><property name=\"spacing\">6</property><child><object c"
  "lass=\"GtkBox\" id=\"box8\"><property name=\"visible\">True</property><"
  "property name=\"can_focus\">False</property><property name=\"spacing\">"
  "12</property><child><object class=\"GtkLabel\" id=\"enable-vis-label\">"
  "<property name=\"visible\">True</property><property name=\"can_focus\">"
  "False</property><property name=\"xalign\">0</property><property name=\""
  "label\" translatable=\"yes\">Show visual effects when an audio file is "
  "played</property></object><packing><property name=\"expand\">True</prop"
  "erty><property name=\"fill\">True</property><property name=\"position\""
  ">0</property></packing></child><child><object class=\"GtkSwitch\" id=\""
  "enable-vis\"><property name=\"visible\">True</property><property name=\""
  "can_focus\">True</property></object><packing><property name=\"expand\">"
  "False</property><property name=\"fill\">True</property><property name=\""
  "position\">1</property></packing></child></object><packing><property na"
  "me=\"expand\">False</property><property name=\"fill\">True</property><p"
  "roperty name=\"position\">0</property></packing></child><child><object "
  "class=\"GtkBox\" id=\"box3\"><property name=\"visible\">True</property>"
  "<property name=\"can_focus\">False</property><property name=\"spacing\""
  ">6</property><child><object class=\"GtkLabel\" id=\"label8\"><property "
  "name=\"visible\">True</property><property name=\"can_focus\">False</pro"
  "perty><property name=\"label\" translatable=\"yes\">Visualization type:"
  "</property></object><packing><property name=\"expand\">False</property>"
  "<property name=\"fill\">True</property><property name=\"position\">0</p"
  "roperty></packing></child><child><object class=\"GtkComboBox\" id=\"vis"
  "-combobox\"><property name=\"visible\">True</property><property name=\""
  "can_focus\">True</property><property name=\"model\">liststore1</propert"
  "y><signal name=\"changed\" handler=\"parole_conf_dialog_vis_plugin_chan"
  "ged_cb\" swapped=\"no\"/><child><object class=\"GtkCellRendererText\" i"
  "d=\"cellrenderertext1\"/><attributes><attribute name=\"text\">0</attrib"
  "ute></attributes></child></object><packing><property name=\"expand\">Tr"
  "ue</property><property name=\"fill\">True</property><property name=\"po"
  "sition\">1</property></packing></child></object><packing><property name"
  "=\"expand\">False</property><property name=\"fill\">True</property><pro"
  "perty name=\"position\">1</property></packing></child></object></child>"
  "</object></child><child type=\"label\"><object class=\"GtkLabel\" id=\""
  "label6\"><property name=\"visible\">True</property><property name=\"can"
  "_focus\">False</property><property name=\"label\" translatable=\"yes\">"
  "&lt;b&gt;Audio Visualization&lt;/b&gt;</property><property name=\"use_m"
  "arkup\">True</property></object></child></object><packing><property nam"
  "e=\"expand\">False</property><property name=\"fill\">True</property><pr"
  "operty name=\"position\">1</property></packing></child><child><object c"
  "lass=\"GtkFrame\" id=\"frame3\"><property name=\"visible\">True</proper"
  "ty><property name=\"can_focus\">False</property><property name=\"margin"
  "_bottom\">6</property><property name=\"label_xalign\">0</property><prop"
  "erty name=\"shadow_type\">none</property><child><object class=\"GtkAlig"
  "nment\" id=\"alignment3\"><property name=\"visible\">True</property><pr"
  "operty name=\"can_focus\">False</property><property name=\"margin_top\""
  ">6</property><property name=\"left_padding\">12</property><child><objec"
  "t class=\"GtkBox\" id=\"box9\"><property name=\"visible\">True</propert"
  "y><property name=\"can_focus\">False</property><property name=\"spacing"
  "\">12</property><child><object class=\"GtkLabel\" id=\"multimedia-keys-"
  "label\"><property name=\"visible\">True</property><property name=\"can_"
  "focus\">False</property><property name=\"xalign\">0</property><property"
  " name=\"label\" translatable=\"yes\">Enable keyboard multimedia keys</p"
  "roperty></object><packing><property name=\"expand\">True</property><pro"
  "perty name=\"fill\">True</property><property name=\"position\">0</prope"
  "rty></packing></child><child><object class=\"GtkSwitch\" id=\"multimedi"
  "a-keys\"><property name=\"visible\">True</property><property name=\"can"
  "_focus\">True</property></object><packing><property name=\"expand\">Fal"
  "se</property><property name=\"fill\">True</property><property name=\"po"
  "sition\">1</property></packing></child></object></child></object></chil"
  "d><child type=\"label\"><object class=\"GtkLabel\" id=\"label7\"><prope"
  "rty name=\"visible\">True</property><property name=\"can_focus\">False<"
  "/property><property name=\"label\" translatable=\"yes\">&lt;b&gt;Keyboa"
  "rd&lt;/b&gt;</property><property name=\"use_markup\">True</property></o"
  "bject></child></object><packing><property name=\"expand\">False</proper"
  "ty><property name=\"fill\">True</property><property name=\"position\">2"
  "</property></packing></child></object></child><child type=\"tab\"><obje"
  "ct class=\"GtkLabel\" id=\"label1\"><property name=\"visible\">True</pr"
  "operty><property name=\"can_focus\">False</property><property name=\"la"
  "bel\" translatable=\"yes\">General</property></object><packing><propert"
  "y name=\"tab_fill\">False</property></packing></child><child><object cl"
  "ass=\"GtkBox\" id=\"box4\"><property name=\"visible\">True</property><p"
  "roperty name=\"can_focus\">False</property><property name=\"margin_left"
  "\">12</property><property name=\"margin_right\">24</property><property "
  "name=\"margin_top\">12</property><property name=\"margin_bottom\">12</p"
  "roperty><property name=\"orientation\">vertical</property><property nam"
  "e=\"spacing\">18</property><child><object class=\"GtkFrame\" id=\"frame"
  "4\"><property name=\"visible\">True</property><property name=\"can_focu"
  "s\">False</property><property name=\"label_xalign\">0</property><proper"
  "ty name=\"shadow_type\">none</property><child><object class=\"GtkAlignm"
  "ent\" id=\"alignment7\"><property name=\"visible\">True</property><prop"
  "erty name=\"can_focus\">False</property><property name=\"margin_top\">6"
  "</property><property name=\"margin_bottom\">6</property><property name="
  "\"left_padding\">12</property><child><object class=\"GtkBox\" id=\"box1"
  "1\"><property name=\"visible\">True</property><property name=\"can_focu"
  "s\">False</property><property name=\"orientation\">vertical</property><"
  "property name=\"spacing\">6</property><child><object class=\"GtkComboBo"
  "x\" id=\"combobox-sink\"><property name=\"visible\">True</property><pro"
  "perty name=\"can_focus\">False</property><property name=\"model\">lists"
  "tore2</property><property name=\"button_sensitivity\">on</property><sig"
  "nal name=\"changed\" handler=\"parole_conf_dialog_sink_plugin_changed_c"
  "b\" swapped=\"no\"/><child><object class=\"GtkCellRendererText\" id=\"c"
  "ellrenderertext2\"/><attributes><attribute name=\"text\">1</attribute><"
  "/attributes></child></object><packing><property name=\"expand\">False</"
  "property><property name=\"fill\">True</property><property name=\"positi"
  "on\">0</property></packing></child><child><object class=\"GtkInfoBar\" "
  "id=\"backend-infobar\"><property name=\"app_paintable\">True</property>"
  "<property name=\"can_focus\">False</property><property name=\"no_show_a"
  "ll\">True</property><child internal-child=\"action_area\"><object class"
  "=\"GtkButtonBox\" id=\"infobar-action_area1\"><property name=\"can_focu"
  "s\">False</property><property name=\"spacing\">6</property><property na"
  "me=\"layout_style\">end</property><child><placeholder/></child><child><"
  "placeholder/></child><child><placeholder/></child></object><packing><pr"
  "operty name=\"expand\">False</property><property name=\"fill\">False</p"
  "roperty><property name=\"position\">0</property></packing></child><chil"
  "d internal-child=\"content_area\"><object class=\"GtkBox\" id=\"infobar"
  "-content_area1\"><property name=\"can_focus\">False</property><property"
  " name=\"spacing\">16</property><child><object class=\"GtkImage\" id=\"i"
  "mage1\"><property name=\"visible\">True</property><property name=\"can_"
  "focus\">False</property><property name=\"icon_name\">info</property><pr"
  "operty name=\"use_fallback\">True</property></object><packing><property"
  " name=\"expand\">False</property><property name=\"fill\">True</property"
  "><property name=\"position\">0</property></packing></child><child><obje"
  "ct class=\"GtkLabel\" id=\"label19\"><property name=\"visible\">True</p"
  "roperty><property name=\"can_focus\">False</property><property name=\"x"
  "align\">0</property><property name=\"label\" translatable=\"yes\">Pleas"
  "e restart Parole for this change to take effect.</property></object><pa"
  "cking><property name=\"expand\">False</property><property name=\"fill\""
  ">True</property><property name=\"position\">1</property></packing></chi"
  "ld><child><placeholder/></child></object><packing><property name=\"expa"
  "nd\">False</property><property name=\"fill\">False</property><property "
  "name=\"position\">0</property></packing></child><child><placeholder/></"
  "child></object><packing><property name=\"expand\">True</property><prope"
  "rty name=\"fill\">True</property><property name=\"position\">1</propert"
  "y></packing></child></object></child></object></child><child type=\"lab"
  "el\"><object class=\"GtkLabel\" id=\"label18\"><property name=\"visible"
  "\">True</property><property name=\"can_focus\">False</property><propert"
  "y name=\"label\" translatable=\"yes\">&lt;b&gt;Video Output&lt;/b&gt;</"
  "property><property name=\"use_markup\">True</property></object></child>"
  "</object><packing><property name=\"expand\">False</property><property n"
  "ame=\"fill\">True</property><property name=\"position\">0</property></p"
  "acking></child><child><object class=\"GtkFrame\" id=\"frame-display\"><"
  "property name=\"visible\">True</property><property name=\"can_focus\">F"
  "alse</property><property name=\"label_xalign\">0</property><property na"
  "me=\"shadow_type\">none</property><child><object class=\"GtkAlignment\""
  " id=\"alignment4\"><property name=\"visible\">True</property><property "
  "name=\"can_focus\">False</property><property name=\"left_padding\">12</"
  "property><child><object class=\"GtkBox\" id=\"box10\"><property name=\""
  "visible\">True</property><property name=\"can_focus\">False</property><"
  "property name=\"orientation\">vertical</property><child><object class=\""
  "GtkGrid\" id=\"grid1\"><property name=\"visible\">True</property><prope"
  "rty name=\"can_focus\">False</property><property name=\"margin_top\">6<"
  "/property><property name=\"row_spacing\">6</property><property name=\"c"
  "olumn_spacing\">6</property><child><object class=\"GtkLabel\" id=\"labe"
  "l9\"><property name=\"visible\">True</property><property name=\"can_foc"
  "us\">False</property><property name=\"xalign\">0</property><property na"
  "me=\"label\" translatable=\"yes\">Brightness:</property></object><packi"
  "ng><property name=\"left_attach\">0</property><property name=\"top_atta"
  "ch\">0</property><property name=\"width\">1</property><property name=\""
  "height\">1</property></packing></child><child><object class=\"GtkLabel\""
  " id=\"label10\"><property name=\"visible\">True</property><property nam"
  "e=\"can_focus\">False</property><property name=\"xalign\">0</property><"
  "property name=\"label\" translatable=\"yes\">Contrast:</property></obje"
  "ct><packing><property name=\"left_attach\">0</property><property name=\""
  "top_attach\">1</property><property name=\"width\">1</property><property"
  " name=\"height\">1</property></packing></child><child><object class=\"G"
  "tkLabel\" id=\"label11\"><property name=\"visible\">True</property><pro"
  "perty name=\"can_focus\">False</property><property name=\"xalign\">0</p"
  "roperty><property name=\"label\" translatable=\"yes\">Hue:</property></"
  "object><packing><property name=\"left_attach\">0</property><property na"
  "me=\"top_attach\">3</property><property name=\"width\">1</property><pro"
  "perty name=\"height\">1</property></packing></child><child><object clas"
  "s=\"GtkLabel\" id=\"label12\"><property name=\"visible\">True</property"
  "><property name=\"can_focus\">False</property><property name=\"xalign\""
  ">0</property><property name=\"label\" translatable=\"yes\">Saturation:<"
  "/property></object><packing><property name=\"left_attach\">0</property>"
  "<property name=\"top_attach\">2</property><property name=\"width\">1</p"
  "roperty><property name=\"height\">1</property></packing></child><child>"
  "<object class=\"GtkScale\" id=\"brightness\"><property name=\"visible\""
  ">True</property><property name=\"can_focus\">True</property><property n"
  "ame=\"hexpand\">True</property><property name=\"draw_value\">False</pro"
  "perty><signal name=\"value-changed\" handler=\"brightness_value_changed"
  "_cb\" swapped=\"no\"/></object><packing><property name=\"left_attach\">"
  "1</property><property name=\"top_attach\">0</property><property name=\""
  "width\">1</property><property name=\"height\">1</property></packing></c"
  "hild><child><object class=\"GtkScale\" id=\"contrast\"><property name=\""
  "visible\">True</property><property name=\"can_focus\">True</property><p"
  "roperty name=\"draw_value\">False</property><signal name=\"value-change"
  "d\" handler=\"contrast_value_changed_cb\" swapped=\"no\"/></object><pac"
  "king><property name=\"left_attach\">1</property><property name=\"top_at"
  "tach\">1</property><property name=\"width\">1</property><property name="
  "\"height\">1</property></packing></child><child><object class=\"GtkScal"
  "e\" id=\"hue\"><property name=\"visible\">True</property><property name"
  "=\"can_focus\">True</property><property name=\"draw_value\">False</prop"
  "erty><signal name=\"value-changed\" handler=\"hue_value_changed_cb\" sw"
  "apped=\"no\"/></object><packing><property name=\"left_attach\">1</prope"
  "rty><property name=\"top_attach\">3</property><property name=\"width\">"
  "1</property><property name=\"height\">1</property></packing></child><ch"
  "ild><object class=\"GtkScale\" id=\"saturation\"><property name=\"visib"
  "le\">True</property><property name=\"can_focus\">True</property><proper"
  "ty name=\"draw_value\">False</property><signal name=\"value-changed\" h"
  "andler=\"saturation_value_changed_cb\" swapped=\"no\"/></object><packin"
  "g><property name=\"left_attach\">1</property><property name=\"top_attac"
  "h\">2</property><property name=\"width\">1</property><property name=\"h"
  "eight\">1</property></packing></child></object><packing><property name="
  "\"expand\">True</property><property name=\"fill\">True</property><prope"
  "rty name=\"position\">0</property></packing></child><child><object clas"
  "s=\"GtkButtonBox\" id=\"buttonbox2\"><property name=\"visible\">True</p"
  "roperty><property name=\"can_focus\">False</property><property name=\"l"
  "ayout_style\">end</property><child><object class=\"GtkButton\" id=\"res"
  "et-color\"><property name=\"label\" translatable=\"yes\">Reset to defau"
  "lts</property><property name=\"visible\">True</property><property name="
  "\"can_focus\">True</property><property name=\"receives_default\">True</"
  "property><property name=\"image\">image2</property><signal name=\"click"
  "ed\" handler=\"reset_color_clicked_cb\" swapped=\"no\"/></object><packi"
  "ng><property name=\"expand\">False</property><property name=\"fill\">Tr"
  "ue</property><property name=\"position\">0</property></packing></child>"
  "</object><packing><property name=\"expand\">False</property><property n"
  "ame=\"fill\">True</property><property name=\"position\">1</property></p"
  "acking></child></object></child></object></child><child type=\"label\">"
  "<object class=\"GtkLabel\" id=\"label15\"><property name=\"visible\">Tr"
  "ue</property><property name=\"can_focus\">False</property><property nam"
  "e=\"label\" translatable=\"yes\">&lt;b&gt;Color Balance&lt;/b&gt;</prop"
  "erty><property name=\"use_markup\">True</property></object></child></ob"
  "ject><packing><property name=\"expand\">False</property><property name="
  "\"fill\">True</property><property name=\"position\">1</property></packi"
  "ng></child></object><packing><property name=\"position\">1</property></"
  "packing></child><child type=\"tab\"><object class=\"GtkLabel\" id=\"lab"
  "el2\"><property name=\"visible\">True</property><property name=\"can_fo"
  "cus\">False</property><property name=\"label\" translatable=\"yes\">Dis"
  "play</property></object><packing><property name=\"position\">1</propert"
  "y><property name=\"tab_fill\">False</property></packing></child><child>"
  "<object class=\"GtkFrame\" id=\"frame5\"><property name=\"visible\">Tru"
  "e</property><property name=\"can_focus\">False</property><property name"
  "=\"margin_left\">12</property><property name=\"margin_right\">24</prope"
  "rty><property name=\"margin_top\">12</property><property name=\"margin_"
  "bottom\">12</property><property name=\"label_xalign\">0</property><prop"
  "erty name=\"shadow_type\">none</property><child><object class=\"GtkAlig"
  "nment\" id=\"alignment5\"><property name=\"visible\">True</property><pr"
  "operty name=\"can_focus\">False</property><property name=\"margin_top\""
  ">6</property><property name=\"left_padding\">12</property><child><objec"
  "t class=\"GtkGrid\" id=\"grid3\"><property name=\"visible\">True</prope"
  "rty><property name=\"can_focus\">False</property><property name=\"row_s"
  "pacing\">6</property><property name=\"column_spacing\">12</property><ch"
  "ild><object class=\"GtkLabel\" id=\"replace-playlist-label\"><property "
  "name=\"visible\">True</property><property name=\"can_focus\">False</pro"
  "perty><property name=\"hexpand\">True</property><property name=\"xalign"
  "\">0</property><property name=\"label\" translatable=\"yes\">Always rep"
  "lace playlist with opened files</property></object><packing><property n"
  "ame=\"left_attach\">0</property><property name=\"top_attach\">0</proper"
  "ty><property name=\"width\">1</property><property name=\"height\">1</pr"
  "operty></packing></child><child><object class=\"GtkLabel\" id=\"remove-"
  "duplicated-label\"><property name=\"visible\">True</property><property "
  "name=\"can_focus\">False</property><property name=\"xalign\">0</propert"
  "y><property name=\"label\" translatable=\"yes\">Check and remove duplic"
  "ate media entries</property></object><packing><property name=\"left_att"
  "ach\">0</property><property name=\"top_attach\">1</property><property n"
  "ame=\"width\">1</property><property name=\"height\">1</property></packi"
  "ng></child><child><object class=\"GtkLabel\" id=\"start-playing-opened-"
  "label\"><property name=\"visible\">True</property><property name=\"can_"
  "focus\">False</property><property name=\"xalign\">0</property><property"
  " name=\"label\" translatable=\"yes\">Start playing opened files</proper"
  "ty></object><packing><property name=\"left_attach\">0</property><proper"
  "ty name=\"top_attach\">2</property><property name=\"width\">1</property"
  "><property name=\"height\">1</property></packing></child><child><object"
  " class=\"GtkLabel\" id=\"remember-playlist-label\"><property name=\"vis"
  "ible\">True</property><property name=\"can_focus\">False</property><pro"
  "perty name=\"xalign\">0</property><property name=\"label\" translatable"
  "=\"yes\">Remember playlist</property></object><packing><property name=\""
  "left_attach\">0</property><property name=\"top_attach\">3</property><pr"
  "operty name=\"width\">1</property><property name=\"height\">1</property"
  "></packing></child><child><object class=\"GtkSwitch\" id=\"replace-play"
  "list\"><property name=\"visible\">True</property><property name=\"can_f"
  "ocus\">True</property></object><packing><property name=\"left_attach\">"
  "1</property><property name=\"top_attach\">0</property><property name=\""
  "width\">1</property><property name=\"height\">1</property></packing></c"
  "hild><child><object class=\"GtkSwitch\" id=\"remove-duplicated\"><prope"
  "rty name=\"visible\">True</property><property name=\"can_focus\">True</"
  "property></object><packing><property name=\"left_attach\">1</property><"
  "property name=\"top_attach\">1</property><property name=\"width\">1</pr"
  "operty><property name=\"height\">1</property></packing></child><child><"
  "object class=\"GtkSwitch\" id=\"start-playing-opened\"><property name=\""
  "visible\">True</property><property name=\"can_focus\">True</property></"
  "object><packing><property name=\"left_attach\">1</property><property na"
  "me=\"top_attach\">2</property><property name=\"width\">1</property><pro"
  "perty name=\"height\">1</property></packing></child><child><object clas"
  "s=\"GtkSwitch\" id=\"remember-playlist\"><property name=\"visible\">Tru"
  "e</property><property name=\"can_focus\">True</property></object><packi"
  "ng><property name=\"left_attach\">1</property><property name=\"top_atta"
  "ch\">3</property><property name=\"width\">1</property><property name=\""
  "height\">1</property></packing></child></object></child></object></chil"
  "d><child type=\"label\"><object class=\"GtkLabel\" id=\"label16\"><prop"
  "erty name=\"visible\">True</property><property name=\"can_focus\">False"
  "</property><property name=\"label\" translatable=\"yes\">&lt;b&gt;Playl"
  "ist Settings&lt;/b&gt;</property><property name=\"use_markup\">True</pr"
  "operty></object></child></object><packing><property name=\"position\">2"
  "</property></packing></child><child type=\"tab\"><object class=\"GtkLab"
  "el\" id=\"label3\"><property name=\"visible\">True</property><property "
  "name=\"can_focus\">False</property><property name=\"label\" translatabl"
  "e=\"yes\">Playlist</property></object><packing><property name=\"positio"
  "n\">2</property><property name=\"tab_fill\">False</property></packing><"
  "/child><child><object class=\"GtkFrame\" id=\"frame6\"><property name=\""
  "visible\">True</property><property name=\"can_focus\">False</property><"
  "property name=\"margin_left\">12</property><property name=\"margin_righ"
  "t\">24</property><property name=\"margin_top\">12</property><property n"
  "ame=\"margin_bottom\">12</property><property name=\"label_xalign\">0</p"
  "roperty><property name=\"shadow_type\">none</property><child><object cl"
  "ass=\"GtkAlignment\" id=\"alignment6\"><property name=\"visible\">True<"
  "/property><property name=\"can_focus\">False</property><property name=\""
  "margin_left\">12</property><property name=\"margin_top\">6</property><c"
  "hild><object class=\"GtkBox\" id=\"box6\"><property name=\"visible\">Tr"
  "ue</property><property name=\"can_focus\">False</property><property nam"
  "e=\"orientation\">vertical</property><property name=\"spacing\">6</prop"
  "erty><child><object class=\"GtkBox\" id=\"box5\"><property name=\"visib"
  "le\">True</property><property name=\"can_focus\">False</property><prope"
  "rty name=\"margin_bottom\">6</property><property name=\"spacing\">12</p"
  "roperty><child><object class=\"GtkLabel\" id=\"enable-subtitle-label\">"
  "<property name=\"visible\">True</property><property name=\"can_focus\">"
  "False</property><property name=\"xalign\">0</property><property name=\""
  "label\" translatable=\"yes\">Automatically show subtitles when playing "
  "movie file</property></object><packing><property name=\"expand\">True</"
  "property><property name=\"fill\">True</property><property name=\"positi"
  "on\">0</property></packing></child><child><object class=\"GtkSwitch\" i"
  "d=\"enable-subtitle\"><property name=\"visible\">True</property><proper"
  "ty name=\"can_focus\">True</property></object><packing><property name=\""
  "expand\">False</property><property name=\"fill\">True</property><proper"
  "ty name=\"position\">1</property></packing></child></object><packing><p"
  "roperty name=\"expand\">False</property><property name=\"fill\">True</p"
  "roperty><property name=\"position\">0</property></packing></child><chil"
  "d><object class=\"GtkGrid\" id=\"grid2\"><property name=\"visible\">Tru"
  "e</property><property name=\"can_focus\">False</property><property name"
  "=\"row_spacing\">6</property><property name=\"column_spacing\">6</prope"
  "rty><property name=\"row_homogeneous\">True</property><child><object cl"
  "ass=\"GtkLabel\" id=\"label14\"><property name=\"visible\">True</proper"
  "ty><property name=\"can_focus\">False</property><property name=\"xalign"
  "\">0</property><property name=\"label\" translatable=\"yes\">Font:</pro"
  "perty></object><packing><property name=\"left_attach\">0</property><pro"
  "perty name=\"top_attach\">0</property><property name=\"width\">1</prope"
  "rty><property name=\"height\">1</property></packing></child><child><obj"
  "ect class=\"GtkLabel\" id=\"label17\"><property name=\"visible\">True</"
  "property><property name=\"can_focus\">False</property><property name=\""
  "xalign\">0</property><property name=\"label\" translatable=\"yes\">Enco"
  "ding:</property></object><packing><property name=\"left_attach\">0</pro"
  "perty><property name=\"top_attach\">1</property><property name=\"width\""
  ">1</property><property name=\"height\">1</property></packing></child><c"
  "hild><object class=\"GtkFontButton\" id=\"fontbutton\"><property name=\""
  "visible\">True</property><property name=\"can_focus\">True</property><p"
  "roperty name=\"receives_default\">True</property><property name=\"hexpa"
  "nd\">True</property><property name=\"font\">Sans 12</property><property"
  " name=\"show_preview_entry\">False</property><property name=\"use_font\""
  ">True</property><signal name=\"font-set\" handler=\"parole_conf_dialog_"
  "font_set_cb\" swapped=\"no\"/></object><packing><property name=\"left_a"
  "ttach\">1</property><property name=\"top_attach\">0</property><property"
  " name=\"width\">1</property><property name=\"height\">1</property></pac"
  "king></child><child><object class=\"GtkComboBox\" id=\"encoding\"><prop"
  "erty name=\"visible\">True</property><property name=\"can_focus\">True<"
  "/property><signal name=\"changed\" handler=\"parole_conf_dialog_subtitl"
  "e_encoding_changed_cb\" swapped=\"no\"/></object><packing><property nam"
  "e=\"left_attach\">1</property><property name=\"top_attach\">1</property"
  "><property name=\"width\">1</property><property name=\"height\">1</prop"
  "erty></packing></child></object><packing><property name=\"expand\">Fals"
  "e</property><property name=\"fill\">True</property><property name=\"pos"
  "ition\">1</property></packing></child></object></child></object></child"
  "><child type=\"label\"><object class=\"GtkLabel\" id=\"label13\"><prope"
  "rty name=\"visible\">True</property><property name=\"can_focus\">False<"
  "/property><property name=\"label\" translatable=\"yes\">&lt;b&gt;Subtit"
  "le Settings&lt;/b&gt;</property><property name=\"use_markup\">True</pro"
  "perty></object></child></object><packing><property name=\"position\">3<"
  "/property></packing></child><child type=\"tab\"><object class=\"GtkLabe"
  "l\" id=\"label4\"><property name=\"visible\">True</property><property n"
  "ame=\"can_focus\">False</property><property name=\"label\" translatable"
  "=\"yes\">Subtitles</property></object><packing><property name=\"positio"
  "n\">3</property><property name=\"tab_fill\">False</property></packing><"
  "/child></object><packing><property name=\"expand\">True</property><prop"
  "erty name=\"fill\">True</property><property name=\"position\">1</proper"
  "ty></packing></child></object></child><action-widgets><action-widget re"
  "sponse=\"-7\">close</action-widget></action-widgets></object></interfac"
  "e>"
};

static const unsigned parole_settings_ui_length = 30346u;

