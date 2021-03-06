/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TTransport.h>

@protocol TTransport;
@class NSMutableData, NSString;

@interface TFramedTransport : NSObject <TTransport> {

	id<TTransport> mTransport;
	NSMutableData* writeBuffer;
	NSMutableData* readBuffer;
	unsigned long long readOffset;
	unsigned char dummy_header[4];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)readAll:(char*)arg1 offset:(int)arg2 length:(int)arg3 ;
-(void)write:(const char*)arg1 offset:(unsigned)arg2 length:(unsigned)arg3 ;
-(void)readFrame;
-(void)dealloc;
-(void)flush;
-(id)initWithTransport:(id)arg1 ;
@end

