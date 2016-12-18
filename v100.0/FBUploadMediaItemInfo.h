/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol FBPhotoAttachmentProtocol;
@class NSString, UIImage;

@interface FBUploadMediaItemInfo : FBValueObject <NSCopying, NSCoding> {

	int _mediaItemType;
	NSString* _attachmentID;
	id<FBPhotoAttachmentProtocol> _photoAttachment;
	UIImage* _thumbNailImage;

}

@property (nonatomic,copy,readonly) NSString * attachmentID;                               //@synthesize attachmentID=_attachmentID - In the implementation block
@property (nonatomic,readonly) int mediaItemType;                                          //@synthesize mediaItemType=_mediaItemType - In the implementation block
@property (nonatomic,readonly) id<FBPhotoAttachmentProtocol> photoAttachment;              //@synthesize photoAttachment=_photoAttachment - In the implementation block
@property (nonatomic,copy,readonly) UIImage * thumbNailImage;                              //@synthesize thumbNailImage=_thumbNailImage - In the implementation block
-(id<FBPhotoAttachmentProtocol>)photoAttachment;
-(UIImage *)thumbNailImage;
-(id)initWithAttachmentID:(id)arg1 mediaItemType:(int)arg2 photoAttachment:(id)arg3 thumbNailImage:(id)arg4 ;
-(int)mediaItemType;
-(NSString *)attachmentID;
@end

