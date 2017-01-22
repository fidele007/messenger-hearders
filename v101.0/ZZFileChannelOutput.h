/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/ZZChannelOutput.h>

@interface ZZFileChannelOutput : NSObject <ZZChannelOutput> {

	int _fileDescriptor;
	unsigned _offset;

}

@property (assign,nonatomic) unsigned offset;              //@synthesize offset=_offset - In the implementation block
-(BOOL)seekToOffset:(unsigned)arg1 error:(out id*)arg2 ;
-(BOOL)truncateAtOffset:(unsigned)arg1 error:(out id*)arg2 ;
-(void)setOffset:(unsigned)arg1 ;
-(unsigned)offset;
-(void)close;
-(BOOL)writeData:(id)arg1 error:(out id*)arg2 ;
-(id)initWithFileDescriptor:(int)arg1 ;
@end
