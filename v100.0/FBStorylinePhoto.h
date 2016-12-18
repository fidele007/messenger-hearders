/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Messenger/FBStorylineAsset.h>

@class NSString, NSNumber, FBStorylineImage, NSArray, NSDictionary, NSDate, UIImage;

@interface FBStorylinePhoto : FBValueObject <NSCopying, NSCoding, FBStorylineAsset> {

	BOOL _isLocalAsset;
	NSString* _originalAssetId;
	NSString* _photoId;
	NSNumber* _width;
	NSNumber* _height;
	FBStorylineImage* _image;
	FBStorylineImage* _lowResImage;
	FBStorylineImage* _highResImage;
	NSArray* _faceboxes;
	NSDictionary* _faceboxRect;
	NSDictionary* _cropRect;
	NSDate* _date;
	UIImage* _localImage;

}

@property (nonatomic,copy,readonly) NSString * photoId;                           //@synthesize photoId=_photoId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * width;                             //@synthesize width=_width - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * height;                            //@synthesize height=_height - In the implementation block
@property (nonatomic,copy,readonly) FBStorylineImage * image;                     //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) FBStorylineImage * lowResImage;               //@synthesize lowResImage=_lowResImage - In the implementation block
@property (nonatomic,copy,readonly) FBStorylineImage * highResImage;              //@synthesize highResImage=_highResImage - In the implementation block
@property (nonatomic,copy,readonly) NSArray * faceboxes;                          //@synthesize faceboxes=_faceboxes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * faceboxRect;                   //@synthesize faceboxRect=_faceboxRect - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * cropRect;                      //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                //@synthesize date=_date - In the implementation block
@property (nonatomic,retain,readonly) UIImage * localImage;                       //@synthesize localImage=_localImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * assetId; 
@property (nonatomic,copy,readonly) NSString * originalAssetId;                   //@synthesize originalAssetId=_originalAssetId - In the implementation block
@property (nonatomic,readonly) BOOL isLocalAsset;                                 //@synthesize isLocalAsset=_isLocalAsset - In the implementation block
@property (nonatomic,copy,readonly) NSString * thumbnailURL; 
-(NSString *)assetId;
-(id)initWithPhotoId:(id)arg1 originalAssetId:(id)arg2 isLocalAsset:(BOOL)arg3 width:(id)arg4 height:(id)arg5 image:(id)arg6 lowResImage:(id)arg7 highResImage:(id)arg8 faceboxes:(id)arg9 faceboxRect:(id)arg10 cropRect:(id)arg11 date:(id)arg12 localImage:(id)arg13 ;
-(void)updateCropRect:(id)arg1 ;
-(UIImage *)localImage;
-(BOOL)isEqualToStorylineAsset:(id)arg1 ;
-(NSString *)originalAssetId;
-(BOOL)isLocalAsset;
-(FBStorylineImage *)lowResImage;
-(FBStorylineImage *)highResImage;
-(NSArray *)faceboxes;
-(NSDictionary *)faceboxRect;
-(NSDate *)date;
-(FBStorylineImage *)image;
-(NSNumber *)width;
-(NSNumber *)height;
-(NSString *)photoId;
-(NSString *)thumbnailURL;
-(NSDictionary *)cropRect;
@end
