/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBStringWithRedactedDescription, NSArray, UIColor;

@interface MNContentSubscriptionAdminMessageViewModel : FBValueObject <NSCopying> {

	NSString* _pageId;
	NSString* _threadFBID;
	NSString* _messageState;
	FBStringWithRedactedDescription* _messageText;
	NSString* _unfoldCTAText;
	NSString* _pageName;
	NSString* _pageProfilePicUri;
	NSArray* _callToActions;
	UIColor* _themeColor;

}

@property (nonatomic,copy,readonly) NSString * pageId;                                          //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadFBID;                                      //@synthesize threadFBID=_threadFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageState;                                    //@synthesize messageState=_messageState - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * messageText;              //@synthesize messageText=_messageText - In the implementation block
@property (nonatomic,copy,readonly) NSString * unfoldCTAText;                                   //@synthesize unfoldCTAText=_unfoldCTAText - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageName;                                        //@synthesize pageName=_pageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageProfilePicUri;                               //@synthesize pageProfilePicUri=_pageProfilePicUri - In the implementation block
@property (nonatomic,copy,readonly) NSArray * callToActions;                                    //@synthesize callToActions=_callToActions - In the implementation block
@property (nonatomic,copy,readonly) UIColor * themeColor;                                       //@synthesize themeColor=_themeColor - In the implementation block
-(NSString *)threadFBID;
-(UIColor *)themeColor;
-(NSString *)pageId;
-(NSArray *)callToActions;
-(NSString *)pageName;
-(id)initWithPageId:(id)arg1 threadFBID:(id)arg2 messageState:(id)arg3 messageText:(id)arg4 unfoldCTAText:(id)arg5 pageName:(id)arg6 pageProfilePicUri:(id)arg7 callToActions:(id)arg8 themeColor:(id)arg9 ;
-(NSString *)messageState;
-(NSString *)unfoldCTAText;
-(NSString *)pageProfilePicUri;
-(FBStringWithRedactedDescription *)messageText;
@end
