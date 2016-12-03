/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNVideoAttachmentViewModel, UIImage, MNAppMessage, NSArray;

@interface MNVideoPreviewingData : FBValueObject <NSCopying> {

	MNVideoAttachmentViewModel* _videoViewModel;
	UIImage* _thumbnailImage;
	MNAppMessage* _message;
	NSArray* _wrappedVideoViewNode;

}

@property (nonatomic,copy,readonly) MNVideoAttachmentViewModel * videoViewModel;              //@synthesize videoViewModel=_videoViewModel - In the implementation block
@property (nonatomic,copy,readonly) UIImage * thumbnailImage;                                 //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,copy,readonly) MNAppMessage * message;                                   //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSArray * wrappedVideoViewNode;                           //@synthesize wrappedVideoViewNode=_wrappedVideoViewNode - In the implementation block
-(id)initWithVideoViewModel:(id)arg1 thumbnailImage:(id)arg2 message:(id)arg3 wrappedVideoViewNode:(id)arg4 ;
-(MNVideoAttachmentViewModel *)videoViewModel;
-(NSArray *)wrappedVideoViewNode;
-(MNAppMessage *)message;
-(UIImage *)thumbnailImage;
@end
