/* Copyright 2022 the SumatraPDF project authors (see AUTHORS file).
   License: GPLv3 */

#define SZ_PDF_FILTER_CLSID L"{55808EA8-81FE-43c6-AAE8-1D8149F941D3}"
#define SZ_PDF_FILTER_HANDLER L"{26CA6565-F22A-4f5e-B688-0AD051D56E96}"

#define SZ_TEX_FILTER_CLSID L"{AF57F784-ED93-4f2c-8C1D-CCDCB6E27CA6}"
#define SZ_TEX_FILTER_HANDLER L"{3FAB27F8-08EC-4b9e-9EEE-181A6E846B8D}"

#define SZ_EPUB_FILTER_CLSID L"{FE4C7847-4260-43e3-A449-08ED76009F94}"
#define SZ_EPUB_FILTER_HANDLER L"{FF68D1A0-DA54-4fbf-A406-06CFDB764CA9}"

bool InstallSearchFiler(const WCHAR* dllPath, bool allUsers);
bool UninstallSearchFilter();
bool IsSearchFilterInstalled();