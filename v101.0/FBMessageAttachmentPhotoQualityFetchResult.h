/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface FBMessageAttachmentPhotoQualityFetchResult : FBValueObject <NSCopying, NSCoding> {

	double _resolution;
	double _thumbnailResolution;

}

@property (nonatomic,readonly) double resolution;                       //@synthesize resolution=_resolution - In the implementation block
@property (nonatomic,readonly) double thumbnailResolution;              //@synthesize thumbnailResolution=_thumbnailResolution - In the implementation block
-(id)initWithResolution:(double)arg1 thumbnailResolution:(double)arg2 ;
-(double)thumbnailResolution;
-(double)resolution;
@end

