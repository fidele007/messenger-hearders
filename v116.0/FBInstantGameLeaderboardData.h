/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBQuicksilverPlayerInfo, NSString, FBInstantGameLeaderboardMoment, NSArray;

@interface FBInstantGameLeaderboardData : FBValueObject <NSCopying> {

	BOOL _hasGamePlayedInContext;
	FBQuicksilverPlayerInfo* _viewerInfo;
	NSString* _groupThreadName;
	unsigned long long _viewerRank;
	FBInstantGameLeaderboardMoment* _viewerLeaderboardMoment;
	NSArray* _playerList;

}

@property (nonatomic,copy,readonly) FBQuicksilverPlayerInfo * viewerInfo;                                  //@synthesize viewerInfo=_viewerInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasGamePlayedInContext;                                                //@synthesize hasGamePlayedInContext=_hasGamePlayedInContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupThreadName;                                            //@synthesize groupThreadName=_groupThreadName - In the implementation block
@property (nonatomic,readonly) unsigned long long viewerRank;                                              //@synthesize viewerRank=_viewerRank - In the implementation block
@property (nonatomic,copy,readonly) FBInstantGameLeaderboardMoment * viewerLeaderboardMoment;              //@synthesize viewerLeaderboardMoment=_viewerLeaderboardMoment - In the implementation block
@property (nonatomic,copy,readonly) NSArray * playerList;                                                  //@synthesize playerList=_playerList - In the implementation block
-(FBQuicksilverPlayerInfo *)viewerInfo;
-(NSArray *)playerList;
-(id)initWithViewerInfo:(id)arg1 hasGamePlayedInContext:(BOOL)arg2 groupThreadName:(id)arg3 viewerRank:(unsigned long long)arg4 viewerLeaderboardMoment:(id)arg5 playerList:(id)arg6 ;
-(BOOL)hasGamePlayedInContext;
-(NSString *)groupThreadName;
-(unsigned long long)viewerRank;
-(FBInstantGameLeaderboardMoment *)viewerLeaderboardMoment;
@end

