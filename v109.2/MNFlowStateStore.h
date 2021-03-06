/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBMCustomDictionaryStoreDelegate.h>

@protocol OS_dispatch_queue;
@class FBMCustomDictionaryStore, NSObject, NSMutableDictionary, NSString;

@interface MNFlowStateStore : NSObject <FBMCustomDictionaryStoreDelegate> {

	FBMCustomDictionaryStore* _diskHandler;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _flowStates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMessagingStore:(id)arg1 messagingStoreDelayer:(id)arg2 queue:(id)arg3 ;
-(void)kickOffRestoreFromDisk;
-(id)flowStateForName:(id)arg1 ;
-(void)setFlowState:(id)arg1 forName:(id)arg2 ;
-(void)clearFlowStateForName:(id)arg1 ;
-(void)_scheduleSaveToDisk;
-(void)customDictionaryStore:(id)arg1 didRestoreStateFromDisk:(id)arg2 ;
@end

