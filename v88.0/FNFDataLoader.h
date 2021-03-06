/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFDataLoader
@required
-(void)fetchFirstRequestForSeconds:(unsigned)arg1 initializationAtomSize:(unsigned long long)arg2 track:(long long)arg3;
-(void)seekForwardToOffset:(unsigned long long)arg1 forTrack:(long long)arg2;
-(void)fetchToOffset:(unsigned long long)arg1 forTrack:(long long)arg2;
-(BOOL)isFullyDownloaded:(long long)arg1;
-(void)resetWithNewVideoDataBlockDistributor:(id)arg1 audioDataBlockDistributor:(id)arg2;
-(unsigned long long)currentReceiveOffsetForTrack:(long long)arg1;
-(BOOL)fetchInProgressForTrack:(long long)arg1;
-(void)setDelegate:(id)arg1;
-(void)cancelRequests;
-(id)resourceLoader;

@end

