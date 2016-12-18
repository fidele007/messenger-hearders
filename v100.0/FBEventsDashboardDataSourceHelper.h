/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBEventsDashboardDataSourceHelper : NSObject
+(id)getThisWeeksEventsFromEvents:(id)arg1 ;
+(id)getFineGrainGroupsForThisWeekEvents:(id)arg1 ;
+(id)formatSectionTitleString:(id)arg1 ;
+(id)getNextWeeksEventsFromEvents:(id)arg1 ;
+(id)getEventsInCurrentMonth:(id)arg1 ;
+(id)getLaterThisMonthSectionTitle;
+(id)getEventsGroupedByMonth:(id)arg1 ;
+(id)granularWeekSectionTitleForDate:(id)arg1 ;
+(id)getEventsFallingWithinWeekOffset:(long long)arg1 events:(id)arg2 ;
+(id)monthSectionTitleForDate:(id)arg1 ;
+(id)getStandardSectionHeaderWithTitle:(id)arg1 ;
+(id)getEventsGroupedByWeek:(id)arg1 fineGrainThisWeek:(BOOL)arg2 ;
+(id)getTopLevelHeaderFont;
+(id)getCellSeperatorColor;
+(id)uppercaseFirstLetterInString:(id)arg1 ;
@end

