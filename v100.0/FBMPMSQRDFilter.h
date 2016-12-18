/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMPConfigurableFilter.h>
#import <Messenger/FBMPFilterToVideoEditsFilterConfig.h>

@protocol FBFilterAssetManaging, FBMPMSQRDFilterDelegate;
@class FBMPVideoProcessorFilter, FBMPVideoEditsFilterConfig, NSString;

@interface FBMPMSQRDFilter : FBMPConfigurableFilter <FBMPFilterToVideoEditsFilterConfig> {

	FBMPVideoProcessorFilter* _processorFilter;
	id<FBFilterAssetManaging> _assetManager;
	BOOL _prepared;
	BOOL _isStillImageState;
	FBMPVideoEditsFilterConfig* _videoEditsFilterConfig;
	id<FBMPMSQRDFilterDelegate> _delegate;

}

@property (__weak) id<FBMPMSQRDFilterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithAssetManager:(id)arg1 config:(id)arg2 ;
-(id)videoEditsFilterConfig;
-(void)sessionConnectedPort:(id)arg1 context:(id)arg2 ;
-(void)sessionDisconnectedPort:(id)arg1 context:(id)arg2 ;
-(void)_onNewData:(id)arg1 ;
-(void)_registerForVideoProcessorFilterNotifications;
-(void)_handleVideoProcessorFilterNotification:(id)arg1 ;
-(void)setDelegate:(id<FBMPMSQRDFilterDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMPMSQRDFilterDelegate>)delegate;
@end
