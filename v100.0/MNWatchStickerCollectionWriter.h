/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNWatchDataWriter.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@class MNWatchConnectivityManager, MNWatchStickerCollectionGenerator, MNUserSettings, NSString;

@interface MNWatchStickerCollectionWriter : NSObject <MNWatchDataWriter, FBViewerContextClassProvidable> {

	MNWatchConnectivityManager* _watchConnectivityManager;
	MNWatchStickerCollectionGenerator* _generator;
	MNUserSettings* _userSettings;
	BOOL _enabled;
	BOOL _dirty;

}

@property (assign,nonatomic) BOOL dirty;                            //@synthesize dirty=_dirty - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)flushForced:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithWatchConnectivityManager:(id)arg1 stickerCollectionGenerator:(id)arg2 userSettings:(id)arg3 ;
-(void)_updateDirtyState;
-(void)_sendStickerCollection:(id)arg1 ;
-(void)_writeIfNeeded;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)dirty;
@end

