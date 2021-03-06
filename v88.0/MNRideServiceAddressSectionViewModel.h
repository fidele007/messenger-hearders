/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage, NSArray;

@interface MNRideServiceAddressSectionViewModel : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _sectionDescription;
	UIImage* _image;
	NSArray* _addresses;

}

@property (nonatomic,copy,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * sectionDescription;              //@synthesize sectionDescription=_sectionDescription - In the implementation block
@property (nonatomic,copy,readonly) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSArray * addresses;                        //@synthesize addresses=_addresses - In the implementation block
-(id)initWithTitle:(id)arg1 sectionDescription:(id)arg2 image:(id)arg3 addresses:(id)arg4 ;
-(NSString *)sectionDescription;
-(NSString *)title;
-(UIImage *)image;
-(NSArray *)addresses;
@end

