/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage;

@interface MNInstructionStepViewModel : FBValueObject <NSCopying> {

	NSString* _title;
	UIImage* _image;

}

@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) UIImage * image;               //@synthesize image=_image - In the implementation block
-(id)initWithTitle:(id)arg1 image:(id)arg2 ;
-(NSString *)title;
-(UIImage *)image;
@end

