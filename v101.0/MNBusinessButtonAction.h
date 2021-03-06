/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, MNBusinessButtonAttribution, NSDate;

@interface MNBusinessButtonAction : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSURL* _url_nativeURL;
	NSURL* _url_webURL;
	NSString* _url_actionID;
	NSString* _url_threadID;
	double _url_displayHeightRatioForUrl;
	MNBusinessButtonAttribution* _url_attribution;
	NSString* _postback_actionID;
	NSString* _postback_messageText;
	BOOL _postback_isMutable;
	BOOL _postback_invalidatePageInfoOnMutationCompletion;
	NSString* _postback_pageID;
	NSString* _postback_pageName;
	NSString* _accountLink_actionID;
	NSString* _accountLink_actionURLString;
	NSString* _share_actionID;
	NSString* _legacyRideSharing_targetID;
	NSString* _manageMessages_pageID;
	NSString* _payment_paymentModuleConfiguration;
	NSString* _subscriptionPreselect_pageID;
	NSDate* _createEventReminder_date;
	NSDate* _createAppointment_date;
	NSString* _createAppointment_pageID;
	NSString* _createAppointment_otherparticipantID;

}
+(id)createEventReminderWithDate:(id)arg1 ;
+(id)createAppointmentWithDate:(id)arg1 pageID:(id)arg2 otherparticipantID:(id)arg3 ;
+(id)urlWithNativeURL:(id)arg1 webURL:(id)arg2 actionID:(id)arg3 threadID:(id)arg4 displayHeightRatioForUrl:(double)arg5 attribution:(id)arg6 ;
+(id)legacyRideSharingWithTargetID:(id)arg1 ;
+(id)postbackWithActionID:(id)arg1 messageText:(id)arg2 isMutable:(BOOL)arg3 invalidatePageInfoOnMutationCompletion:(BOOL)arg4 pageID:(id)arg5 pageName:(id)arg6 ;
+(id)accountLinkWithActionID:(id)arg1 actionURLString:(id)arg2 ;
+(id)shareWithActionID:(id)arg1 ;
+(id)manageMessagesWithPageID:(id)arg1 ;
+(id)facebookReportAProblem;
+(id)paymentWithPaymentModuleConfiguration:(id)arg1 ;
+(id)subscriptionPreselectWithPageID:(id)arg1 ;
-(void)matchUrl:(/*^block*/id)arg1 postback:(/*^block*/id)arg2 accountLink:(/*^block*/id)arg3 share:(/*^block*/id)arg4 legacyRideSharing:(/*^block*/id)arg5 manageMessages:(/*^block*/id)arg6 facebookReportAProblem:(/*^block*/id)arg7 payment:(/*^block*/id)arg8 subscriptionPreselect:(/*^block*/id)arg9 createEventReminder:(/*^block*/id)arg10 createAppointment:(/*^block*/id)arg11 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

