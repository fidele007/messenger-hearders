/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBEventsDateStringFactory : NSObject
+(id)XMAStringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3 ;
+(id)todayTomorrowSpecificDateString:(id)arg1 includeTime:(BOOL)arg2 ;
+(BOOL)isTodayWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(BOOL)isMultiDayEventWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3 ;
+(id)multiDayEventDateStringWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)todayDateStringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3 ;
+(BOOL)isTomorrowWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)tomorrowDateStringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3 ;
+(BOOL)isThisWeekWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)thisWeekDateStringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3 ;
+(BOOL)isAfterThisWeekWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)afterThisWeekDateStringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3 ;
+(id)dateStringNotRelativeWithDateFormat:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 isAllDay:(BOOL)arg4 ;
+(id)timeStringForDateWithTruncation:(id)arg1 ;
+(id)endOfWeekForDate:(id)arg1 ;
+(id)timeStringForDate:(id)arg1 ;
+(id)shortDateStringWithDate:(id)arg1 ;
+(id)longDateStringWithDate:(id)arg1 ;
+(id)stringWithDate:(id)arg1 ;
+(id)stringWithoutTimeWithDate:(id)arg1 ;
+(id)stringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3 ;
+(id)messengerContextBannerStringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3 ;
@end

