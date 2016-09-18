/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPhotoAttachmentProtocol.h>

@class NSString, NSDate, CLLocation, NSArray, UIImage, FBPhotoAssetEdits, FBAssetMetadata;

@interface FBCameraComposerPhotoAttachment : NSObject <FBPhotoAttachmentProtocol> {

	BOOL _allowEditing;
	BOOL _allowRemoval;
	BOOL _livePhotoHasPlayed;
	NSString* _assetID;
	NSString* _caption;
	NSDate* _creationDate;
	CLLocation* _location;
	NSArray* _mentions;
	NSArray* _tagsEdges;
	UIImage* _thumbnailImage;
	FBPhotoAssetEdits* _edits;
	UIImage* _photo;
	FBAssetMetadata* _metadata;

}

@property (nonatomic,retain) UIImage * photo;                                                          //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) FBAssetMetadata * metadata;                                               //@synthesize metadata=_metadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIImage * thumbnailImage;                                                 //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (assign,nonatomic) BOOL allowEditing;                                                        //@synthesize allowEditing=_allowEditing - In the implementation block
@property (assign,nonatomic) BOOL allowRemoval;                                                        //@synthesize allowRemoval=_allowRemoval - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetID;                                                //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,copy) NSString * caption;                                                         //@synthesize caption=_caption - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                                                    //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSArray * mentions;                                                         //@synthesize mentions=_mentions - In the implementation block
@property (nonatomic,readonly) BOOL requiresUpload; 
@property (nonatomic,readonly) BOOL selectedFromMultiPicker; 
@property (nonatomic,copy,readonly) NSString * existingFBID; 
@property (nonatomic,readonly) BOOL isLivePhoto; 
@property (nonatomic,copy,readonly) NSString * nameOfServerAssetIDFieldOverridingFileURL; 
@property (nonatomic,retain) UIImage * displayImage; 
@property (nonatomic,retain) CLLocation * location;                                                    //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) NSArray * publishedPhotoTags; 
@property (nonatomic,copy) NSArray * tagsEdges;                                                        //@synthesize tagsEdges=_tagsEdges - In the implementation block
@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,retain) FBPhotoAssetEdits * edits;                                                //@synthesize edits=_edits - In the implementation block
@property (assign,nonatomic) BOOL livePhotoHasPlayed;                                                  //@synthesize livePhotoHasPlayed=_livePhotoHasPlayed - In the implementation block
-(NSString *)assetID;
-(void)loadImageDataForUploadWithCompressionRate:(double)arg1 maximumDimension:(int)arg2 specialCasePanoramas:(BOOL)arg3 loggingBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(FBPhotoAssetEdits *)edits;
-(id)visualDedupRepresentation;
-(BOOL)allowRemoval;
-(void)setAllowRemoval:(BOOL)arg1 ;
-(BOOL)requiresUpload;
-(BOOL)selectedFromMultiPicker;
-(NSString *)existingFBID;
-(NSString *)nameOfServerAssetIDFieldOverridingFileURL;
-(void)setEdits:(FBPhotoAssetEdits *)arg1 ;
-(id)initWithPhoto:(id)arg1 metadata:(id)arg2 ;
-(BOOL)supportsQualitySampling;
-(BOOL)isPhotoCropped;
-(NSArray *)publishedPhotoTags;
-(NSArray *)tagsEdges;
-(void)setTagsEdges:(NSArray *)arg1 ;
-(BOOL)livePhotoHasPlayed;
-(void)setLivePhotoHasPlayed:(BOOL)arg1 ;
-(BOOL)is360Photo;
-(id)initWithPhoto:(id)arg1 metadata:(id)arg2 assetID:(id)arg3 ;
-(unsigned long long)attachmentType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGSize)imageSize;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(UIImage *)displayImage;
-(FBAssetMetadata *)metadata;
-(void)setMetadata:(FBAssetMetadata *)arg1 ;
-(NSString *)caption;
-(void)setPhoto:(UIImage *)arg1 ;
-(void)setCaption:(NSString *)arg1 ;
-(void)setMentions:(NSArray *)arg1 ;
-(NSArray *)mentions;
-(void)setAllowEditing:(BOOL)arg1 ;
-(BOOL)allowEditing;
-(UIImage *)thumbnailImage;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(UIImage *)photo;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(BOOL)isLivePhoto;
@end

