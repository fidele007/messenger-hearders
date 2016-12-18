/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNAttachmentViewAttributes;

@interface MNMessageCellLayoutSpec : FBValueObject <NSCopying> {

	MNAttachmentViewAttributes* _attachmentViewAttributes;
	CGSize _containingSize;
	CGRect _textRect;
	CGRect _photosRect;
	CGRect _stickerRect;
	CGRect _fileAttachmentsRect;
	CGRect _videoRect;
	CGRect _audioRect;
	CGRect _attachmentRect;
	CGRect _attributionRect;
	CGRect _bubbleRect;
	CGRect _overlayRect;

}

@property (nonatomic,readonly) CGRect textRect;                                                         //@synthesize textRect=_textRect - In the implementation block
@property (nonatomic,readonly) CGRect photosRect;                                                       //@synthesize photosRect=_photosRect - In the implementation block
@property (nonatomic,readonly) CGRect stickerRect;                                                      //@synthesize stickerRect=_stickerRect - In the implementation block
@property (nonatomic,readonly) CGRect fileAttachmentsRect;                                              //@synthesize fileAttachmentsRect=_fileAttachmentsRect - In the implementation block
@property (nonatomic,readonly) CGRect videoRect;                                                        //@synthesize videoRect=_videoRect - In the implementation block
@property (nonatomic,readonly) CGRect audioRect;                                                        //@synthesize audioRect=_audioRect - In the implementation block
@property (nonatomic,readonly) CGRect attachmentRect;                                                   //@synthesize attachmentRect=_attachmentRect - In the implementation block
@property (nonatomic,readonly) CGRect attributionRect;                                                  //@synthesize attributionRect=_attributionRect - In the implementation block
@property (nonatomic,readonly) CGSize containingSize;                                                   //@synthesize containingSize=_containingSize - In the implementation block
@property (nonatomic,readonly) CGRect bubbleRect;                                                       //@synthesize bubbleRect=_bubbleRect - In the implementation block
@property (nonatomic,readonly) CGRect overlayRect;                                                      //@synthesize overlayRect=_overlayRect - In the implementation block
@property (nonatomic,copy,readonly) MNAttachmentViewAttributes * attachmentViewAttributes;              //@synthesize attachmentViewAttributes=_attachmentViewAttributes - In the implementation block
-(CGRect)audioRect;
-(CGRect)bubbleRect;
-(CGRect)overlayRect;
-(CGRect)photosRect;
-(CGRect)fileAttachmentsRect;
-(CGRect)attachmentRect;
-(CGRect)attributionRect;
-(CGSize)containingSize;
-(CGRect)stickerRect;
-(MNAttachmentViewAttributes *)attachmentViewAttributes;
-(id)initWithTextRect:(CGRect)arg1 photosRect:(CGRect)arg2 stickerRect:(CGRect)arg3 fileAttachmentsRect:(CGRect)arg4 videoRect:(CGRect)arg5 audioRect:(CGRect)arg6 attachmentRect:(CGRect)arg7 attributionRect:(CGRect)arg8 containingSize:(CGSize)arg9 bubbleRect:(CGRect)arg10 overlayRect:(CGRect)arg11 attachmentViewAttributes:(id)arg12 ;
-(CGRect)textRect;
-(CGRect)videoRect;
@end

