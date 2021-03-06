/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBUpdateDataFetcherParamsBuilder : NSObject {

	NSString* _appId;
	NSString* _bundleId;
	NSString* _releaseChannel;
	unsigned long long _limit;
	BOOL _filterResultsForOtherBundleIds;

}
+(id)defaultBuilder;
+(id)updateDataFetcherParams;
+(id)updateDataFetcherParamsFromExistingUpdateDataFetcherParams:(id)arg1 ;
-(id)withFilterResultsForOtherBundleIds:(BOOL)arg1 ;
-(id)withAppId:(id)arg1 ;
-(id)withBundleId:(id)arg1 ;
-(id)withReleaseChannel:(id)arg1 ;
-(id)withLimit:(unsigned long long)arg1 ;
-(id)build;
@end

