/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGenericFetcher.h>

@class FBUserSession, NSString;

@interface FBInstantGameAllMatchesFetcher : FBGenericFetcher {

	FBUserSession* _session;
	NSString* _gameID;
	NSString* _threadID;

}
-(id)initWithSession:(id)arg1 gameID:(id)arg2 threadID:(id)arg3 ;
-(void)fetchSectionsData:(/*^block*/id)arg1 ;
@end

