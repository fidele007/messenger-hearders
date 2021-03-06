/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary, FBMMessageExtensibleAttachment;

@interface FBMMessageAttachment : FBValueObject <NSCoding, NSCopying> {

	NSArray* _jsonAttachments;
	NSDictionary* _shareMap;
	FBMMessageExtensibleAttachment* _extensibleAttachment;

}

@property (nonatomic,copy,readonly) NSArray * jsonAttachments;                                          //@synthesize jsonAttachments=_jsonAttachments - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * shareMap;                                            //@synthesize shareMap=_shareMap - In the implementation block
@property (nonatomic,copy,readonly) FBMMessageExtensibleAttachment * extensibleAttachment;              //@synthesize extensibleAttachment=_extensibleAttachment - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(FBMMessageExtensibleAttachment *)extensibleAttachment;
-(NSDictionary *)shareMap;
-(NSArray *)jsonAttachments;
-(id)initWithJsonAttachments:(id)arg1 shareMap:(id)arg2 extensibleAttachment:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

