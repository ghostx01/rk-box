


#include "parole-enum-types.h"

#include "parole-stream.h"

#include "parole-provider-player.h"

#include "parole-pl-parser.h"


/* enumerations from "parole-stream.h" */
GType
parole_media_type_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { PAROLE_MEDIA_TYPE_UNKNOWN, "PAROLE_MEDIA_TYPE_UNKNOWN", "unknown" },
      { PAROLE_MEDIA_TYPE_LOCAL_FILE, "PAROLE_MEDIA_TYPE_LOCAL_FILE", "local-file" },
      { PAROLE_MEDIA_TYPE_CDDA, "PAROLE_MEDIA_TYPE_CDDA", "cdda" },
      { PAROLE_MEDIA_TYPE_VCD, "PAROLE_MEDIA_TYPE_VCD", "vcd" },
      { PAROLE_MEDIA_TYPE_SVCD, "PAROLE_MEDIA_TYPE_SVCD", "svcd" },
      { PAROLE_MEDIA_TYPE_DVD, "PAROLE_MEDIA_TYPE_DVD", "dvd" },
      { PAROLE_MEDIA_TYPE_DVB, "PAROLE_MEDIA_TYPE_DVB", "dvb" },
      { PAROLE_MEDIA_TYPE_REMOTE, "PAROLE_MEDIA_TYPE_REMOTE", "remote" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("ParoleMediaType", values);
  }
  return etype;
}
GType
parole_state_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { PAROLE_STATE_STOPPED, "PAROLE_STATE_STOPPED", "stopped" },
      { PAROLE_STATE_PLAYBACK_FINISHED, "PAROLE_STATE_PLAYBACK_FINISHED", "playback-finished" },
      { PAROLE_STATE_ABOUT_TO_FINISH, "PAROLE_STATE_ABOUT_TO_FINISH", "about-to-finish" },
      { PAROLE_STATE_PAUSED, "PAROLE_STATE_PAUSED", "paused" },
      { PAROLE_STATE_PLAYING, "PAROLE_STATE_PLAYING", "playing" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("ParoleState", values);
  }
  return etype;
}

/* enumerations from "parole-provider-player.h" */
GType
parole_plugin_container_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { PAROLE_PLUGIN_CONTAINER_PLAYLIST, "PAROLE_PLUGIN_CONTAINER_PLAYLIST", "playlist" },
      { PAROLE_PLUGIN_CONTAINER_MAIN_VIEW, "PAROLE_PLUGIN_CONTAINER_MAIN_VIEW", "main-view" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("ParolePluginContainer", values);
  }
  return etype;
}

/* enumerations from "parole-pl-parser.h" */
GType
parole_pl_format_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { PAROLE_PL_FORMAT_UNKNOWN, "PAROLE_PL_FORMAT_UNKNOWN", "unknown" },
      { PAROLE_PL_FORMAT_M3U, "PAROLE_PL_FORMAT_M3U", "m3u" },
      { PAROLE_PL_FORMAT_PLS, "PAROLE_PL_FORMAT_PLS", "pls" },
      { PAROLE_PL_FORMAT_ASX, "PAROLE_PL_FORMAT_ASX", "asx" },
      { PAROLE_PL_FORMAT_XSPF, "PAROLE_PL_FORMAT_XSPF", "xspf" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("ParolePlFormat", values);
  }
  return etype;
}



