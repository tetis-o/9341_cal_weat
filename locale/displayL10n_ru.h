#ifndef dsp_full_loc
#define dsp_full_loc
#include <pgmspace.h>
/*************************************************************************************
    HOWTO:
    Copy this file to yoRadio/locale/displayL10n_custom.h
    and modify it
*************************************************************************************/
const char mon[] PROGMEM = "Понедел.";
const char tue[] PROGMEM = "Вторник";
const char wed[] PROGMEM = "Среда";
const char thu[] PROGMEM = "Четверг";
const char fri[] PROGMEM = "Пятница";
const char sat[] PROGMEM = "Суббота";
const char sun[] PROGMEM = "Воскрес.";

const char monf[] PROGMEM = "Понедельник";
const char tuef[] PROGMEM = "Вторник";
const char wedf[] PROGMEM = "Среда";
const char thuf[] PROGMEM = "Четверг";
const char frif[] PROGMEM = "Пятница";
const char satf[] PROGMEM = "Суббота";
const char sunf[] PROGMEM = "Воскресенье";

const char jan[] PROGMEM = "январь";
const char feb[] PROGMEM = "февраль";
const char mar[] PROGMEM = "март";
const char apr[] PROGMEM = "апрель";
const char may[] PROGMEM = "май";
const char jun[] PROGMEM = "июнь";
const char jul[] PROGMEM = "июль";
const char aug[] PROGMEM = "август";
const char sep[] PROGMEM = "сентябрь";
const char octt[] PROGMEM = "октябрь";
const char nov[] PROGMEM = "ноябрь";
const char decc[] PROGMEM = "декабрь";

const char wn_N[]      PROGMEM = "СЕВ";
const char wn_NNE[]    PROGMEM = "ССВ";
const char wn_NE[]     PROGMEM = "СВ";
const char wn_ENE[]    PROGMEM = "ВСВ";
const char wn_E[]      PROGMEM = "ВОСТ";
const char wn_ESE[]    PROGMEM = "ВЮВ";
const char wn_SE[]     PROGMEM = "ЮВ";
const char wn_SSE[]    PROGMEM = "ЮЮВ";
const char wn_S[]      PROGMEM = "ЮЖ";
const char wn_SSW[]    PROGMEM = "ЮЮЗ";
const char wn_SW[]     PROGMEM = "ЮЗ";
const char wn_WSW[]    PROGMEM = "ЗЮЗ";
const char wn_W[]      PROGMEM = "ЗАП";
const char wn_WNW[]    PROGMEM = "ЗСЗ";
const char wn_NW[]     PROGMEM = "СЗ";
const char wn_NNW[]    PROGMEM = "ССЗ";

const char* const dow[]     PROGMEM = { sun, mon, tue, wed, thu, fri, sat };
const char* const dowf[]    PROGMEM = { sunf, monf, tuef, wedf, thuf, frif, satf };
const char* const mnths[]   PROGMEM = { jan, feb, mar, apr, may, jun, jul, aug, sep, octt, nov, decc };
const char* const wind[]    PROGMEM = { wn_N, wn_NNE, wn_NE, wn_ENE, wn_E, wn_ESE, wn_SE, wn_SSE, wn_S, wn_SSW, wn_SW, wn_WSW, wn_W, wn_WNW, wn_NW, wn_NNW, wn_N };

const char    const_PlReady[]    PROGMEM = "[готов]";
const char  const_PlStopped[]    PROGMEM = "[остановлено]";
const char  const_PlConnect[]    PROGMEM = "[соединение]";
const char  const_DlgVolume[]    PROGMEM = "ГРОМКОСТЬ";
const char    const_DlgLost[]    PROGMEM = "ОТКЛЮЧЕНО";
const char  const_DlgUpdate[]    PROGMEM = "ОБНОВЛЕНИЕ";
const char const_DlgNextion[]    PROGMEM = "NEXTION";
const char const_getWeather[]    PROGMEM = "";
const char  const_waitForSD[]    PROGMEM = "ИНДЕКС SD";

const char        apNameTxt[]    PROGMEM = "ТОЧКА ДОСТУПА";
const char        apPassTxt[]    PROGMEM = "ПАРОЛЬ";
const char       bootstrFmt[]    PROGMEM = "Соединяюсь с %s";
const char        apSettFmt[]    PROGMEM = "НАСТРОЙКИ: HTTP://%s/";
#if EXT_WEATHER
const char       weatherFmt[]    PROGMEM = "%s, %.1f\011C \007 ощущается: %.1f\011C \007 давление: %d hPa \007 влажность: %d%% \007 ветер: %.1f м/с [%s] << м. ст.%s >>";
#else
const char       weatherFmt[]    PROGMEM = "%s, %.1f\011C \007 давление: %d mm \007 влажность: %d%%";
#endif
const char     weatherUnits[]    PROGMEM = "metric";   /* standard, metric, imperial */
const char      weatherLang[]    PROGMEM = "ru";       /* https://openweathermap.org/current#multi */

#endif
