/* automatically generated from mediachooser.ui */
#ifdef __SUNPRO_C
#pragma align 4 (mediachooser_ui)
#endif
#ifdef __GNUC__
static const char mediachooser_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char mediachooser_ui[] =
#endif
{
  "<?xml version=\"1.0\" encoding=\"UTF-8\"?><interface><requires lib=\"gt"
  "k+\" version=\"3.2\"/><object class=\"GtkDialog\" id=\"chooser\"><prope"
  "rty name=\"can_focus\">False</property><property name=\"border_width\">"
  "5</property><property name=\"title\" translatable=\"yes\">Open Media Fi"
  "les</property><property name=\"modal\">True</property><property name=\""
  "default_width\">640</property><property name=\"default_height\">480</pr"
  "operty><property name=\"icon_name\">parole</property><property name=\"t"
  "ype_hint\">dialog</property><signal name=\"destroy\" handler=\"parole_m"
  "edia_chooser_destroy_cb\" swapped=\"no\"/><child internal-child=\"vbox\""
  "><object class=\"GtkBox\" id=\"dialog-vbox1\"><property name=\"can_focu"
  "s\">False</property><property name=\"orientation\">vertical</property><"
  "property name=\"spacing\">2</property><child internal-child=\"action_ar"
  "ea\"><object class=\"GtkButtonBox\" id=\"dialog-action_area1\"><propert"
  "y name=\"can_focus\">False</property><property name=\"layout_style\">en"
  "d</property><child><object class=\"GtkSpinner\" id=\"spinner\"><propert"
  "y name=\"can_focus\">False</property><property name=\"no_show_all\">Tru"
  "e</property><property name=\"active\">True</property></object><packing>"
  "<property name=\"expand\">False</property><property name=\"fill\">True<"
  "/property><property name=\"position\">0</property><property name=\"seco"
  "ndary\">True</property><property name=\"non_homogeneous\">True</propert"
  "y></packing></child><child><object class=\"GtkButton\" id=\"close\"><pr"
  "operty name=\"label\">gtk-cancel</property><property name=\"visible\">T"
  "rue</property><property name=\"can_focus\">True</property><property nam"
  "e=\"receives_default\">True</property><property name=\"use_stock\">True"
  "</property><signal name=\"clicked\" handler=\"parole_media_chooser_clos"
  "e_clicked\" swapped=\"no\"/></object><packing><property name=\"expand\""
  ">False</property><property name=\"fill\">True</property><property name="
  "\"position\">1</property></packing></child><child><object class=\"GtkBu"
  "tton\" id=\"open\"><property name=\"label\">gtk-open</property><propert"
  "y name=\"visible\">True</property><property name=\"can_focus\">True</pr"
  "operty><property name=\"can_default\">True</property><property name=\"h"
  "as_default\">True</property><property name=\"receives_default\">True</p"
  "roperty><property name=\"use_stock\">True</property><signal name=\"clic"
  "ked\" handler=\"parole_media_chooser_add_clicked\" swapped=\"no\"/></ob"
  "ject><packing><property name=\"expand\">False</property><property name="
  "\"fill\">True</property><property name=\"position\">2</property></packi"
  "ng></child></object><packing><property name=\"expand\">False</property>"
  "<property name=\"fill\">True</property><property name=\"pack_type\">end"
  "</property><property name=\"position\">0</property></packing></child><c"
  "hild><object class=\"GtkFileChooserWidget\" id=\"filechooserwidget\"><p"
  "roperty name=\"visible\">True</property><property name=\"can_focus\">Fa"
  "lse</property><property name=\"border_width\">5</property><signal name="
  "\"current-folder-changed\" handler=\"media_chooser_folder_changed_cb\" "
  "swapped=\"no\"/><signal name=\"file-activated\" handler=\"media_chooser"
  "_file_activate_cb\" swapped=\"no\"/></object><packing><property name=\""
  "expand\">True</property><property name=\"fill\">True</property><propert"
  "y name=\"position\">1</property></packing></child></object></child><act"
  "ion-widgets><action-widget response=\"0\">close</action-widget><action-"
  "widget response=\"0\">open</action-widget></action-widgets></object></i"
  "nterface>"
};

static const unsigned mediachooser_ui_length = 3315u;

