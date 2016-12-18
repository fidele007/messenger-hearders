/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class FBGraphQLQuery, NSDictionary, NSString;

@interface FBGraphQLDownloadRequest : FBNetworkerRequest {

	FBGraphQLQuery* _query;
	NSDictionary* _extraQueryParameters;
	NSString* _targetID;

}

@property (nonatomic,copy,readonly) NSString * targetID;                   //@synthesize targetID=_targetID - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryName; 
@property (nonatomic,retain,readonly) FBGraphQLQuery * query; 
-(id)networkRequest;
-(NSString *)queryName;
-(id)initWithQuery:(id)arg1 callbackPerformer:(id)arg2 ;
-(id)initWithTargetID:(id)arg1 callbackPerformer:(id)arg2 ;
-(id)newQuery;
-(id)initWithTargetID:(id)arg1 callbackPerformer:(id)arg2 extraQueryParameters:(id)arg3 ;
-(id)extraQueryParameters;
-(id)networkRequestForQuery:(id)arg1 withName:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(FBGraphQLQuery *)query;
-(id)parameters;
-(NSString *)targetID;
@end
