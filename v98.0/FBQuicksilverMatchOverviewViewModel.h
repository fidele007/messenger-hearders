/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBQuicksilverThreadMatchViewModel, FBQuicksilverMatchupViewModel, NSArray;

@interface FBQuicksilverMatchOverviewViewModel : FBValueObject <NSCopying> {

	FBQuicksilverThreadMatchViewModel* _threadMatchViewModel;
	FBQuicksilverMatchupViewModel* _matchupViewModel;
	NSArray* _leaderboard;

}

@property (nonatomic,copy,readonly) FBQuicksilverThreadMatchViewModel * threadMatchViewModel;              //@synthesize threadMatchViewModel=_threadMatchViewModel - In the implementation block
@property (nonatomic,copy,readonly) FBQuicksilverMatchupViewModel * matchupViewModel;                      //@synthesize matchupViewModel=_matchupViewModel - In the implementation block
@property (nonatomic,copy,readonly) NSArray * leaderboard;                                                 //@synthesize leaderboard=_leaderboard - In the implementation block
-(id)initWithThreadMatchViewModel:(id)arg1 matchupViewModel:(id)arg2 leaderboard:(id)arg3 ;
-(FBQuicksilverThreadMatchViewModel *)threadMatchViewModel;
-(FBQuicksilverMatchupViewModel *)matchupViewModel;
-(NSArray *)leaderboard;
@end

