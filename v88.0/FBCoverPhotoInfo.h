/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBPoint2D;

@interface FBCoverPhotoInfo : FBGraphQLInput {

	NSString* _photoId;
	NSString* _photoURLString;
	NSString* _themePhotoId;
	FBPoint2D* _offset;
	FBPoint2D* _focus;
	FBPoint2D* _zoomScale;

}

@property (nonatomic,copy) NSString * photoId;                     //@synthesize photoId=_photoId - In the implementation block
@property (nonatomic,copy) NSString * photoURLString;              //@synthesize photoURLString=_photoURLString - In the implementation block
@property (nonatomic,copy) NSString * themePhotoId;                //@synthesize themePhotoId=_themePhotoId - In the implementation block
@property (nonatomic,copy) FBPoint2D * offset;                     //@synthesize offset=_offset - In the implementation block
@property (nonatomic,copy) FBPoint2D * focus;                      //@synthesize focus=_focus - In the implementation block
@property (nonatomic,copy) FBPoint2D * zoomScale;                  //@synthesize zoomScale=_zoomScale - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)photoURLString;
-(void)setPhotoURLString:(NSString *)arg1 ;
-(NSString *)themePhotoId;
-(void)setThemePhotoId:(NSString *)arg1 ;
-(FBPoint2D *)zoomScale;
-(void)setZoomScale:(FBPoint2D *)arg1 ;
-(void)setOffset:(FBPoint2D *)arg1 ;
-(FBPoint2D *)offset;
-(FBPoint2D *)focus;
-(NSString *)photoId;
-(void)setPhotoId:(NSString *)arg1 ;
-(void)setFocus:(FBPoint2D *)arg1 ;
@end

