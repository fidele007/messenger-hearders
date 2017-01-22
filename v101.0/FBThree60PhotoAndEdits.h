/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPhotoAssetEdits, UIImage, NSString;

@interface FBThree60PhotoAndEdits : NSObject {

	BOOL _hasFullAsset;
	FBPhotoAssetEdits* _edits;
	UIImage* _image;
	NSString* _assetID;

}

@property (nonatomic,readonly) FBPhotoAssetEdits * edits;              //@synthesize edits=_edits - In the implementation block
@property (nonatomic,readonly) UIImage * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetID;                //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,readonly) BOOL hasFullAsset;                      //@synthesize hasFullAsset=_hasFullAsset - In the implementation block
-(NSString *)assetID;
-(FBPhotoAssetEdits *)edits;
-(id)initWithImage:(id)arg1 edits:(id)arg2 assetID:(id)arg3 hasFullAsset:(BOOL)arg4 ;
-(BOOL)hasFullAsset;
-(UIImage *)image;
@end
