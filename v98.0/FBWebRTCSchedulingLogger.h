/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBEventAnalyticTracker, NSDictionary;

@interface FBWebRTCSchedulingLogger : NSObject {

	FBEventAnalyticTracker* _tracker;
	NSDictionary* _extraData;

}

@property (nonatomic,readonly) FBEventAnalyticTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
+(id)defaultExtraDataWithConfigManager:(id)arg1 ;
+(id)loggerForMessagingXMAWithExtraData:(id)arg1 ;
+(id)loggerForCallLogWithExtraData:(id)arg1 ;
-(void)logScheduleCallFromMessagingItemClicked;
-(id)newLoggerByAppendingMessagingActionSheet;
-(void)logQuickActionSheetOneHourClicked;
-(void)logQuickActionSheetCustomDateClicked;
-(void)logQuickActionSheetCanceled;
-(void)logCallTabPromoItemClicked;
-(void)logCallTabPromoBarItemClicked;
-(void)logEventExistCannotCreateCallScheduleMessageView;
-(id)newLoggerByAppendingUpdateAlert;
-(FBEventAnalyticTracker *)tracker;
-(id)getExtraDataWithConversationSize:(long long)arg1 reminderName:(id)arg2 reminderDate:(id)arg3 ;
-(id)newLoggerByAppendingNewSchedule;
-(void)logCancelReminderCreation;
-(id)initWithTracker:(id)arg1 extraData:(id)arg2 ;
-(void)_logForAction:(id)arg1 ;
@end
