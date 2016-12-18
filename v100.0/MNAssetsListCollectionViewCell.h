/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol FBCancelable;
@class UIImageView, NSString;

@interface MNAssetsListCollectionViewCell : UICollectionViewCell {

	UIImageView* _photoView;
	UIImageView* _assetTypeImageView;
	double _assetTypeIconScaledHeight;
	NSString* _assetIdentifier;
	id<FBCancelable> _thumbnailFetchingRequest;
	long long _assetMediaType;

}

@property (nonatomic,copy) NSString * assetIdentifier;                               //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,retain) id<FBCancelable> thumbnailFetchingRequest;              //@synthesize thumbnailFetchingRequest=_thumbnailFetchingRequest - In the implementation block
@property (assign,nonatomic) long long assetMediaType;                               //@synthesize assetMediaType=_assetMediaType - In the implementation block
-(id<FBCancelable>)thumbnailFetchingRequest;
-(void)setThumbnailFetchingRequest:(id<FBCancelable>)arg1 ;
-(id)_assetTypeImageForAssetMediaType:(long long)arg1 ;
-(NSString *)assetIdentifier;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setAssetMediaType:(long long)arg1 ;
-(long long)assetMediaType;
@end

