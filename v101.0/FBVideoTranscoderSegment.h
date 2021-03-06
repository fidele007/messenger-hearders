/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSURL;

@interface FBVideoTranscoderSegment : NSObject <NSCoding> {

	NSURL* _url;
	unsigned long long _type;

}

@property (nonatomic,copy,readonly) NSURL * url;                     //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)newWithURL:(id)arg1 type:(unsigned long long)arg2 ;
-(id)initWithURL:(id)arg1 type:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSURL *)url;
-(unsigned long long)type;
@end

