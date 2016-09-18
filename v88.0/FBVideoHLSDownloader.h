/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoDownloader.h>

@class FBRangedDataListener;

@interface FBVideoHLSDownloader : FBVideoDownloader {

	FBRangedDataListener* _currentListener;
	FBRangedDataListener* _currentListenerBeingAdded;

}
-(void)addRangedDataListener:(id)arg1 ;
-(BOOL)shouldForwardDataToListener:(id)arg1 ;
-(void)_finishRelevantListenersAfterPartialSuccess;
-(void)refreshOutgoingNetworkRequestRestartIfNeeded;
-(id)videoDataKey;
-(id)videoDataKeyForListener:(id)arg1 ;
-(unsigned long long)totalVideoByteLength;
-(id)videoURLForListener:(id)arg1 ;
-(unsigned long long)totalLengthForListener:(id)arg1 ;
-(id)generateNewRangeRequestWithURL:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 ;
-(unsigned long long)calculateThrottlingOffsetForOffset:(unsigned long long)arg1 ;
-(unsigned long long)calculateMinimalOffsetToFetch;
-(void)resetRequestIfNeededWithOffset:(unsigned long long)arg1 ;
-(id)videoURL;
-(void)setTotalLength:(unsigned long long)arg1 ;
-(unsigned long long)totalLength;
@end
