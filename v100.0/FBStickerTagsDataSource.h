/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession;

@interface FBStickerTagsDataSource : NSObject {

	FBUserSession* _session;

}
-(void)fetchStickerTagsWithTaggedStickersWithType:(unsigned long long)arg1 imageScale:(double)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchStickerTagsWithType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchStickersTaggedWith:(id)arg1 layoutIdiom:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_parseStickerTagsResponse:(id)arg1 graphQLQuery:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_handleError:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_parseTaggedStickersResponse:(id)arg1 graphQLQuery:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_parseStickerTagsWithTaggedStickersResponse:(id)arg1 graphQLQuery:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_handleSuccess:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end

