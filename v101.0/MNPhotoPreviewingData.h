/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNPhotoViewModel, MNImage, NSURL, UIImage;

@interface MNPhotoPreviewingData : NSObject <NSCopying> {

	unsigned long long _subtype;
	MNPhotoViewModel* _photoViewModel_photoViewModel;
	MNImage* _photoViewModel_placeholderImage;
	NSURL* _photoURL_uRL;
	UIImage* _photoURL_placeholderImage;

}
+(id)photoViewModelWithPhotoViewModel:(id)arg1 placeholderImage:(id)arg2 ;
+(id)photoURLWithURL:(id)arg1 placeholderImage:(id)arg2 ;
-(void)matchPhotoViewModel:(/*^block*/id)arg1 photoURL:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

