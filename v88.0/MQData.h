/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_data;
@class NSObject;

@interface MQData : NSObject {

	NSObject*<OS_dispatch_data> dispatchData_;
	void* data_;
	unsigned long long length_;

}

@property (readonly) NSObject*<OS_dispatch_data> dispatchData; 
@property (readonly) void* data; 
@property (readonly) unsigned long long length; 
-(id)initWithMappedDispatchData:(id)arg1 data:(void*)arg2 length:(unsigned long long)arg3 ;
-(NSObject*<OS_dispatch_data>)dispatchData;
-(void)dealloc;
-(id)description;
-(unsigned long long)length;
-(void*)data;
@end

