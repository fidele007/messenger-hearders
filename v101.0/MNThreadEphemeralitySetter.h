/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@protocol OS_dispatch_queue, MNThreadEphemeralitySetterDelegate;
@class MNAsyncOperationTracker, NSMutableDictionary, NSObject, MNThreadEphemeralityUpdateRequester, FBUserSession, MNMessagingRegionHeaderHelper, MNNavigationCoordinator, UIAlertController, NSString;

@interface MNThreadEphemeralitySetter : NSObject <FBViewerContextClassProvidable> {

	MNAsyncOperationTracker* _asyncOperationTracker;
	NSMutableDictionary* _ephemeralityRequestForThreadKey;
	NSObject*<OS_dispatch_queue> _queue;
	MNThreadEphemeralityUpdateRequester* _ephemeralityUpdateRequester;
	FBUserSession* _session;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;
	MNNavigationCoordinator* _navigationCoordinator;
	UIAlertController* _presentedAlertController;
	id<MNThreadEphemeralitySetterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNThreadEphemeralitySetterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithSession:(id)arg1 messagingRegionHeaderHelper:(id)arg2 navigationCoordinator:(id)arg3 ;
-(void)_cancelInFlightRequestForThreadKey:(id)arg1 ;
-(void)_ephemeralitySetterDidFinishWithSuccess:(BOOL)arg1 ;
-(void)_dismissPresentedAlertController;
-(void)setEphemeralityForThread:(id)arg1 ephemerality:(long long)arg2 originalEphemerality:(long long)arg3 ;
-(void)setDelegate:(id<MNThreadEphemeralitySetterDelegate>)arg1 ;
-(id<MNThreadEphemeralitySetterDelegate>)delegate;
@end

