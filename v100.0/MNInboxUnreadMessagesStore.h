/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNInboxUnreadMessagesViewModelMutating.h>
#import <Messenger/MNSingleViewModelLoading.h>
#import <Messenger/MNViewModelUpdateMonitoring.h>

@protocol OS_dispatch_queue, MNViewModelUpdating;
@class NSObject, NSString;

@interface MNInboxUnreadMessagesStore : NSObject <MNInboxUnreadMessagesViewModelMutating, MNSingleViewModelLoading, MNViewModelUpdateMonitoring> {

	unsigned long long _numberOfUnreadMessages;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNViewModelUpdating> _updater;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNViewModelUpdating> updater;              //@synthesize updater=_updater - In the implementation block
-(void)setNumberOfUnreadMessages:(unsigned long long)arg1 ;
-(void)loadViewModelForRequest:(id)arg1 withRequestId:(unsigned long long)arg2 ;
-(id)initWithQueue:(id)arg1 ;
-(void)cancelRequest:(unsigned long long)arg1 ;
-(void)_applyUpdates;
-(void)setUpdater:(id<MNViewModelUpdating>)arg1 ;
-(id<MNViewModelUpdating>)updater;
@end

