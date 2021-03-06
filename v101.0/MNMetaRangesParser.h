/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNMetaRangesParsing.h>

@class MNMetaRangesParserInjector, MNMetaRangesMessage, NSString;

@interface MNMetaRangesParser : NSObject <FBClassInjectable, MNMetaRangesParsing> {

	MNMetaRangesParserInjector* _injector;
	MNMetaRangesMessage* _lastMessageWithReminderCTA;
	MNMetaRangesMessage* _lastMessageWithAppointmentCTA;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)_logTriggeredMetaRangesWithMessage:(id)arg1 ;
-(BOOL)_canShowCTAFromMetaRange:(id)arg1 threadViewModel:(id)arg2 message:(id)arg3 ;
-(id)_rideAttachmentViewModelFromMessage:(id)arg1 providerName:(id)arg2 toLocation:(id)arg3 ;
-(id)_peerToPeerPaymentAttachmentViewModelFromMessage:(id)arg1 threadSummary:(id)arg2 amountInHundredths:(id)arg3 currencyCode:(id)arg4 peerToPeerIntentType:(id)arg5 ;
-(id)_eventReminderAttachmentViewModelFromMessage:(id)arg1 threadSummary:(id)arg2 timestamp:(id)arg3 ;
-(id)_createAppointmentAttachmentViewModelFromMessage:(id)arg1 threadViewModel:(id)arg2 timestamp:(id)arg3 ;
-(BOOL)_canShowCTAForPageFromMetaRange:(id)arg1 threadViewModel:(id)arg2 message:(id)arg3 ;
-(BOOL)_shouldRateLimitEventReminderCTAWithThreadViewModel:(id)arg1 message:(id)arg2 ;
-(BOOL)_shouldRateLimitAppointmentCTAWithThreadViewModel:(id)arg1 message:(id)arg2 ;
-(id)attachmentViewModelFromMessageWithMetaRanges:(id)arg1 threadViewModel:(id)arg2 ;
@end

