/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRichStoryEntity.h>
#import <Messenger/FBRichStoryEntityUpdatable.h>

@class BFTask, NSString, NSURL;

@interface FBRichStoryFreeTrialCTAEntity : NSObject <FBRichStoryEntity, FBRichStoryEntityUpdatable> {

	BFTask* _didUpdateTask;
	NSString* _pageName;
	NSURL* _pageProfilePictureURL;
	NSURL* _viewerProfilePictureURL;
	NSString* _offerMessage;
	NSURL* _CTAURL;
	NSURL* _termsOfServiceURL;
	/*^block*/id _logViewedAction;
	/*^block*/id _logAcceptedAction;

}

@property (nonatomic,copy,readonly) NSString * pageName;                     //@synthesize pageName=_pageName - In the implementation block
@property (nonatomic,readonly) NSURL * pageProfilePictureURL;                //@synthesize pageProfilePictureURL=_pageProfilePictureURL - In the implementation block
@property (nonatomic,readonly) NSURL * viewerProfilePictureURL;              //@synthesize viewerProfilePictureURL=_viewerProfilePictureURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * offerMessage;                 //@synthesize offerMessage=_offerMessage - In the implementation block
@property (nonatomic,readonly) NSURL * CTAURL;                               //@synthesize CTAURL=_CTAURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * termsOfServiceURL;               //@synthesize termsOfServiceURL=_termsOfServiceURL - In the implementation block
@property (nonatomic,copy,readonly) id logViewedAction;                      //@synthesize logViewedAction=_logViewedAction - In the implementation block
@property (nonatomic,copy,readonly) id logAcceptedAction;                    //@synthesize logAcceptedAction=_logAcceptedAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BFTask * didUpdateTask;                       //@synthesize didUpdateTask=_didUpdateTask - In the implementation block
-(NSURL *)termsOfServiceURL;
-(NSString *)pageName;
-(BFTask *)didUpdateTask;
-(NSURL *)viewerProfilePictureURL;
-(NSString *)offerMessage;
-(NSURL *)CTAURL;
-(id)logAcceptedAction;
-(NSURL *)pageProfilePictureURL;
-(id)logViewedAction;
-(id)initWithPageName:(id)arg1 pageProfilePictureURL:(id)arg2 viewerProfilePictureURL:(id)arg3 offerMessage:(id)arg4 CTAURL:(id)arg5 termsOfServiceURL:(id)arg6 logViewedAction:(/*^block*/id)arg7 logAcceptedAction:(/*^block*/id)arg8 didUpdateTask:(id)arg9 ;
@end
