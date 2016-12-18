/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBGoodFriendsFeedQueries : NSObject
+(void)fetchCachedGoodFriendsListWithSession:(id)arg1 messagePackCoder:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)cacheGoodFriendsList:(id)arg1 withSession:(id)arg2 ;
+(void)fetchGoodFriendsListWithSession:(id)arg1 forceRefresh:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)_parseGoodFriendsFriendListWithResponse:(id)arg1 session:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)cachedGoodFriendsListWithSession:(id)arg1 ;
+(void)fetchFriendListWithMembersWithSession:(id)arg1 friendListID:(id)arg2 count:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
+(void)fetchTopFriendsWithSession:(id)arg1 count:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
@end
