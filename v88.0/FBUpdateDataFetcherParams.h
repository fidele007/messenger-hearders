/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBUpdateDataFetcherParams : FBValueObject <NSCopying> {

	BOOL _filterResultsForOtherBundleIds;
	NSString* _appId;
	NSString* _bundleId;
	NSString* _releaseChannel;
	unsigned long long _limit;

}

@property (nonatomic,copy,readonly) NSString * appId;                            //@synthesize appId=_appId - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleId;                         //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,copy,readonly) NSString * releaseChannel;                   //@synthesize releaseChannel=_releaseChannel - In the implementation block
@property (nonatomic,readonly) unsigned long long limit;                         //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) BOOL filterResultsForOtherBundleIds;              //@synthesize filterResultsForOtherBundleIds=_filterResultsForOtherBundleIds - In the implementation block
-(NSString *)releaseChannel;
-(BOOL)filterResultsForOtherBundleIds;
-(id)initWithAppId:(id)arg1 bundleId:(id)arg2 releaseChannel:(id)arg3 limit:(unsigned long long)arg4 filterResultsForOtherBundleIds:(BOOL)arg5 ;
-(NSString *)bundleId;
-(NSString *)appId;
-(unsigned long long)limit;
@end

