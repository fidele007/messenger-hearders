/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface MNPollOptionInfo : FBValueObject <NSCopying> {

	BOOL _isSelected;
	NSString* _FBID;
	NSString* _text;
	NSArray* _topVoterIDs;
	long long _totalVoterCount;

}

@property (nonatomic,copy,readonly) NSString * FBID;                    //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,readonly) BOOL isSelected;                         //@synthesize isSelected=_isSelected - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                    //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSArray * topVoterIDs;              //@synthesize topVoterIDs=_topVoterIDs - In the implementation block
@property (nonatomic,readonly) long long totalVoterCount;               //@synthesize totalVoterCount=_totalVoterCount - In the implementation block
-(NSString *)FBID;
-(id)initWithFBID:(id)arg1 isSelected:(BOOL)arg2 text:(id)arg3 topVoterIDs:(id)arg4 totalVoterCount:(long long)arg5 ;
-(NSArray *)topVoterIDs;
-(long long)totalVoterCount;
-(NSString *)text;
-(BOOL)isSelected;
@end

