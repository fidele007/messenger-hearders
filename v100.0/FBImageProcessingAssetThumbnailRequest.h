/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBImageProcessingConcurrentRequest.h>

@class UIImage, NSURL;

@interface FBImageProcessingAssetThumbnailRequest : FBImageProcessingConcurrentRequest {

	UIImage* _generatedThumbnail;
	NSURL* _assetURL;
	CGSize _thumbnailSize;

}

@property (nonatomic,retain) NSURL * assetURL;                            //@synthesize assetURL=_assetURL - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                        //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,readonly) UIImage * generatedThumbnail;              //@synthesize generatedThumbnail=_generatedThumbnail - In the implementation block
-(id)initWithAssetURL:(id)arg1 thumbnailSize:(CGSize)arg2 completionBlock:(/*^block*/id)arg3 cancelBlock:(/*^block*/id)arg4 ;
-(UIImage *)generatedThumbnail;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)thumbnailSize;
-(void)setAssetURL:(NSURL *)arg1 ;
-(NSURL *)assetURL;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)executeWithContext:(id)arg1 ;
@end

