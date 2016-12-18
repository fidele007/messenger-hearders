/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSAttributedString, NSArray, FBMIndexedUserSet, UIColor;

@interface MNPollAdminMessageViewModel : FBValueObject <NSCopying> {

	NSString* _updateSummaryText;
	NSString* _questionFBID;
	NSString* _questionText;
	NSAttributedString* _titleAttributedString;
	NSArray* _options;
	NSString* _moreOptionText;
	NSString* _voteButtonText;
	FBMIndexedUserSet* _userSet;
	NSString* _threadFBID;
	UIColor* _themeColor;

}

@property (nonatomic,copy,readonly) NSString * updateSummaryText;                            //@synthesize updateSummaryText=_updateSummaryText - In the implementation block
@property (nonatomic,copy,readonly) NSString * questionFBID;                                 //@synthesize questionFBID=_questionFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * questionText;                                 //@synthesize questionText=_questionText - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * titleAttributedString;              //@synthesize titleAttributedString=_titleAttributedString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * options;                                       //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * moreOptionText;                               //@synthesize moreOptionText=_moreOptionText - In the implementation block
@property (nonatomic,copy,readonly) NSString * voteButtonText;                               //@synthesize voteButtonText=_voteButtonText - In the implementation block
@property (nonatomic,copy,readonly) FBMIndexedUserSet * userSet;                             //@synthesize userSet=_userSet - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadFBID;                                   //@synthesize threadFBID=_threadFBID - In the implementation block
@property (nonatomic,copy,readonly) UIColor * themeColor;                                    //@synthesize themeColor=_themeColor - In the implementation block
-(NSString *)threadFBID;
-(UIColor *)themeColor;
-(NSString *)moreOptionText;
-(NSString *)voteButtonText;
-(NSString *)updateSummaryText;
-(FBMIndexedUserSet *)userSet;
-(NSString *)questionFBID;
-(id)initWithUpdateSummaryText:(id)arg1 questionFBID:(id)arg2 questionText:(id)arg3 titleAttributedString:(id)arg4 options:(id)arg5 moreOptionText:(id)arg6 voteButtonText:(id)arg7 userSet:(id)arg8 threadFBID:(id)arg9 themeColor:(id)arg10 ;
-(NSString *)questionText;
-(NSAttributedString *)titleAttributedString;
-(NSArray *)options;
@end
