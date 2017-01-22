/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBQuicksilverPlayerInfo, NSString, NSArray;

@interface FBInstantGameLeaderboardData : FBValueObject <NSCopying> {

	BOOL _hasGamePlayedInThread;
	FBQuicksilverPlayerInfo* _viewerInfo;
	NSString* _groupThreadName;
	unsigned long long _viewerRank;
	NSArray* _playerList;

}

@property (nonatomic,copy,readonly) FBQuicksilverPlayerInfo * viewerInfo;              //@synthesize viewerInfo=_viewerInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasGamePlayedInThread;                             //@synthesize hasGamePlayedInThread=_hasGamePlayedInThread - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupThreadName;                        //@synthesize groupThreadName=_groupThreadName - In the implementation block
@property (nonatomic,readonly) unsigned long long viewerRank;                          //@synthesize viewerRank=_viewerRank - In the implementation block
@property (nonatomic,copy,readonly) NSArray * playerList;                              //@synthesize playerList=_playerList - In the implementation block
-(FBQuicksilverPlayerInfo *)viewerInfo;
-(NSArray *)playerList;
-(id)initWithViewerInfo:(id)arg1 hasGamePlayedInThread:(BOOL)arg2 groupThreadName:(id)arg3 viewerRank:(unsigned long long)arg4 playerList:(id)arg5 ;
-(BOOL)hasGamePlayedInThread;
-(NSString *)groupThreadName;
-(unsigned long long)viewerRank;
@end
