/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, NSDictionary;

@interface FBPaymentsPeerToPeerTransferStatusModelForPaymentAttachmentView : FBValueObject <NSCopying> {

	BOOL _shouldShowTimestamp;
	BOOL _isNameIncludedInDescriptionTitle;
	BOOL _shouldShowAmountSubtitleIfPossible;
	long long _colorPolicy;
	NSString* _statusText;
	long long _actionDisplayMode;
	long long _tapActionType;
	NSString* _descriptionTitle;
	NSString* _descriptionText;
	UIColor* _actionSectionBackgroundColor;
	NSString* _actionButtonTitle;
	long long _actionType;
	NSString* _otherButtonTitle;
	NSDictionary* _experimentContexts;

}

@property (nonatomic,readonly) long long colorPolicy;                                    //@synthesize colorPolicy=_colorPolicy - In the implementation block
@property (nonatomic,copy,readonly) NSString * statusText;                               //@synthesize statusText=_statusText - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowTimestamp;                                 //@synthesize shouldShowTimestamp=_shouldShowTimestamp - In the implementation block
@property (nonatomic,readonly) long long actionDisplayMode;                              //@synthesize actionDisplayMode=_actionDisplayMode - In the implementation block
@property (nonatomic,readonly) long long tapActionType;                                  //@synthesize tapActionType=_tapActionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptionTitle;                         //@synthesize descriptionTitle=_descriptionTitle - In the implementation block
@property (nonatomic,readonly) BOOL isNameIncludedInDescriptionTitle;                    //@synthesize isNameIncludedInDescriptionTitle=_isNameIncludedInDescriptionTitle - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowAmountSubtitleIfPossible;                  //@synthesize shouldShowAmountSubtitleIfPossible=_shouldShowAmountSubtitleIfPossible - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptionText;                          //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy,readonly) UIColor * actionSectionBackgroundColor;              //@synthesize actionSectionBackgroundColor=_actionSectionBackgroundColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionButtonTitle;                        //@synthesize actionButtonTitle=_actionButtonTitle - In the implementation block
@property (nonatomic,readonly) long long actionType;                                     //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * otherButtonTitle;                         //@synthesize otherButtonTitle=_otherButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * experimentContexts;                   //@synthesize experimentContexts=_experimentContexts - In the implementation block
-(NSDictionary *)experimentContexts;
-(long long)colorPolicy;
-(BOOL)shouldShowTimestamp;
-(NSString *)descriptionTitle;
-(BOOL)isNameIncludedInDescriptionTitle;
-(BOOL)shouldShowAmountSubtitleIfPossible;
-(id)initWithColorPolicy:(long long)arg1 statusText:(id)arg2 shouldShowTimestamp:(BOOL)arg3 actionDisplayMode:(long long)arg4 tapActionType:(long long)arg5 descriptionTitle:(id)arg6 isNameIncludedInDescriptionTitle:(BOOL)arg7 shouldShowAmountSubtitleIfPossible:(BOOL)arg8 descriptionText:(id)arg9 actionSectionBackgroundColor:(id)arg10 actionButtonTitle:(id)arg11 actionType:(long long)arg12 otherButtonTitle:(id)arg13 experimentContexts:(id)arg14 ;
-(long long)actionDisplayMode;
-(long long)tapActionType;
-(UIColor *)actionSectionBackgroundColor;
-(NSString *)otherButtonTitle;
-(NSString *)descriptionText;
-(NSString *)statusText;
-(NSString *)actionButtonTitle;
-(long long)actionType;
@end

