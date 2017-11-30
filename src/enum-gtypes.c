


#include "enum-gtypes.h"

#include "parole-conf.h"

#include "parole-button.h"


/* enumerations from "parole-button.h" */
GType
parole_button_key_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { PAROLE_KEY_UNKNOWN, "PAROLE_KEY_UNKNOWN", "unknown" },
      { PAROLE_KEY_AUDIO_PLAY, "PAROLE_KEY_AUDIO_PLAY", "audio-play" },
      { PAROLE_KEY_AUDIO_STOP, "PAROLE_KEY_AUDIO_STOP", "audio-stop" },
      { PAROLE_KEY_AUDIO_PREV, "PAROLE_KEY_AUDIO_PREV", "audio-prev" },
      { PAROLE_KEY_AUDIO_NEXT, "PAROLE_KEY_AUDIO_NEXT", "audio-next" },
      { PAROLE_KEY_NUMBERS, "PAROLE_KEY_NUMBERS", "numbers" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("ParoleButtonKey", values);
  }
  return etype;
}



