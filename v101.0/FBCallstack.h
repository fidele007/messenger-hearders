/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBCallstack : NSObject {

	int _size;
	unsigned _threadID;
	unsigned long long _timestamp;
	void* _callstack;

}

@property (nonatomic,readonly) int size;                                  //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned threadID;                         //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) void* callstack;                           //@synthesize callstack=_callstack - In the implementation block
-(id)initWithSize:(int)arg1 callstack:(void*)arg2 threadID:(unsigned)arg3 timestamp:(unsigned long long)arg4 ;
-(void*)callstack;
-(int)size;
-(void)dealloc;
-(unsigned long long)timestamp;
-(unsigned)threadID;
@end

