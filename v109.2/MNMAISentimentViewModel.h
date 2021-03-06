/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBStringWithRedactedDescription, NSString;

@interface MNMAISentimentViewModel : FBValueObject <NSCopying> {

	FBStringWithRedactedDescription* _title;
	NSString* _question;
	NSString* _sentimentDislike;
	NSString* _sentimentLike;
	NSString* _sentimentLove;
	NSString* _neutralButtonTitle;
	NSString* _submitButtonTitle;
	NSString* _dismissButtonTitle;

}

@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * question;                                  //@synthesize question=_question - In the implementation block
@property (nonatomic,copy,readonly) NSString * sentimentDislike;                          //@synthesize sentimentDislike=_sentimentDislike - In the implementation block
@property (nonatomic,copy,readonly) NSString * sentimentLike;                             //@synthesize sentimentLike=_sentimentLike - In the implementation block
@property (nonatomic,copy,readonly) NSString * sentimentLove;                             //@synthesize sentimentLove=_sentimentLove - In the implementation block
@property (nonatomic,copy,readonly) NSString * neutralButtonTitle;                        //@synthesize neutralButtonTitle=_neutralButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * submitButtonTitle;                         //@synthesize submitButtonTitle=_submitButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * dismissButtonTitle;                        //@synthesize dismissButtonTitle=_dismissButtonTitle - In the implementation block
-(id)initWithTitle:(id)arg1 question:(id)arg2 sentimentDislike:(id)arg3 sentimentLike:(id)arg4 sentimentLove:(id)arg5 neutralButtonTitle:(id)arg6 submitButtonTitle:(id)arg7 dismissButtonTitle:(id)arg8 ;
-(NSString *)sentimentDislike;
-(NSString *)sentimentLike;
-(NSString *)sentimentLove;
-(NSString *)neutralButtonTitle;
-(NSString *)submitButtonTitle;
-(NSString *)question;
-(FBStringWithRedactedDescription *)title;
-(NSString *)dismissButtonTitle;
@end

