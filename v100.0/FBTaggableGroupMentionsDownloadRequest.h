/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLDownloadRequest.h>

@interface FBTaggableGroupMentionsDownloadRequest : FBGraphQLDownloadRequest {

	unsigned long long _filterType;

}

@property (assign,nonatomic) unsigned long long filterType;              //@synthesize filterType=_filterType - In the implementation block
-(id)newQuery;
-(id)initWithCallbackPerformer:(id)arg1 filterTypes:(id)arg2 queryString:(id)arg3 fetchLimit:(unsigned long long)arg4 photoSize:(unsigned long long)arg5 targetID:(id)arg6 ;
-(unsigned long long)filterType;
-(void)setFilterType:(unsigned long long)arg1 ;
@end

