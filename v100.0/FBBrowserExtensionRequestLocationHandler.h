/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBScriptMessageHandling.h>
#import <Messenger/FBBrowserExtensionHandling.h>

@protocol FBBrowserExtensionDelegate;
@class FBUserSession, NSString;

@interface FBBrowserExtensionRequestLocationHandler : NSObject <FBScriptMessageHandling, FBBrowserExtensionHandling> {

	FBUserSession* _session;
	id<FBBrowserExtensionDelegate> _delegate;
	BOOL _hasAcknowledgedLocationPermissionDialog;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lazyCreatorForSession:(id)arg1 delegateBlock:(/*^block*/id)arg2 ;
+(id)supportedMessageNames;
-(void)handleScriptMessageFromWebView:(id)arg1 messageOrigin:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5 ;
-(id)initWithDelegate:(id)arg1 session:(id)arg2 ;
-(void)_returnErrorWithErrorCode:(unsigned long long)arg1 errorMessage:(id)arg2 messageName:(id)arg3 websiteURL:(id)arg4 webView:(id)arg5 messageParams:(id)arg6 ;
-(void)_showPermissionDialogForMessageName:(id)arg1 websiteURL:(id)arg2 webView:(id)arg3 messageParams:(id)arg4 ;
-(void)_returnLocationForMessageName:(id)arg1 websiteURL:(id)arg2 webView:(id)arg3 messageParams:(id)arg4 ;
@end

