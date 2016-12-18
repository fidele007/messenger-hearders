/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBAssetProtocol.h>

@class PHAsset, NSURL, NSString;

@interface FBAssetBackedByPHAsset : NSObject <FBAssetProtocol> {

	PHAsset* _asset;
	NSURL* _assetURL;
	NSURL* _assetFileURL;
	BOOL _hasFetchedMetadataFromFullsizeImage;
	long long _frameCountOfAnimatedGIF;
	NSString* _sphericalParameters;

}

@property (nonatomic,readonly) PHAsset * asset;                     //@synthesize asset=_asset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isLikely360Photo;
-(void)DEPRECATED_fetchExpensiveMetadataIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(id)DEPRECATED_sphericalParameters;
-(unsigned long long)backedStorage;
-(id)phAsset;
-(id)existingSphericalParameters;
-(void)handleFetchedMetaDataWithFrameCountForGIF:(unsigned long long)arg1 sphericalParameters:(id)arg2 ;
-(void)_DEPRECATED_fetchExpensiveImageMetadataSynchronously;
-(BOOL)DEPRECATED_assetIsPlayableGIF;
-(unsigned long long)assetType;
-(double)duration;
-(long long)orientation;
-(id)date;
-(id)location;
-(PHAsset *)asset;
-(id)thumbnail;
-(CGSize)dimensions;
-(id)aspectRatioThumbnail;
-(id)assetURL;
-(BOOL)isLivePhoto;
-(id)initWithPHAsset:(id)arg1 ;
@end

