/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPostEditingMediaAttachment.h>
#import <Messenger/FBPhotoAttachmentProtocol.h>

@class FBAssetMetadata, NSArray, CLLocation, FBPhotoAssetEdits, NSString, UIImage, NSDate;

@interface FBPostEditingPhotoAttachment : FBPostEditingMediaAttachment <FBPhotoAttachmentProtocol> {

	FBAssetMetadata* _metadata;
	BOOL _livePhotoHasPlayed;
	NSArray* _tagsEdges;
	CLLocation* _location;
	NSArray* _publishedPhotoTags;
	FBPhotoAssetEdits* _edits;
	NSArray* _urls;

}

@property (nonatomic,copy) NSArray * urls;                                                             //@synthesize urls=_urls - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIImage * thumbnailImage; 
@property (assign,nonatomic) BOOL allowEditing; 
@property (assign,nonatomic) BOOL allowRemoval; 
@property (nonatomic,copy,readonly) NSString * assetID; 
@property (nonatomic,readonly) FBAssetMetadata * metadata; 
@property (nonatomic,copy) NSString * caption; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,copy) NSArray * mentions; 
@property (nonatomic,readonly) BOOL requiresUpload; 
@property (nonatomic,readonly) BOOL selectedFromMultiPicker; 
@property (nonatomic,copy,readonly) NSString * existingFBID; 
@property (nonatomic,readonly) BOOL isLivePhoto; 
@property (nonatomic,copy,readonly) NSString * nameOfServerAssetIDFieldOverridingFileURL; 
@property (nonatomic,retain) UIImage * displayImage; 
@property (nonatomic,retain) CLLocation * location;                                                    //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) NSArray * publishedPhotoTags;                                      //@synthesize publishedPhotoTags=_publishedPhotoTags - In the implementation block
@property (nonatomic,copy) NSArray * tagsEdges;                                                        //@synthesize tagsEdges=_tagsEdges - In the implementation block
@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,retain) FBPhotoAssetEdits * edits;                                                //@synthesize edits=_edits - In the implementation block
@property (assign,nonatomic) BOOL livePhotoHasPlayed;                                                  //@synthesize livePhotoHasPlayed=_livePhotoHasPlayed - In the implementation block
+(id)propertiesToSkipForCoding;
-(void)loadImageDataForUploadWithCompressionRate:(double)arg1 maximumDimension:(int)arg2 specialCasePanoramas:(BOOL)arg3 loggingBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(FBPhotoAssetEdits *)edits;
-(BOOL)supportsQualitySampling;
-(BOOL)isPhotoCropped;
-(NSArray *)publishedPhotoTags;
-(NSArray *)tagsEdges;
-(void)setTagsEdges:(NSArray *)arg1 ;
-(void)setEdits:(FBPhotoAssetEdits *)arg1 ;
-(BOOL)livePhotoHasPlayed;
-(void)setLivePhotoHasPlayed:(BOOL)arg1 ;
-(BOOL)is360Photo;
-(id)initWithPhoto:(id)arg1 mentions:(id)arg2 isCustomPost:(BOOL)arg3 ;
-(unsigned long long)attachmentType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGSize)imageSize;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setUrls:(NSArray *)arg1 ;
-(NSArray *)urls;
-(id)_photo;
@end

