/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBScriptMessageHandling.h>

@protocol FBBrowserExtensionDelegate;
@class FBDictionaryRegistry, FBUserSession, FBMemPlatformInstantExperienceFeatureEnabledList, NSString;

@interface FBBrowserExtensionScriptMessageHandler : NSObject <FBScriptMessageHandling> {

	FBDictionaryRegistry* _scriptMessageHandlerRegistry;
	FBUserSession* _session;
	/*^block*/id _delegateBlock;
	FBMemPlatformInstantExperienceFeatureEnabledList* _featureEnabledList;
	id<FBBrowserExtensionDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)unregisterSupportedMessagesForSession:(id)arg1 ;
+(id)supportedMessageNames;
-(id)initWithSession:(id)arg1 delegateBlock:(/*^block*/id)arg2 featureEnabledList:(id)arg3 ;
-(void)handleScriptMessageFromWebView:(id)arg1 messageOrigin:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5 ;
-(void)_registerAllExtensions;
-(void)_registerBrowserExtension:(id)arg1 messageNames:(id)arg2 registry:(id)arg3 ;
@end

