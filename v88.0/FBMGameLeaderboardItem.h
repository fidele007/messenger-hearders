/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface FBMGameLeaderboardItem : FBValueObject <NSCoding, NSCopying> {

	NSString* _userFbid;
	NSString* _userShortName;
	NSNumber* _userScore;
	NSNumber* _rank;

}

@property (nonatomic,copy,readonly) NSString * userFbid;                   //@synthesize userFbid=_userFbid - In the implementation block
@property (nonatomic,copy,readonly) NSString * userShortName;              //@synthesize userShortName=_userShortName - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * userScore;                  //@synthesize userScore=_userScore - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rank;                       //@synthesize rank=_rank - In the implementation block
-(NSString *)userShortName;
-(NSNumber *)userScore;
-(NSString *)userFbid;
-(id)initWithUserFbid:(id)arg1 userShortName:(id)arg2 userScore:(id)arg3 rank:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)rank;
@end
