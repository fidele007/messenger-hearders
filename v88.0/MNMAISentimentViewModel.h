/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
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
-(NSString *)submitButtonTitle;
-(id)initWithTitle:(id)arg1 question:(id)arg2 sentimentDislike:(id)arg3 sentimentLike:(id)arg4 sentimentLove:(id)arg5 neutralButtonTitle:(id)arg6 submitButtonTitle:(id)arg7 dismissButtonTitle:(id)arg8 ;
-(NSString *)question;
-(NSString *)sentimentDislike;
-(NSString *)sentimentLike;
-(NSString *)sentimentLove;
-(NSString *)neutralButtonTitle;
-(FBStringWithRedactedDescription *)title;
-(NSString *)dismissButtonTitle;
@end

