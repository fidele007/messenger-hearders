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

@class NSDictionary;

@interface FBMMetaRange : FBValueObject <NSCoding, NSCopying> {

	long long _offset;
	long long _length;
	long long _type;
	NSDictionary* _data;

}

@property (nonatomic,readonly) long long offset;                      //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) long long length;                      //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * data;              //@synthesize data=_data - In the implementation block
-(id)initWithOffset:(long long)arg1 length:(long long)arg2 type:(long long)arg3 data:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)length;
-(long long)type;
-(NSDictionary *)data;
-(long long)offset;
@end

