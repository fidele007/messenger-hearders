/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@class NSInputStream, NSMutableData, NSError;

@interface ZZInflateInputStream : NSInputStream {

	NSInputStream* _upstream;
	NSMutableData* _readBuffer;
	unsigned long long _status;
	NSError* _error;
	z_stream_s* _stream;

}
+(id)decompressData:(id)arg1 withUncompressedSize:(unsigned long long)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(void)close;
-(void)open;
-(id)initWithStream:(id)arg1 ;
-(unsigned long long)streamStatus;
-(BOOL)hasBytesAvailable;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)streamError;
@end

