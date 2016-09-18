/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIImage, NSString, FBAssetMetadata, NSDate, NSArray;


@protocol FBMediaAttachmentProtocol <NSObject,NSCoding>
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
@optional
-(void)loadThumbnailImageFromSourceForUserSession:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setDisplayImage:(id)arg1;
-(void)loadDisplayImageFromSourceForUserSession:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(UIImage *)displayImage;

@required
-(NSString *)assetID;
-(id)visualDedupRepresentation;
-(BOOL)allowRemoval;
-(void)setAllowRemoval:(BOOL)arg1;
-(BOOL)requiresUpload;
-(BOOL)selectedFromMultiPicker;
-(NSString *)existingFBID;
-(NSString *)nameOfServerAssetIDFieldOverridingFileURL;
-(unsigned long long)attachmentType;
-(FBAssetMetadata *)metadata;
-(NSString *)caption;
-(void)setCaption:(id)arg1;
-(void)setMentions:(id)arg1;
-(NSArray *)mentions;
-(void)setAllowEditing:(BOOL)arg1;
-(BOOL)allowEditing;
-(UIImage *)thumbnailImage;
-(void)setThumbnailImage:(id)arg1;
-(NSDate *)creationDate;
-(void)setCreationDate:(id)arg1;
-(BOOL)isLivePhoto;

@end

