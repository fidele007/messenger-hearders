/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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

