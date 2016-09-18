/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol FBPhotoAttachmentProtocol;
@class UIImage;

@interface FBComposer360PhotoAttachment : NSObject <NSCopying, NSCoding> {

	id<FBPhotoAttachmentProtocol> _photoAttachment;
	UIImage* _full360Image;

}

@property (nonatomic,readonly) id<FBPhotoAttachmentProtocol> photoAttachment;              //@synthesize photoAttachment=_photoAttachment - In the implementation block
@property (nonatomic,retain) UIImage * full360Image;                                       //@synthesize full360Image=_full360Image - In the implementation block
-(UIImage *)full360Image;
-(void)setFull360Image:(UIImage *)arg1 ;
-(id<FBPhotoAttachmentProtocol>)photoAttachment;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAttachment:(id)arg1 ;
@end

