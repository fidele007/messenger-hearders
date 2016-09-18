/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBAssetProtocol.h>

@class NSString, NSDate, UIImage, AVURLAsset;

@interface FBAssetBackedByVideoAsset : NSObject <FBAssetProtocol> {

	NSString* _assetID;
	NSDate* _date;
	UIImage* _thumbnail;
	AVURLAsset* _videoAsset;
	CGSize _dimensions;
	long long _orientation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isLikely360Photo;
-(unsigned long long)backedStorage;
-(id)phAsset;
-(id)imageWithMode:(unsigned long long)arg1 targetDimension:(long long)arg2 networkAccessAllowed:(BOOL)arg3 ;
-(id)imageWithMode:(unsigned long long)arg1 ;
-(unsigned long long)assetType;
-(double)duration;
-(long long)orientation;
-(id)date;
-(id)location;
-(id)thumbnail;
-(CGSize)dimensions;
-(id)aspectRatioThumbnail;
-(id)assetURL;
-(id)initWithVideoAsset:(id)arg1 ;
-(BOOL)isLivePhoto;
@end

