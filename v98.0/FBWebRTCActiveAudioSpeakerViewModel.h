/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMUserName, UIImage;

@interface FBWebRTCActiveAudioSpeakerViewModel : FBValueObject <NSCopying> {

	FBMUserName* _name;
	UIImage* _image;

}

@property (nonatomic,copy,readonly) FBMUserName * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) UIImage * image;                 //@synthesize image=_image - In the implementation block
-(id)initWithName:(id)arg1 image:(id)arg2 ;
-(FBMUserName *)name;
-(UIImage *)image;
@end

