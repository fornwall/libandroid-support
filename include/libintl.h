#ifndef NDK_ANDROID_SUPPORT_LIBINTL_H
#define NDK_ANDROID_SUPPORT_LIBINTL_H

#ifdef __cplusplus
extern "C" {
#endif

/* Look up MSGID in the current default message catalog for the current LC_MESSAGES locale.  If not found, returns MSGID itself (the default text).  */
char *gettext (const char *__msgid);

/* Look up MSGID in the DOMAINNAME message catalog for the current LC_MESSAGES locale.  */
char *dgettext (const char *__domainname, const char *__msgid);

/* Look up MSGID in the DOMAINNAME message catalog for the current CATEGORY locale.  */
char *dcgettext (const char *__domainname, const char *__msgid, int __category);

/* Similar to `gettext' but select the plural form corresponding to the number N.  */
char *ngettext (const char *__msgid1, const char *__msgid2, unsigned long int __n);

/* Similar to `dgettext' but select the plural form corresponding to the number N.  */
char *dngettext (const char *__domainname, const char *__msgid1, const char *__msgid2, unsigned long int __n);

/* Similar to `dcgettext' but select the plural form corresponding to the number N.  */
char *dcngettext (const char *__domainname, const char *__msgid1, const char *__msgid2, unsigned long int __n, int __category);

/* Set the current default message catalog to DOMAINNAME.  If DOMAINNAME is null, return the current default.  If DOMAINNAME is "", reset to the default of "messages".  */
char *textdomain (const char *__domainname);

/* Specify that the DOMAINNAME message catalog will be found in DIRNAME rather than in the system locale data base.  */
char *bindtextdomain (const char *__domainname, const char *__dirname);

/* Specify the character encoding in which the messages from the DOMAINNAME message catalog will be returned.  */
char *bind_textdomain_codeset (const char *__domainname, const char *__codeset);

#endif  // NDK_ANDROID_SUPPORT_LIBINTL_H
