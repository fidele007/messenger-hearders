/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNPhotoSource, MNPhotoMetadata;

@interface MNPhotoViewModel : FBValueObject <NSCopying, NSCoding> {

	MNPhotoSource* _source;
	MNPhotoMetadata* _metadata;

}

@property (nonatomic,copy,readonly) MNPhotoSource * source;                  //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) MNPhotoMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(id)initWithSource:(id)arg1 metadata:(id)arg2 ;
-(MNPhotoSource *)source;
-(MNPhotoMetadata *)metadata;
@end

