/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBScriptMessageHandling.h>
#import <Messenger/FBBrowserExtensionHandling.h>

@protocol FBBrowserExtensionDelegate;
@class FBUserSession, FBMemPlatformInstantExperienceFeatureEnabledList, NSString;

@interface FBBrowserExtensionRequestUserInfoFieldHandler : NSObject <FBScriptMessageHandling, FBBrowserExtensionHandling> {

	FBUserSession* _session;
	id<FBBrowserExtensionDelegate> _delegate;
	FBMemPlatformInstantExperienceFeatureEnabledList* _featureEnabledList;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lazyCreatorForSession:(id)arg1 delegateBlock:(/*^block*/id)arg2 ;
+(id)supportedMessageNames;
+(id)lazyCreatorForSession:(id)arg1 delegateBlock:(/*^block*/id)arg2 featureEnabledList:(id)arg3 ;
-(void)handleScriptMessageFromWebView:(id)arg1 messageOrigin:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5 ;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 featureEnabledList:(id)arg3 ;
-(void)_requestUserInfoFieldWithWebView:(id)arg1 websiteURL:(id)arg2 messageName:(id)arg3 messageParams:(id)arg4 ;
-(void)_didFailRequestUserInfoFieldWithErrorCode:(unsigned long long)arg1 errorMessage:(id)arg2 messageName:(id)arg3 messageParams:(id)arg4 websiteURL:(id)arg5 webView:(id)arg6 ;
-(void)_didCompleteRequestUserInfoFieldWithData:(id)arg1 messageName:(id)arg2 messageParams:(id)arg3 websiteURL:(id)arg4 webView:(id)arg5 ;
@end
