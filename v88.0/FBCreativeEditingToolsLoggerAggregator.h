/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCreativeEditingToolsLoggerAggregatorDelegate.h>

@class FBAnalytics, NSString, NSMutableDictionary;

@interface FBCreativeEditingToolsLoggerAggregator : NSObject <FBCreativeEditingToolsLoggerAggregatorDelegate> {

	FBAnalytics* _analytics;
	NSString* _collagePhotoAssetID;
	NSString* _compositionID;
	unsigned long long _source;
	NSMutableDictionary* _assetIDsToLogs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCompositionID:(id)arg1 source:(unsigned long long)arg2 ;
-(void)didAddCollagePhotoWithAssetID:(id)arg1 ;
-(void)logEventsWithExtraData:(id)arg1 published:(BOOL)arg2 ;
-(id)_logForAssetID:(id)arg1 ;
-(void)creativeTool:(unsigned long long)arg1 submitData:(id)arg2 withAssetID:(id)arg3 ;
@end

