/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDateFormatter.h>

@class NSCalendar, NSDateFormatter, NSString;

@interface FBAtomicDateFormatter : FBDateFormatter {

	NSCalendar* _calendar;
	NSDateFormatter* _dateFormatter;
	BOOL _printsFutureYearsAsRelative;
	BOOL _printsFutureMonthsAsRelative;
	BOOL _printsFutureWeeksAsRelative;
	BOOL _printsTomorrow;
	BOOL _printsFutureHoursAsRelative;
	BOOL _printsFutureMinutesAsRelative;
	BOOL _printsToday;
	BOOL _printsPastSecondsAsRelative;
	BOOL _printsPastMinutesAsRelative;
	BOOL _printsPastHoursAsRelative;
	BOOL _printsYesterday;
	BOOL _printsPastDaysAsRelative;
	BOOL _printsPastWeeksAsRelative;
	BOOL _printsPastMonthsAsRelative;
	BOOL _printsPastYearsAsRelative;
	NSString* _futureYearsTemplate;
	NSString* _futureDifferentYearTemplate;
	NSString* _futureMonthsTemplate;
	NSString* _futureWeeksTemplate;
	NSString* _futureDaysTemplate;
	NSString* _futureTemplate;
	NSString* _pastDaysTemplate;
	NSString* _pastWeeksTemplate;
	NSString* _pastMonthsTemplate;
	NSString* _pastDifferentYearTemplate;
	NSString* _pastYearsTemplate;
	/*^block*/id _preFormatBlock;
	/*^block*/id _postFormatBlock;
	long long _relativeStringStyle;
	NSString* _defaultTemplate;
	NSString* _defaultString;
	unsigned long long _futureCalendarComponents;
	unsigned long long _pastCalendarComponents;

}

