
#ifndef ___gmarshal_MARSHAL_H__
#define ___gmarshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* VOID:STRING,STRING (gmarshal.list:1) */
extern void _gmarshal_VOID__STRING_STRING (GClosure     *closure,
                                           GValue       *return_value,
                                           guint         n_param_values,
                                           const GValue *param_values,
                                           gpointer      invocation_hint,
                                           gpointer      marshal_data);

/* VOID:BOOL,BOOL,POINTER (gmarshal.list:2) */
extern void _gmarshal_VOID__BOOLEAN_BOOLEAN_POINTER (GClosure     *closure,
                                                     GValue       *return_value,
                                                     guint         n_param_values,
                                                     const GValue *param_values,
                                                     gpointer      invocation_hint,
                                                     gpointer      marshal_data);
#define _gmarshal_VOID__BOOL_BOOL_POINTER	_gmarshal_VOID__BOOLEAN_BOOLEAN_POINTER

G_END_DECLS

#endif /* ___gmarshal_MARSHAL_H__ */

