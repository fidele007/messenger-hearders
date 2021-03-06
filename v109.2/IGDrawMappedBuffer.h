/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class IGDrawMappedBufferRange, IGContext;


@protocol IGDrawMappedBuffer <IGDrawVertexBuffer>
@property (nonatomic,readonly) IGDrawMappedBufferRange * asRange; 
@property (nonatomic,readonly) void* data; 
@property (assign,nonatomic) void* head; 
@property (nonatomic,readonly) unsigned long long available; 
@property (nonatomic,readonly) unsigned long long offset; 
@property (nonatomic,readonly) IGContext * context; 
@required
+(id)new;
-(void)flushStart:(unsigned long long)arg1 amount:(unsigned long long)arg2;
-(id)initWithContext:(id)arg1 size:(unsigned long long)arg2;
-(id)init;
-(void*)data;
-(IGContext *)context;
-(IGDrawMappedBufferRange *)asRange;
-(unsigned long long)offset;
-(unsigned long long)available;
-(void*)head;
-(void)setHead:(void*)arg1;

@end

