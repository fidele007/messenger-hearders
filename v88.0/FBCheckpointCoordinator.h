/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebViewControllerDelegate.h>

@protocol FBLoggedInCheckpointPresenting;
@class NSString, FBUserSession, FBWebViewController;

@interface FBCheckpointCoordinator : NSObject <FBWebViewControllerDelegate> {

	NSString* _currentCheckpointID;
	FBUserSession* _session;
	id<FBLoggedInCheckpointPresenting> _presenter;
	FBWebViewController* _loadingWebViewController;
	FBWebViewController* _checkpointWebViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)webViewController:(id)arg1 loadingChanged:(BOOL)arg2 ;
-(id)initWithSession:(id)arg1 presenter:(id)arg2 ;
-(void)startListeningForLoggedInCheckpoint;
-(void)stopListeningForLoggedInCheckpoint;
-(void)_handleNonBlockingCheckpointNotification:(id)arg1 ;
-(void)_handleBlockingCheckpointNotification:(id)arg1 ;
-(void)_loadCheckpointWebViewAsBlocking:(BOOL)arg1 url:(id)arg2 ;
-(void)_unenrollFromCheckpoint;
-(void)_loadCheckpointWebViewAsBlocking:(BOOL)arg1 ;
-(void)_handleWebViewRefreshButton:(id)arg1 ;
-(void)loadCheckpointWebViewWithUrl:(id)arg1 ;
-(void)dealloc;
@end