@property (nonatomic,readonly) BOOL printsFutureYearsAsRelative;                         //@synthesize printsFutureYearsAsRelative=_printsFutureYearsAsRelative - In the implementation block
@property (nonatomic,copy,readonly) NSString * futureYearsTemplate;                      //@synthesize futureYearsTemplate=_futureYearsTemplate - In the implementation block
@property (nonatomic,copy,readonly) NSString * futureDifferentYearTemplate;              //@synthesize futureDifferentYearTemplate=_futureDifferentYearTemplate - In the implementation block
@property (nonatomic,readonly) BOOL printsFutureMonthsAsRelative;                        //@synthesize printsFutureMonthsAsRelative=_printsFutureMonthsAsRelative - In the implementation block
@property (nonatomic,copy,readonly) NSString * futureMonthsTemplate;                     //@synthesize futureMonthsTemplate=_futureMonthsTemplate - In the implementation block
@property (nonatomic,readonly) BOOL printsFutureWeeksAsRelative;                         //@synthesize printsFutureWeeksAsRelative=_printsFutureWeeksAsRelative - In the implementation block
@property (nonatomic,copy,readonly) NSString * futureWeeksTemplate;                      //@synthesize futureWeeksTemplate=_futureWeeksTemplate - In the implementation block
@property (nonatomic,copy,readonly) NSString * futureDaysTemplate;                       //@synthesize futureDaysTemplate=_futureDaysTemplate - In the implementation block
@property (nonatomic,readonly) BOOL printsTomorrow;                                      //@synthesize printsTomorrow=_printsTomorrow - In the implementation block
@property (nonatomic,readonly) BOOL printsFutureHoursAsRelative;                         //@synthesize printsFutureHoursAsRelative=_printsFutureHoursAsRelative - In the implementation block
@property (nonatomic,readonly) BOOL printsFutureMinutesAsRelative;                       //@synthesize printsFutureMinutesAsRelative=_printsFutureMinutesAsRelative - In the implementation block
@property (nonatomic,copy,readonly) NSString * futureTemplate;                           //@synthesize futureTemplate=_futureTemplate - In the implementation block
@property (nonatomic,readonly) BOOL printsToday;                                         //@synthesize printsToday=_printsToday - In the implementation block
@property (nonatomic,readonly) BOOL printsPastSecondsAsRelative;                         //@synthesize printsPastSecondsAsRelative=_printsPastSecondsAsRelative - In the implementation block
@property (nonatomic,readonly) BOOL printsPastMinutesAsRelative;                         //@synthesize printsPastMinutesAsRelative=_printsPastMinutesAsRelative - In the implementation block
@property (nonatomic,readonly) BOOL printsPastHoursAsRelative;                           //@synthesize printsPastHoursAsRelative=_printsPastHoursAsRelative - In the implementation block
@property (nonatomic,readonly) BOOL printsYesterday;                                     //@synthesize printsYesterday=_printsYesterday - In the implementation block
@property (nonatomic,copy,readonly) NSString * pastDaysTemplate;                         //@synthesize pastDaysTemplate=_pastDaysTemplate - In the implementation block
@property (nonatomic,readonly) BOOL printsPastDaysAsRelative;                            //@synthesize printsPastDaysAsRelative=_printsPastDaysAsRelative - In the implementation block
@property (nonatomic,copy,readonly) NSString * pastWeeksTemplate;                        //@synthesize pastWeeksTemplate=_pastWeeksTemplate - In the implementation block
@property (nonatomic,readonly) BOOL printsPastWeeksAsRelative;                           //@synthesize printsPastWeeksAsRelative=_printsPastWeeksAsRelative - In the implementation block
@property (nonatomic,copy,readonly) NSString * pastMonthsTemplate;                       //@synthesize pastMonthsTemplate=_pastMonthsTemplate - In the implementation block
@property (nonatomic,readonly) BOOL printsPastMonthsAsRelative;                          //@synthesize printsPastMonthsAsRelative=_printsPastMonthsAsRelative - In the implementation block
@property (nonatomic,copy,readonly) NSString * pastDifferentYearTemplate;                //@synthesize pastDifferentYearTemplate=_pastDifferentYearTemplate - In the implementation block
@property (nonatomic,copy,readonly) NSString * pastYearsTemplate;                        //@synthesize pastYearsTemplate=_pastYearsTemplate - In the implementation block
@property (nonatomic,readonly) BOOL printsPastYearsAsRelative;                           //@synthesize printsPastYearsAsRelative=_printsPastYearsAsRelative - In the implementation block
@property (nonatomic,readonly) id preFormatBlock;                                        //@synthesize preFormatBlock=_preFormatBlock - In the implementation block
@property (nonatomic,readonly) id postFormatBlock;                                       //@synthesize postFormatBlock=_postFormatBlock - In the implementation block
@property (nonatomic,readonly) long long relativeStringStyle;                            //@synthesize relativeStringStyle=_relativeStringStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultTemplate;                          //@synthesize defaultTemplate=_defaultTemplate - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultString;                            //@synthesize defaultString=_defaultString - In the implementation block
@property (nonatomic,readonly) unsigned long long futureCalendarComponents;              //@synthesize futureCalendarComponents=_futureCalendarComponents - In the implementation block
@property (nonatomic,readonly) unsigned long long pastCalendarComponents;                //@synthesize pastCalendarComponents=_pastCalendarComponents - In the implementation block
-(id)formatDate:(id)arg1 relativeToDate:(id)arg2 timeZone:(id)arg3 ;
-(id)initWithBuilder:(id)arg1 ;
-(BOOL)printsFutureYearsAsRelative;
-(NSString *)futureYearsTemplate;
-(NSString *)futureDifferentYearTemplate;
-(BOOL)printsFutureMonthsAsRelative;
-(NSString *)futureMonthsTemplate;
-(BOOL)printsFutureWeeksAsRelative;
-(NSString *)futureWeeksTemplate;
-(NSString *)futureDaysTemplate;
-(BOOL)printsFutureHoursAsRelative;
-(BOOL)printsFutureMinutesAsRelative;
-(NSString *)futureTemplate;
-(BOOL)printsPastSecondsAsRelative;
-(BOOL)printsPastMinutesAsRelative;
-(BOOL)printsPastHoursAsRelative;
-(NSString *)pastDaysTemplate;
-(BOOL)printsPastDaysAsRelative;
-(NSString *)pastWeeksTemplate;
-(BOOL)printsPastWeeksAsRelative;
-(NSString *)pastMonthsTemplate;
-(BOOL)printsPastMonthsAsRelative;
-(NSString *)pastDifferentYearTemplate;
-(NSString *)pastYearsTemplate;
-(BOOL)printsPastYearsAsRelative;
-(BOOL)printsTomorrow;
-(BOOL)printsToday;
-(BOOL)printsYesterday;
-(id)preFormatBlock;
-(id)postFormatBlock;
-(long long)relativeStringStyle;
-(NSString *)defaultTemplate;
-(id)_stringFromDate:(id)arg1 now:(id)arg2 appliedRule:(long long*)arg3 accessible:(BOOL)arg4 timeZone:(id)arg5 ;
-(id)_stringFromDate:(id)arg1 template:(id)arg2 timeZone:(id)arg3 ;
-(unsigned long long)futureCalendarComponents;
-(unsigned long long)pastCalendarComponents;
-(NSString *)defaultString;
-(id)formatDate:(id)arg1 ;
@end

