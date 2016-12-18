/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCreativeEditingToolsLogger.h>

@protocol FBCreativeEditingToolsLoggerAggregatorDelegate;
@class FBAnalytics, NSMutableDictionary, NSString;

@interface FBCropLogger : NSObject <FBCreativeEditingToolsLogger> {

	FBAnalytics* _analytics;
	NSMutableDictionary* _assetIDsToLogs;
	NSString* _compositionID;
	unsigned long long _source;
	id<FBCreativeEditingToolsLoggerAggregatorDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<FBCreativeEditingToolsLoggerAggregatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCompositionID:(id)arg1 source:(unsigned long long)arg2 delegate:(id)arg3 ;
-(void)didEnterEditingForAssetID:(id)arg1 ;
-(void)didShowPhotoInComposerWithAssetID:(id)arg1 ;
-(void)didAdjustCropBoxToPhotoWithAssetID:(id)arg1 ;
-(void)didAdjustSquareCropBoxToPhotoWithAssetID:(id)arg1 ;
-(void)didUseCornerControlToPhotoWithAssetID:(id)arg1 ;
-(void)didUseSquareCornerControlToPhotoWithAssetID:(id)arg1 ;
-(void)didUseEdgeControlToPhotoWithAssetID:(id)arg1 ;
-(void)didUseSquareEdgeControlToPhotoWithAssetID:(id)arg1 ;
-(void)didUsePanControlToPhotoWithAssetID:(id)arg1 ;
-(void)didUseSquarePanControlToPhotoWithAssetID:(id)arg1 ;
-(void)didHitRotationToPhotoWithAssetID:(id)arg1 ;
-(void)didHitOriginalToPhotoWithAssetID:(id)arg1 ;
-(void)didHitSquareToPhotoWithAssetID:(id)arg1 ;
-(void)didChangeAspectRatio:(double)arg1 fromAspectRatio:(double)arg2 toPhotoWithAssetID:(id)arg3 ;
-(void)didCropBySquareButtonToPhoto:(BOOL)arg1 withAssetID:(id)arg2 ;
-(id)_logForAssetID:(id)arg1 ;
-(void)logEventsAndAggregateWithExtraData:(id)arg1 published:(BOOL)arg2 ;
-(void)_aggregateWithExtraData:(id)arg1 ;
-(void)logEventsAndAggregateWithExtraData:(id)arg1 finalSelectedPhotosAssetIDs:(id)arg2 published:(BOOL)arg3 ;
-(void)didAddPhotoWithAssetID:(id)arg1 ;
-(void)didRemovePhotoWithAssetID:(id)arg1 ;
-(id<FBCreativeEditingToolsLoggerAggregatorDelegate>)delegate;
@end

