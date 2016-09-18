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

@class NSString, NSArray;

@interface FBMPollOption : FBValueObject <NSCoding, NSCopying> {

	NSString* _optionId;
	NSString* _optionText;
	NSArray* _topVoterIds;
	long long _voterCount;
	double _relativeCount;

}

@property (nonatomic,copy,readonly) NSString * optionId;                //@synthesize optionId=_optionId - In the implementation block
@property (nonatomic,copy,readonly) NSString * optionText;              //@synthesize optionText=_optionText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * topVoterIds;              //@synthesize topVoterIds=_topVoterIds - In the implementation block
@property (nonatomic,readonly) long long voterCount;                    //@synthesize voterCount=_voterCount - In the implementation block
@property (nonatomic,readonly) double relativeCount;                    //@synthesize relativeCount=_relativeCount - In the implementation block
-(NSArray *)topVoterIds;
-(long long)voterCount;
-(NSString *)optionText;
-(double)relativeCount;
-(NSString *)optionId;
-(id)initWithOptionId:(id)arg1 optionText:(id)arg2 topVoterIds:(id)arg3 voterCount:(long long)arg4 relativeCount:(double)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
