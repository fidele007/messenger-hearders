/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBStreamFileInfo : NSObject {

	NSString* _filePath;
	unsigned long long _fileOffset;

}

@property (nonatomic,copy,readonly) NSString * filePath;                   //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) unsigned long long fileOffset;              //@synthesize fileOffset=_fileOffset - In the implementation block
-(id)initWithFilePath:(id)arg1 fileOffset:(unsigned long long)arg2 ;
-(unsigned long long)fileOffset;
-(NSString *)filePath;
@end

