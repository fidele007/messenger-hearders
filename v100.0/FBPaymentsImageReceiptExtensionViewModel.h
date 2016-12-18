/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBPaymentsImage, NSArray;

@interface FBPaymentsImageReceiptExtensionViewModel : FBValueObject <NSCopying> {

	FBPaymentsImage* _image;
	double _imageHeight;
	NSArray* _actionsDescriptors;

}

@property (nonatomic,copy,readonly) FBPaymentsImage * image;                   //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) double imageHeight;                             //@synthesize imageHeight=_imageHeight - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actionsDescriptors;              //@synthesize actionsDescriptors=_actionsDescriptors - In the implementation block
-(id)initWithImage:(id)arg1 imageHeight:(double)arg2 actionsDescriptors:(id)arg3 ;
-(NSArray *)actionsDescriptors;
-(FBPaymentsImage *)image;
-(double)imageHeight;
@end
