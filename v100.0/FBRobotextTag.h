/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBRobotextTag : NSObject <NSCoding> {

	unsigned long long _hash;
	NSString* _fbid;
	unsigned long long _length;
	NSString* _name;
	unsigned long long _offset;
	unsigned long long _type;

}

@property (nonatomic,copy,readonly) NSString * fbid;                   //@synthesize fbid=_fbid - In the implementation block
@property (nonatomic,readonly) unsigned long long length;              //@synthesize length=_length - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                //@synthesize type=_type - In the implementation block
-(NSString *)fbid;
-(id)initWithFBID:(id)arg1 type:(unsigned long long)arg2 name:(id)arg3 offset:(unsigned long long)arg4 length:(unsigned long long)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(unsigned long long)length;
-(unsigned long long)type;
-(unsigned long long)offset;
@end

