/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FNFDashAssetPrefetcherLogger.h>

@class NSString;

@interface FBPrefetchLiveDashVideoLogger : NSObject <FNFDashAssetPrefetcherLogger>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)logPrefetchStartedForVideoID:(id)arg1 ;
-(void)logPrefetchAvailableForVideoID:(id)arg1 isPrefetched:(BOOL)arg2 bytesRequested:(unsigned long long)arg3 bytesPrefetched:(unsigned long long)arg4 prefetchLeadTimeInMS:(unsigned long long)arg5 isKnownURL:(BOOL)arg6 ;
-(void)logPrefetchDiscardedForVideoID:(id)arg1 bytesRequested:(unsigned long long)arg2 bytesPrefetched:(unsigned long long)arg3 prefetchLeadTimeInMS:(unsigned long long)arg4 ;
@end

