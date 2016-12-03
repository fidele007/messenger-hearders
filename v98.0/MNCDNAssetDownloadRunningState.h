/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCDNAssetDownloadRunning;
@class MNCDNAssetIdentifier;

@interface MNCDNAssetDownloadRunningState : NSObject {

	BOOL _hasRetried;
	id<MNCDNAssetDownloadRunning> _runner;
	MNCDNAssetIdentifier* _assetIdentifier;
	unsigned long long _fulfillmentPolicy;

}

@property (nonatomic,readonly) id<MNCDNAssetDownloadRunning> runner;                     //@synthesize runner=_runner - In the implementation block
@property (nonatomic,copy,readonly) MNCDNAssetIdentifier * assetIdentifier;              //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRetried;                                          //@synthesize hasRetried=_hasRetried - In the implementation block
@property (nonatomic,readonly) unsigned long long fulfillmentPolicy;                     //@synthesize fulfillmentPolicy=_fulfillmentPolicy - In the implementation block
-(MNCDNAssetIdentifier *)assetIdentifier;
-(unsigned long long)fulfillmentPolicy;
-(id)initWithRunner:(id)arg1 assetIdentifier:(id)arg2 withFulfillmentPolicy:(unsigned long long)arg3 ;
-(void)setHasRetried;
-(id<MNCDNAssetDownloadRunning>)runner;
-(BOOL)hasRetried;
@end
