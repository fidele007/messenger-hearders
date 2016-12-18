/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface CDResourceMeta : NSObject {

	unsigned long long _size;
	long long _accessTime;
	long long _modificationTime;
	NSString* _tag;
	NSData* _extra;

}

@property (nonatomic,readonly) unsigned long long size;                 //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) long long accessTime;                    //@synthesize accessTime=_accessTime - In the implementation block
@property (nonatomic,readonly) long long modificationTime;              //@synthesize modificationTime=_modificationTime - In the implementation block
@property (nonatomic,readonly) NSString * tag;                          //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) NSData * extra;                          //@synthesize extra=_extra - In the implementation block
-(NSData *)extra;
-(id)initWithSize:(unsigned long long)arg1 accessTime:(long long)arg2 modificationTime:(long long)arg3 tag:(id)arg4 extra:(id)arg5 ;
-(long long)accessTime;
-(unsigned long long)size;
-(NSString *)tag;
-(long long)modificationTime;
@end

