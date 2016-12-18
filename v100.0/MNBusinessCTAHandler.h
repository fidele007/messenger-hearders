/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNBusinessCTAHandling.h>

@class FBUserSession, MNBusinessCTALogger, MNBusinessCTALegacyRideSharingHandler, MNBusinessCTAPostbackHandler, MNBusinessCTAURLHandler, MNBusinessCTAAccountLinkHandler, MNBusinessCTAShareHandler, MNBusinessCTAManageMessagesHandler, MNBusinessCTAReportAProblemHandler, MNBusinessCTAPaymentHandler, MNEventsReminderActionHandler, MNAdsImpressionLogger, MNPageSubscriptionLogger, MNInstantArticleLogger, NSString;

@interface MNBusinessCTAHandler : NSObject <FBViewerContextClassProvidable, MNBusinessCTAHandling> {

	FBUserSession* _session;
	MNBusinessCTALogger* _ctaLogger;
	MNBusinessCTALegacyRideSharingHandler* _legacyRideSharingHandler;
	MNBusinessCTAPostbackHandler* _postbackHandler;
	MNBusinessCTAURLHandler* _urlHandler;
	MNBusinessCTAAccountLinkHandler* _accountLinkHandler;
	MNBusinessCTAShareHandler* _shareHandler;
	MNBusinessCTAManageMessagesHandler* _manageMessagesHandler;
	MNBusinessCTAReportAProblemHandler* _reportAProblemHandler;
	MNBusinessCTAPaymentHandler* _paymentHandler;
	MNEventsReminderActionHandler* _eventsReminderActionHandler;
	MNAdsImpressionLogger* _adsImpressionLogger;
	MNPageSubscriptionLogger* _pageSubscriptionLogger;
	MNInstantArticleLogger* _instantArticleLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)handleButtonAction:(id)arg1 loggingData:(id)arg2 confirmation:(id)arg3 ;
-(void)buttonViewWasClicked:(id)arg1 ;
-(void)_handleButtonAction:(id)arg1 loggingData:(id)arg2 optionalButtonView:(id)arg3 confirmation:(id)arg4 ;
-(void)_handleButtonAction:(id)arg1 loggingData:(id)arg2 optionalButtonView:(id)arg3 ;
@end

