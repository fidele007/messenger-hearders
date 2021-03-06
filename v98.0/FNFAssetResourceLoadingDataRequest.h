/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:18 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FNFAssetResourceLoadingDataRequest : NSObject {

	/*^block*/id _sendDataCallback;
	BOOL _bypassCache;
	BOOL _enablePrefetchLookupWhenBypassCache;
	BOOL _isAudio;
	BOOL _firstRequest;
	long long _requestedOffset;
	long long _requestedLength;
	long long _currentOffset;

}

@property (nonatomic,readonly) long long requestedOffset;                           //@synthesize requestedOffset=_requestedOffset - In the implementation block
@property (nonatomic,readonly) long long requestedLength;                           //@synthesize requestedLength=_requestedLength - In the implementation block
@property (nonatomic,readonly) long long currentOffset;                             //@synthesize currentOffset=_currentOffset - In the implementation block
@property (assign,nonatomic) BOOL bypassCache;                                      //@synthesize bypassCache=_bypassCache - In the implementation block
@property (assign,nonatomic) BOOL enablePrefetchLookupWhenBypassCache;              //@synthesize enablePrefetchLookupWhenBypassCache=_enablePrefetchLookupWhenBypassCache - In the implementation block
@property (assign,nonatomic) BOOL isAudio;                                          //@synthesize isAudio=_isAudio - In the implementation block
@property (assign,nonatomic) BOOL firstRequest;                                     //@synthesize firstRequest=_firstRequest - In the implementation block
-(id)initWithRequestedOffset:(long long)arg1 requestedLength:(long long)arg2 dataCallback:(/*^block*/id)arg3 ;
-(BOOL)bypassCache;
-(BOOL)enablePrefetchLookupWhenBypassCache;
-(BOOL)firstRequest;
-(void)setIsAudio:(BOOL)arg1 ;
-(void)setBypassCache:(BOOL)arg1 ;
-(void)setEnablePrefetchLookupWhenBypassCache:(BOOL)arg1 ;
-(void)setFirstRequest:(BOOL)arg1 ;
-(long long)requestedOffset;
-(long long)requestedLength;
-(long long)currentOffset;
-(void)respondWithData:(id)arg1 ;
-(BOOL)isAudio;
@end

