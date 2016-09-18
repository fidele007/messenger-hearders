/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPrefetchVideoDownloader;

@interface FBVideoPrefetchRequest : NSObject {

	BOOL _inProgress;
	BOOL _useQueue;
	BOOL _prefetchedFirstChunk;
	FBPrefetchVideoDownloader* _prefetcher;

}

@property (nonatomic,readonly) FBPrefetchVideoDownloader * prefetcher;              //@synthesize prefetcher=_prefetcher - In the implementation block
@property (assign,nonatomic) BOOL inProgress;                                       //@synthesize inProgress=_inProgress - In the implementation block
@property (nonatomic,readonly) BOOL useQueue;                                       //@synthesize useQueue=_useQueue - In the implementation block
@property (assign,nonatomic) BOOL prefetchedFirstChunk;                             //@synthesize prefetchedFirstChunk=_prefetchedFirstChunk - In the implementation block
-(id)initWithPrefetcher:(id)arg1 useQueue:(BOOL)arg2 ;
-(FBPrefetchVideoDownloader *)prefetcher;
-(BOOL)useQueue;
-(BOOL)prefetchedFirstChunk;
-(void)setPrefetchedFirstChunk:(BOOL)arg1 ;
-(BOOL)inProgress;
-(void)setInProgress:(BOOL)arg1 ;
@end

