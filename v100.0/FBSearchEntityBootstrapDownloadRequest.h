/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLDownloadRequest.h>

@class NSArray;

@interface FBSearchEntityBootstrapDownloadRequest : FBGraphQLDownloadRequest {

	unsigned long long _maxResultCount;
	NSArray* _filterTypes;

}

@property (nonatomic,readonly) unsigned long long maxResultCount;              //@synthesize maxResultCount=_maxResultCount - In the implementation block
@property (nonatomic,readonly) NSArray * filterTypes;                          //@synthesize filterTypes=_filterTypes - In the implementation block
-(id)newQuery;
-(id)initWithUserID:(id)arg1 maxResultCount:(unsigned long long)arg2 filterTypes:(id)arg3 callbackPerformer:(id)arg4 ;
-(unsigned long long)maxResultCount;
-(NSArray *)filterTypes;
@end
