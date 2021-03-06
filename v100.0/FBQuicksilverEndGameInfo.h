/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBQuicksilverSessionInfo, NSNumber, NSString, NSArray;

@interface FBQuicksilverEndGameInfo : FBValueObject <NSCopying> {

	FBQuicksilverSessionInfo* _sessionInfo;
	NSNumber* _score;
	NSString* _scoreString;
	NSArray* _screenshots;

}

@property (nonatomic,copy,readonly) FBQuicksilverSessionInfo * sessionInfo;              //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * score;                                    //@synthesize score=_score - In the implementation block
@property (nonatomic,copy,readonly) NSString * scoreString;                              //@synthesize scoreString=_scoreString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * screenshots;                               //@synthesize screenshots=_screenshots - In the implementation block
-(NSString *)scoreString;
-(id)initWithSessionInfo:(id)arg1 score:(id)arg2 scoreString:(id)arg3 screenshots:(id)arg4 ;
-(NSArray *)screenshots;
-(FBQuicksilverSessionInfo *)sessionInfo;
-(NSNumber *)score;
@end

