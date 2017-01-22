/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoTagSuggestionManagerUpdateListener.h>

@protocol FBCancelable;
@class FBUserSession, FBVideoAsset, NSString;

@interface FBVideoAssetPreparer : NSObject <FBVideoTagSuggestionManagerUpdateListener> {

	FBUserSession* _currentFBSession;
	FBVideoAsset* _videoAsset;
	id<FBCancelable> _taggingCancelHandle;
	id<FBCancelable> _faceDetectCancelHandle;
	BOOL _taggingEnabled;
	BOOL _faceDetectionEnabled;
	FBVideoAsset* _photoAsset;

}

@property (nonatomic,readonly) FBVideoAsset * photoAsset;                                          //@synthesize photoAsset=_photoAsset - In the implementation block
@property (assign,nonatomic) BOOL taggingEnabled;                                                  //@synthesize taggingEnabled=_taggingEnabled - In the implementation block
@property (assign,getter=isFaceDetectionEnabled,nonatomic) BOOL faceDetectionEnabled;              //@synthesize faceDetectionEnabled=_faceDetectionEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBVideoAsset *)photoAsset;
-(void)prepareAssetForSelectionAtScenePath:(id)arg1 ;
-(BOOL)taggingEnabled;
-(id)initWithVideoAsset:(id)arg1 currentFBSession:(id)arg2 ;
-(void)setTaggingEnabled:(BOOL)arg1 ;
-(void)setFaceDetectionEnabled:(BOOL)arg1 ;
-(void)_prepareAssetByRunningFaceRecognitionWithScenePath:(id)arg1 ;
-(BOOL)isFaceDetectionEnabled;
-(void)_prepareAssetByWarmingUpFaceDetectionDatabase;
-(void)_cleanUpFaceDetectionHandleWithCancel:(BOOL)arg1 ;
-(void)_updateAssetWithSuggestionItems:(id)arg1 ;
-(void)videoTagSuggetionItems:(id)arg1 updatedForVideoWithAssetID:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
@end
