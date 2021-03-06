/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/CKComponentStateListener.h>

@protocol OS_dispatch_queue, FBComponentHostControllerDelegate;
@class NSObject, NSString;

@interface FBComponentHostController : NSObject <CKComponentStateListener> {

	Synchronized<FBComponentHostControllerContext, std::__1::mutex> _context;
	NSObject*<OS_dispatch_queue> _workQueue;
	unordered_multimap<int, id ()(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id ()(id)> > >* _pendingAsynchronousStateUpdates;
	unordered_multimap<int, id ()(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id ()(id)> > >* _pendingSynchronousStateUpdates;
	id<FBComponentHostControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComponentHostControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)updateWithCreationBlock:(/*^block*/id)arg1 constrainingSizeRange:(CKSizeRange)arg2 userInfo:(id)arg3 ;
-(void)enqueueUpdateWithCreationBlock:(/*^block*/id)arg1 constrainingSizeRange:(CKSizeRange)arg2 userInfo:(id)arg3 ;
-(id)initWithWorkQueue:(id)arg1 ;
-(/*^block*/id)_stateAnnouncingCompletionBlock;
-(void)_unlocked_enqueueModification:(id)arg1 ;
-(void)_mainThread_processStateUpdates;
-(void)_unlocked_startNextAsynchronousModification;
-(void)_unlocked_processAndApplyModification:(id)arg1 toPreviousState:(id)arg2 ;
-(id)_locked_applyModification:(id)arg1 toContext:(FBComponentHostControllerContext*)arg2 ;
-(void)componentScopeHandleWithIdentifier:(int)arg1 rootIdentifier:(int)arg2 didReceiveStateUpdate:(/*^block*/id)arg3 mode:(unsigned long long)arg4 ;
-(id)init;
-(void)setDelegate:(id<FBComponentHostControllerDelegate>)arg1 ;
-(id<FBComponentHostControllerDelegate>)delegate;
@end

