/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSingleViewModelLoading.h>
#import <Messenger/MNViewModelUpdateMonitoring.h>
#import <Messenger/MNUserSettingsListener.h>

@protocol OS_dispatch_queue, MNViewModelUpdating;
@class MNUserSettings, NSObject, NSDate, NSString;

@interface MNInboxMontageNuxSeenStateStore : NSObject <MNSingleViewModelLoading, MNViewModelUpdateMonitoring, MNUserSettingsListener> {

	MNUserSettings* _userSettings;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _montageViewerNuxSeenTime;
	id<MNViewModelUpdating> _updater;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNViewModelUpdating> updater;              //@synthesize updater=_updater - In the implementation block
-(void)userSettingsDidUpdateSetting:(id)arg1 ;
-(void)loadViewModelForRequest:(id)arg1 withRequestId:(unsigned long long)arg2 ;
-(id)initWithUserSettings:(id)arg1 queue:(id)arg2 ;
-(void)_applyUpdate;
-(void)cancelRequest:(unsigned long long)arg1 ;
-(void)setUpdater:(id<MNViewModelUpdating>)arg1 ;
-(id<MNViewModelUpdating>)updater;
@end

