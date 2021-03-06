/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:45 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, MNBusinessButtonAttribution, NSDate, FBMSyncedThreadKey, NSArray;

@interface MNBusinessButtonAction : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSURL* _url_nativeURL;
	NSURL* _url_webURL;
	NSString* _url_actionID;
	NSString* _url_threadID;
	double _url_displayHeightRatioForUrl;
	BOOL _url_shouldHideWebviewShareButton;
	MNBusinessButtonAttribution* _url_attribution;
	NSString* _postback_actionID;
	NSString* _postback_messageText;
	BOOL _postback_isMutable;
	BOOL _postback_invalidatePageInfoOnMutationCompletion;
	NSString* _postback_pageID;
	NSString* _postback_pageName;
	NSString* _postback_messageID;
	NSString* _accountLink_actionID;
	NSString* _accountLink_actionURLString;
	NSString* _accountLink_messageID;
	NSString* _share_actionID;
	NSString* _share_messageID;
	NSString* _extensibleShare_actionID;
	NSString* _extensibleShare_messageID;
	NSString* _extensibleShare_title;
	NSString* _extensibleShare_subtitle;
	NSString* _extensibleShare_imageUrl;
	NSString* _extensibleShare_targetUrl;
	NSString* _extensibleShare_buttonTitle;
	NSString* _extensibleShare_buttonTarget;
	NSString* _legacyRideSharing_targetID;
	NSString* _manageMessages_pageID;
	NSString* _payment_paymentModuleConfiguration;
	NSString* _payment_messageID;
	NSString* _subscriptionPreselect_pageID;
	NSDate* _createEventReminder_date;
	NSDate* _createAppointment_date;
	NSString* _createAppointment_pageID;
	NSString* _createAppointment_otherparticipantID;
	NSString* _openMiniApp_flowStateObjectId;
	NSString* _openMiniApp_title;
	FBMSyncedThreadKey* _openMiniApp_syncedThreadKey;
	unsigned long long _openMiniApp_actionType;
	NSArray* _nestedCtaNavigation_nestedCTAs;

}
+(id)urlWithNativeURL:(id)arg1 webURL:(id)arg2 actionID:(id)arg3 threadID:(id)arg4 displayHeightRatioForUrl:(double)arg5 shouldHideWebviewShareButton:(BOOL)arg6 attribution:(id)arg7 ;
+(id)createEventReminderWithDate:(id)arg1 ;
+(id)createAppointmentWithDate:(id)arg1 pageID:(id)arg2 otherparticipantID:(id)arg3 ;
+(id)legacyRideSharingWithTargetID:(id)arg1 ;
+(id)postbackWithActionID:(id)arg1 messageText:(id)arg2 isMutable:(BOOL)arg3 invalidatePageInfoOnMutationCompletion:(BOOL)arg4 pageID:(id)arg5 pageName:(id)arg6 messageID:(id)arg7 ;
+(id)accountLinkWithActionID:(id)arg1 actionURLString:(id)arg2 messageID:(id)arg3 ;
+(id)shareWithActionID:(id)arg1 messageID:(id)arg2 ;
+(id)extensibleShareWithActionID:(id)arg1 messageID:(id)arg2 title:(id)arg3 subtitle:(id)arg4 imageUrl:(id)arg5 targetUrl:(id)arg6 buttonTitle:(id)arg7 buttonTarget:(id)arg8 ;
+(id)manageMessagesWithPageID:(id)arg1 ;
+(id)facebookReportAProblem;
+(id)paymentWithPaymentModuleConfiguration:(id)arg1 messageID:(id)arg2 ;
+(id)subscriptionPreselectWithPageID:(id)arg1 ;
+(id)nestedCtaNavigationWithNestedCTAs:(id)arg1 ;
+(id)openMiniAppWithFlowStateObjectId:(id)arg1 title:(id)arg2 syncedThreadKey:(id)arg3 actionType:(unsigned long long)arg4 ;
-(void)matchUrl:(/*^block*/id)arg1 postback:(/*^block*/id)arg2 accountLink:(/*^block*/id)arg3 share:(/*^block*/id)arg4 extensibleShare:(/*^block*/id)arg5 legacyRideSharing:(/*^block*/id)arg6 manageMessages:(/*^block*/id)arg7 facebookReportAProblem:(/*^block*/id)arg8 payment:(/*^block*/id)arg9 subscriptionPreselect:(/*^block*/id)arg10 createEventReminder:(/*^block*/id)arg11 createAppointment:(/*^block*/id)arg12 openMiniApp:(/*^block*/id)arg13 nestedCtaNavigation:(/*^block*/id)arg14 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

