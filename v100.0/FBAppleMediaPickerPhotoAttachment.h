/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPhotoAttachmentProtocol.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSURL, NSString, NSArray, UIImage, FBAssetMetadata, NSDate, FBPhotoAssetEdits, CLLocation;

@interface FBAppleMediaPickerPhotoAttachment : NSObject <FBPhotoAttachmentProtocol, NSCoding> {

	NSMutableArray* _publishedPhotoTags;
	NSURL* _temporaryImageFileName;
	BOOL _livePhotoHasPlayed;
	BOOL _allowEditing;
	BOOL _allowRemoval;
	NSString* _caption;
	NSArray* _mentions;
	UIImage* _thumbnailImage;
	NSString* _assetID;
	FBAssetMetadata* _metadata;
	NSDate* _creationDate;
	FBPhotoAssetEdits* _edits;
	UIImage* _imageBeingWritten;

}

@property (nonatomic,retain) UIImage * imageBeingWritten;                                              //@synthesize imageBeingWritten=_imageBeingWritten - In the implementation block
@property (nonatomic,retain) UIImage * thumbnailImage;                                                 //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (assign,nonatomic) BOOL allowEditing;                                                        //@synthesize allowEditing=_allowEditing - In the implementation block
@property (assign,nonatomic) BOOL allowRemoval;                                                        //@synthesize allowRemoval=_allowRemoval - In the implementation block
@property (nonatomic,copy) NSString * assetID;                                                         //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,readonly) FBAssetMetadata * metadata;                                             //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                                                    //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,copy) NSArray * publishedPhotoTags;                                               //@synthesize publishedPhotoTags=_publishedPhotoTags - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,retain) FBPhotoAssetEdits * edits;                                                //@synthesize edits=_edits - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * caption;                                                         //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSArray * mentions;                                                         //@synthesize mentions=_mentions - In the implementation block
@property (nonatomic,readonly) BOOL requiresUpload; 
@property (nonatomic,readonly) BOOL selectedFromMultiPicker; 
@property (nonatomic,copy,readonly) NSString * existingFBID; 
@property (nonatomic,readonly) BOOL isLivePhoto; 
@property (nonatomic,copy,readonly) NSString * nameOfServerAssetIDFieldOverridingFileURL; 
@property (nonatomic,retain) UIImage * displayImage; 
@property (nonatomic,readonly) CGSize imageSize; 
@property (assign,nonatomic) BOOL livePhotoHasPlayed;                                                  //@synthesize livePhotoHasPlayed=_livePhotoHasPlayed - In the implementation block
+(id)propertiesToSkipForCoding;
-(NSString *)assetID;
-(void)saveImage:(id)arg1 ;
-(void)loadImageDataForUploadWithCompressionRate:(double)arg1 maximumDimension:(int)arg2 specialCasePanoramas:(BOOL)arg3 loggingBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(FBPhotoAssetEdits *)edits;
-(id)visualDedupRepresentation;
-(BOOL)allowRemoval;
-(void)setAllowRemoval:(BOOL)arg1 ;
-(BOOL)requiresUpload;
-(BOOL)selectedFromMultiPicker;
-(NSString *)existingFBID;
-(NSString *)nameOfServerAssetIDFieldOverridingFileURL;
-(BOOL)supportsQualitySampling;
-(BOOL)isPhotoCropped;
-(NSArray *)publishedPhotoTags;
-(void)setEdits:(FBPhotoAssetEdits *)arg1 ;
-(BOOL)livePhotoHasPlayed;
-(void)setLivePhotoHasPlayed:(BOOL)arg1 ;
-(void)updateNewMetadata:(id)arg1 ;
-(void)setAssetID:(NSString *)arg1 ;
-(void)setImageBeingWritten:(UIImage *)arg1 ;
-(UIImage *)imageBeingWritten;
-(BOOL)is360Photo;
-(void)setPublishedPhotoTags:(NSArray *)arg1 ;
-(void)saveImage:(id)arg1 forceResave:(BOOL)arg2 ;
-(void)setThumbnailImageFromImage:(id)arg1 ;
-(unsigned long long)attachmentType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(UIImage *)image;
-(CGSize)imageSize;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(FBAssetMetadata *)metadata;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(void)setMentions:(NSArray *)arg1 ;
-(NSArray *)mentions;
-(void)setAllowEditing:(BOOL)arg1 ;
-(BOOL)allowEditing;
-(UIImage *)thumbnailImage;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(BOOL)isLivePhoto;
@end

