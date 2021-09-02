#ifndef _user_config_h_
#define _user_config_h_

// Стандартный алгоритм БК по умолчанию, иначе выбираем что то ниже:
//#define		WColumn_water   // Подруливание отбора голов водой
//#define		WColumn_power   // Подруливание отбора голов мощностью

// Если нужено плавное повышение мощности при стабилизации колонны
//#define		columnSoftStart
// Стабилизация колонны и отбор голов на пониженной мощности (-10%)
//#define		reducedPower
// Отбор тела до первого старт/стопа
//#define		oneStop
// Если PWM_CH6 (разгонный ТЭН) включен весь процесс ректификации или дистилляции
//#define		Sign_of_Work
// Обновление по HTTP с удаленного сервера
#define		remoteUpd
// Язык интерфейса на TFT дисплее, SD карте и надписей в WEB
#define		language_RUS

// ТЭН
#define		heater			16
// GPIO для I2C
#define		pSDA			4
#define		pSCL			5
// GPIO для DS18B20
#define		DS_Pin			0
// Количество используемых датчиков температуры DS18B20 (максимум 8)
// Не трогать, программа сама определит количество подключенных датчиков
#define		DS_Cnt			8
// Количество выходных линий ШИМ
#define		PWM_Cnt			9
// Количество входных линий АЦП
#define		ADC_Cnt			4
// Соответствие каналов ADC
#define		AN0				0
#define		AN1				1
#define		AN2				2
#define		AN3				3
#define		thresholdAN0	2000
#define		thresholdAN1	5000
#define		thresholdAN2	2000
#define		thresholdAN3	2000
// Используем TFT дисплей или нет
#define		TFT_Display
// ТачСкрин
#define		intTouch		2
// GPIO для TFT
#define		TFT_DC_Lib		15
#define		TFT_CS_Lib		-1
#define		TFT_RES_Lib		-1
// Выбор линий CS для TFT, Touch и SD Card; Buzzer & Out_pwm
#define		TFT_RES_PRG	0
#define		SD_CS		7
#define		TFT_CS		15
#define		TOUCH_CS	12
#define		BUZ_VOL		13
#define		BUZ_OUT		14
#define		SIREN_OUT	1       // Активная пищалка с внутренним генератором
#define		PWM_CH1		11      // Клапан на головы
#define		PWM_CH2		10      // Клапан на тело
#define		PWM_CH3		9       // Клапан на воду
#define		PWM_CH4		8       // Клапан в ПБ
#define		PWM_CH5		2       // Управление 0 - 10 вольт
#define		PWM_CH6		3       // Дополнительная группа на дополнительные ТЭНы
#define		PWM_CH7		4       // ШИМ для х.з. пока чего
#define		PWM_CH8		5       // ШИМ для формирования напряжения + 15 вольт
#define		PWM_CH9		6       // Импульс повышающего напряжения на клапана
// Если клапан нормально закрыты ставим false
// Если клапан нормально открытый ставим true
#define		PWM_CH1_Invert	true
#define		PWM_CH2_Invert	true
#define		PWM_CH3_Invert	true
#define		PWM_CH4_Invert	true
// Дальше 5 строк не трогаем
#define		PWM_CH5_Invert	false
#define		PWM_CH6_Invert	false
#define		PWM_CH7_Invert	false
#define		PWM_CH8_Invert	false
#define		PWM_CH9_Invert	false
// Периодичность вывода температурного графика в секундах на экран
#define		Display_out_temp	15
// Периодичность записи лог.файла на SD
#define		SD_out_temp	10
// Какой используем датчик давления
//#define		Pressure_BMP085
//#define		Pressure_BMP180
#define		Pressure_BMP280
//#define		Pressure_BME280
// Вывод отладочной информации в UART
//#define		Debug_en

#endif
