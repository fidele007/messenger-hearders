/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FNFMp4StreamingReader.h>

@class FNFDataBlockDistributor, NSString;

@interface FBAssetLinearReader : NSObject <FNFMp4StreamingReader> {

	FNFDataBlockDistributor* _dataDistributor;
	unsigned long long _offset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataDistributor:(id)arg1 ;
-(const char*)bytesAtHead:(long long)arg1 ;
-(void)moveHead:(unsigned long long)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
@end

